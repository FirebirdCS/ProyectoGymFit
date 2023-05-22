#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace Data;
using namespace Data::SqlClient;

ref class Conexion {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;

protected:
	void Conectar() {
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
	}
public:
	User^ IniciarSesion(String^ usuario, String^ contrasenia) {
		Conectar();
		try {
			String^ sqlQuery = "SELECT * FROM Usuario WHERE usuario = @usuario AND contrasenia = @contrasenia;";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, cn);
			command->Parameters->AddWithValue("@usuario", usuario);
			command->Parameters->AddWithValue("@contrasenia", contrasenia);
			cn->Open();
			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				User^ user = gcnew User;
				user->id = reader->GetInt32(0);
				user->usuario = reader->GetString(1);
				user->password = reader->GetString(2);
				cn->Close();
				return user;
			}
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al iniciar sesión: " + ex->Message);
		}
		return nullptr;
	}
	void InsertarInscripcion(DateTime fechaInscripcion) {
		String^ sentencia = "INSERT INTO Inscripcion (fechaInscripcion) VALUES (@fechaIns)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@fechaIns", fechaInscripcion);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar la inscripción: " + ex->Message);
		}
	}
	void ActualizarInscripcion(int id_inscripcion, DateTime fechaInscripcion) {
		String^ sentencia = "UPDATE Inscripcion SET fechaInscripcion = @fechaIns WHERE id_inscripcion = @id_inscripcion";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_inscripcion", id_inscripcion);
		ejecutar->Parameters->AddWithValue("@fechaIns", fechaInscripcion);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al actualizar la inscripción: " + ex->Message);
		}
	}
};