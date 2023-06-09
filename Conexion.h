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
	void InsertarMembresia(String^ tipoMembresia, String^ tieneSpa, String^ tieneMaquinas, String^ tieneDucha, String^ tieneEntrenador, Decimal precio) {
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
	void InsertarJornada(DateTime horaInicio, DateTime horaFinal) {
		Conectar();
		String^ sentencia = "INSERT INTO Jornada VALUES (@horaInicio, @horaFinal)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@horaInicio", horaInicio);
		ejecutar->Parameters->AddWithValue("@horaFinal", horaFinal);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar la jornada: " + ex->Message);
		}
	}

	void ActualizarJornada(int id_jornada, DateTime horaInicio, DateTime horaFinal) {
		Conectar();
		String^ sentencia = "UPDATE Jornada SET horaInicio = @horaI, horaFinal = @horaF WHERE id_jornada = @id_jornada";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_jornada", id_jornada);
		ejecutar->Parameters->AddWithValue("@horaI", horaInicio);
		ejecutar->Parameters->AddWithValue("@horaF", horaFinal);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al actualizar sede " + ex->Message);
		}
	}
	void InsertarCliente(String^ cliente_Nombre, String^ cliente_Apellido, String^ cliente_Direccion, String^ cliente_Telefono
		, int id_Sede, int id_Membresia, int id_Inscripcion) {
		Conectar();
		String^ sentencia = "INSERT INTO Cliente VALUES (@nombre, @apellido, @direccion, @telefono, @id_Sede, @id_Membresia, @id_Inscripcion)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@nombre", cliente_Nombre);
		ejecutar->Parameters->AddWithValue("@apellido", cliente_Apellido);
		ejecutar->Parameters->AddWithValue("@direccion", cliente_Direccion);
		ejecutar->Parameters->AddWithValue("@telefono", cliente_Telefono);
		ejecutar->Parameters->AddWithValue("@id_Sede", id_Sede);
		ejecutar->Parameters->AddWithValue("@id_Membresia", id_Membresia);
		ejecutar->Parameters->AddWithValue("@id_Inscripcion", id_Inscripcion);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar el cliente: " + ex->Message);
		}
	}
	void ActualizarCliente(int id_cliente, String^ cliente_Nombre, String^ cliente_Apellido, String^ cliente_Direccion, String^ cliente_Telefono
		, int id_Sede, int id_Membresia, int id_Inscripcion) {
		Conectar();
		String^ sentencia = "UPDATE CLIENTE SET cliente_Nombre = @nombre,  cliente_Apellido = @apellido, cliente_Direccion = @direccion, cliente_Telefono =  @telefono, id_Sede = @id_Sede, id_Membresia = @id_Membresia, id_Inscripcion = @id_Inscripcion WHERE id_cliente = @id_cliente";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_cliente", id_cliente);
		ejecutar->Parameters->AddWithValue("@nombre", cliente_Nombre);
		ejecutar->Parameters->AddWithValue("@apellido", cliente_Apellido);
		ejecutar->Parameters->AddWithValue("@direccion", cliente_Direccion);
		ejecutar->Parameters->AddWithValue("@telefono", cliente_Telefono);
		ejecutar->Parameters->AddWithValue("@id_Sede", id_Sede);
		ejecutar->Parameters->AddWithValue("@id_Membresia", id_Membresia);
		ejecutar->Parameters->AddWithValue("@id_Inscripcion", id_Inscripcion);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar el cliente: " + ex->Message);
		}
	}
	void InsertarEmpleado(String^ empleado_Nombre, String^ empleado_Apellido, String^ empleado_Direccion, String^ empleado_Telefono
		, DateTime fechaNac, String^ titulo, int id_sede, int id_jornada) {
		Conectar();
		String^ sentencia = "INSERT INTO Empleado VALUES (@nombre, @apellido, @direccion, @telefono, @fechaNac, @titulo, @id_sede, @id_jornada)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@nombre", empleado_Nombre);
		ejecutar->Parameters->AddWithValue("@apellido", empleado_Apellido);
		ejecutar->Parameters->AddWithValue("@direccion", empleado_Direccion);
		ejecutar->Parameters->AddWithValue("@telefono", empleado_Telefono);
		ejecutar->Parameters->AddWithValue("@fechaNac", fechaNac);
		ejecutar->Parameters->AddWithValue("@titulo", titulo);
		ejecutar->Parameters->AddWithValue("@id_sede", id_sede);
		ejecutar->Parameters->AddWithValue("@id_jornada", id_jornada);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al insertar el empleado: " + ex->Message);
		}
	}
	void ActualizarEmpleado(int id_empleado, String^ empleado_Nombre, String^ empleado_Apellido, String^ empleado_Direccion, String^ empleado_Telefono
		, DateTime fechaNac, String^ titulo, int id_sede, int id_jornada) {
		Conectar();
		String^ sentencia = "UPDATE Empleado SET empleado_Nombre = @nombre,  empleado_Apellido = @apellido, empleado_Direccion = @direccion, empleado_Telefono =  @telefono, empleado_FechaNac = @fechaNac, empleado_Titulo = @titulo, id_Sede = @id_Sede, id_Jornada = @id_Jornada WHERE id_empleado = @id_empleado";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_empleado", id_empleado);
		ejecutar->Parameters->AddWithValue("@nombre", empleado_Nombre);
		ejecutar->Parameters->AddWithValue("@apellido", empleado_Apellido);
		ejecutar->Parameters->AddWithValue("@direccion", empleado_Direccion);
		ejecutar->Parameters->AddWithValue("@telefono", empleado_Telefono);
		ejecutar->Parameters->AddWithValue("@fechaNac", fechaNac);
		ejecutar->Parameters->AddWithValue("@titulo", titulo);
		ejecutar->Parameters->AddWithValue("@id_sede", id_sede);
		ejecutar->Parameters->AddWithValue("@id_jornada", id_jornada);
		try {
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error al actualizar el empleado: " + ex->Message);
		}
	}
};