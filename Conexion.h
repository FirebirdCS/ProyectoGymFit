#pragma once
#include "User.h"
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
		st->DataSource = "localhost\\SQLEXPRESS";
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
		Conectar();
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
		Conectar();
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
	void InsertarMembresia(String^ tipoMembresia, String^ tieneSpa, String^ tieneMaquinas, String^ tieneDucha, String^ tieneEntrenador, Decimal precio){
		Conectar();
		String^ sentencia = "INSERT INTO Membresia VALUES (@tipoMembresia, @tieneSpa, @tieneMaquinas, @tieneDucha, @tieneEntrenador, @precio)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@tipoMembresia", tipoMembresia);
		ejecutar->Parameters->AddWithValue("@tieneSpa", tieneSpa);
		ejecutar->Parameters->AddWithValue("@tieneMaquinas", tieneMaquinas);
		ejecutar->Parameters->AddWithValue("@tieneDucha", tieneDucha);
		ejecutar->Parameters->AddWithValue("@tieneEntrenador", tieneEntrenador);
		ejecutar->Parameters->AddWithValue("@precio", precio);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar la membresia: " + ex->Message);
		}
	}

	void ActualizarMembresia(int id_membresia, String^ tipoMembresia, String^ tieneSpa, String^ tieneMaquinas, String^ tieneDucha, String^ tieneEntrenador, Decimal precio) {
		Conectar();
		String^ sentencia = "UPDATE Membresia SET tipoMembresia = @tipoMembresia, tieneSpa = @tieneSpa, tieneMaquinas = @tieneMaquinas, tieneDucha = @tieneDucha, tieneEntrenador = @tieneEntrenador, precio = @precio WHERE id_membresia = @id_membresia";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_membresia", id_membresia);
		ejecutar->Parameters->AddWithValue("@tipoMembresia", tipoMembresia);
		ejecutar->Parameters->AddWithValue("@tieneSpa", tieneSpa);
		ejecutar->Parameters->AddWithValue("@tieneMaquinas", tieneMaquinas);
		ejecutar->Parameters->AddWithValue("@tieneDucha", tieneDucha);
		ejecutar->Parameters->AddWithValue("@tieneEntrenador", tieneEntrenador);
		ejecutar->Parameters->AddWithValue("@precio", precio);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al actualizar la inscripción: " + ex->Message);
		}
	}
	void InsertarSede(String^ sede_Nombre, String^ sede_Direccion, String^ sede_Departamento) {
		Conectar();
		String^ sentencia = "INSERT INTO Sede VALUES (@sede_Nombre, @sede_Direccion, @sede_Departamento)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@sede_Nombre", sede_Nombre);
		ejecutar->Parameters->AddWithValue("@sede_Direccion", sede_Direccion);
		ejecutar->Parameters->AddWithValue("@sede_Departamento", sede_Departamento);
	
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar sede: " + ex->Message);
		}
	}

	void ActualizarSede(int id_sede, String^ sede_Nombre, String^ sede_Direccion, String^ sede_Departamento) {
		Conectar();
		String^ sentencia = "UPDATE Sede SET sede_Nombre = @sede_Nombre, sede_Direccion = @sede_Direccion,sede_Departamento= @sede_Departamento  WHERE id_sede = @id_sede";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_sede", id_sede);
		ejecutar->Parameters->AddWithValue("@sede_Nombre", sede_Nombre);
		ejecutar->Parameters->AddWithValue("@sede_Direccion", sede_Direccion);
		ejecutar->Parameters->AddWithValue("@sede_Departamento", sede_Departamento);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al actualizar sede " + ex->Message);
		}
	}
};