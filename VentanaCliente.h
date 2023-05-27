#pragma once

#include "VentanaInscripcion.h"
#include "VentanaMembresia.h"
#include "User.h"
#include "VentanaSede.h"
#include "Conexion.h"

namespace ProyectoGymFit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaCliente
	/// </summary>
	public ref class VentanaCliente : public System::Windows::Forms::Form
	{
	public:
		VentanaCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CenterToScreen();
			fillComboBox();
			fillComboBox2();
			fillComboBox3();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::Button^ btnInscripcion;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::Button^ btnConsultar;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listClientes;
	private: System::Windows::Forms::ColumnHeader^ colIdCliente;
	private: System::Windows::Forms::ColumnHeader^ colClienteNombre;
	private: System::Windows::Forms::ColumnHeader^ colClienteApellido;
	private: System::Windows::Forms::ColumnHeader^ colClienteDir;
	private: System::Windows::Forms::ColumnHeader^ colClienteTelefono;
	private: System::Windows::Forms::ColumnHeader^ colIdSede;
	private: System::Windows::Forms::ColumnHeader^ colIdMembresía;
	private: System::Windows::Forms::ColumnHeader^ colIdInscripcion;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtIdCliente;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::ComboBox^ cmbSede;
	private: System::Windows::Forms::ComboBox^ cmbMembresia;
	private: System::Windows::Forms::ComboBox^ cmbInscripcion;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->btnInscripcion = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listClientes = (gcnew System::Windows::Forms::ListView());
			this->colIdCliente = (gcnew System::Windows::Forms::ColumnHeader());
			this->colClienteNombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->colClienteApellido = (gcnew System::Windows::Forms::ColumnHeader());
			this->colClienteDir = (gcnew System::Windows::Forms::ColumnHeader());
			this->colClienteTelefono = (gcnew System::Windows::Forms::ColumnHeader());
			this->colIdSede = (gcnew System::Windows::Forms::ColumnHeader());
			this->colIdMembresía = (gcnew System::Windows::Forms::ColumnHeader());
			this->colIdInscripcion = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->cmbSede = (gcnew System::Windows::Forms::ComboBox());
			this->cmbMembresia = (gcnew System::Windows::Forms::ComboBox());
			this->cmbInscripcion = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnRegresar
			// 
			this->btnRegresar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnRegresar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(825, 604);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(214, 35);
			this->btnRegresar->TabIndex = 0;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &VentanaCliente::btnRegresar_Click);
			// 
			// btnInscripcion
			// 
			this->btnInscripcion->BackColor = System::Drawing::Color::SkyBlue;
			this->btnInscripcion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInscripcion->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInscripcion->Location = System::Drawing::Point(850, 278);
			this->btnInscripcion->Name = L"btnInscripcion";
			this->btnInscripcion->Size = System::Drawing::Size(189, 35);
			this->btnInscripcion->TabIndex = 1;
			this->btnInscripcion->Text = L"Inscripcion";
			this->btnInscripcion->UseVisualStyleBackColor = false;
			this->btnInscripcion->Click += gcnew System::EventHandler(this, &VentanaCliente::btnInscripcion_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(850, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Membresia";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaCliente::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(850, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Sedes";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaCliente::button2_Click);
			// 
			// btnActualizar
			// 
			this->btnActualizar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnActualizar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnActualizar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizar->Location = System::Drawing::Point(572, 604);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(203, 35);
			this->btnActualizar->TabIndex = 13;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = false;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &VentanaCliente::btnActualizar_Click);
			// 
			// btnConsultar
			// 
			this->btnConsultar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnConsultar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnConsultar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultar->Location = System::Drawing::Point(295, 604);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(204, 35);
			this->btnConsultar->TabIndex = 12;
			this->btnConsultar->Text = L"Consultar";
			this->btnConsultar->UseVisualStyleBackColor = false;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &VentanaCliente::btnConsultar_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnGuardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(50, 604);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(171, 35);
			this->btnGuardar->TabIndex = 11;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &VentanaCliente::btnGuardar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(512, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 27);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Cliente";
			// 
			// listClientes
			// 
			this->listClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->colIdCliente,
					this->colClienteNombre, this->colClienteApellido, this->colClienteDir, this->colClienteTelefono, this->colIdSede, this->colIdMembresía,
					this->colIdInscripcion
			});
			this->listClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listClientes->HideSelection = false;
			this->listClientes->Location = System::Drawing::Point(50, 364);
			this->listClientes->Name = L"listClientes";
			this->listClientes->Size = System::Drawing::Size(989, 172);
			this->listClientes->TabIndex = 15;
			this->listClientes->UseCompatibleStateImageBehavior = false;
			this->listClientes->View = System::Windows::Forms::View::Details;
			// 
			// colIdCliente
			// 
			this->colIdCliente->Text = L"Id";
			this->colIdCliente->Width = 45;
			// 
			// colClienteNombre
			// 
			this->colClienteNombre->Text = L"Nombre";
			this->colClienteNombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colClienteNombre->Width = 140;
			// 
			// colClienteApellido
			// 
			this->colClienteApellido->Text = L"Apellido";
			this->colClienteApellido->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colClienteApellido->Width = 138;
			// 
			// colClienteDir
			// 
			this->colClienteDir->Text = L"Dirección";
			this->colClienteDir->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colClienteDir->Width = 141;
			// 
			// colClienteTelefono
			// 
			this->colClienteTelefono->Text = L"Telefono";
			this->colClienteTelefono->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colClienteTelefono->Width = 115;
			// 
			// colIdSede
			// 
			this->colIdSede->Text = L"Id_Sede";
			this->colIdSede->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colIdSede->Width = 98;
			// 
			// colIdMembresía
			// 
			this->colIdMembresía->Text = L"Id_Membresía";
			this->colIdMembresía->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colIdMembresía->Width = 165;
			// 
			// colIdInscripcion
			// 
			this->colIdInscripcion->Text = L"Id_Inscripcion";
			this->colIdInscripcion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colIdInscripcion->Width = 147;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 27);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 27);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 27);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Id";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(452, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 27);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Id_Sede";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(452, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 27);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(45, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 27);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Dirección";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(452, 225);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 27);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Id_Membresía";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(452, 282);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(180, 27);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Id_Inscripción";
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(205, 129);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->Size = System::Drawing::Size(223, 22);
			this->txtIdCliente->TabIndex = 24;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(205, 175);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(223, 22);
			this->txtNombre->TabIndex = 25;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(205, 222);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(223, 22);
			this->txtApellido->TabIndex = 26;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(205, 282);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(223, 22);
			this->txtDireccion->TabIndex = 27;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(587, 125);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(223, 22);
			this->txtTelefono->TabIndex = 28;
			// 
			// cmbSede
			// 
			this->cmbSede->FormattingEnabled = true;
			this->cmbSede->Location = System::Drawing::Point(587, 175);
			this->cmbSede->Name = L"cmbSede";
			this->cmbSede->Size = System::Drawing::Size(223, 24);
			this->cmbSede->TabIndex = 29;
			// 
			// cmbMembresia
			// 
			this->cmbMembresia->FormattingEnabled = true;
			this->cmbMembresia->Location = System::Drawing::Point(645, 225);
			this->cmbMembresia->Name = L"cmbMembresia";
			this->cmbMembresia->Size = System::Drawing::Size(165, 24);
			this->cmbMembresia->TabIndex = 30;
			// 
			// cmbInscripcion
			// 
			this->cmbInscripcion->FormattingEnabled = true;
			this->cmbInscripcion->Location = System::Drawing::Point(645, 283);
			this->cmbInscripcion->Name = L"cmbInscripcion";
			this->cmbInscripcion->Size = System::Drawing::Size(165, 24);
			this->cmbInscripcion->TabIndex = 31;
			// 
			// VentanaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1110, 666);
			this->Controls->Add(this->cmbInscripcion);
			this->Controls->Add(this->cmbMembresia);
			this->Controls->Add(this->cmbSede);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtIdCliente);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listClientes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnInscripcion);
			this->Controls->Add(this->btnRegresar);
			this->Name = L"VentanaCliente";
			this->Text = L"Cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void fillComboBox() {
			SqlConnection^ cn;
			SqlConnectionStringBuilder^ st;
			st = gcnew SqlConnectionStringBuilder();
			st->DataSource = "localhost";
			st->InitialCatalog = "dbGymFit";
			st->IntegratedSecurity = true;
			cn = gcnew SqlConnection(Convert::ToString(st));
			String^ query = "SELECT * FROM Inscripcion";
			SqlCommand^ command = gcnew SqlCommand(query, cn);
			try {
				cn->Open();
				SqlDataReader^ reader = command->ExecuteReader();
				int idIndex = reader->GetOrdinal("id_inscripcion"); // Obtener el índice de la columna
				int fechaIndex = reader->GetOrdinal("fechaInscripcion"); // Obtener el índice de la columna
				while (reader->Read()) {
					int nId = reader->GetInt32(idIndex); // Obtener el valor entero
					DateTime^ nFecha = reader->GetDateTime(fechaIndex); // Obtener el valor de "fechaInscripcion"
					String^ comboItem = nId.ToString() + " - " + nFecha->ToString(); // Concatenar el ID y la fecha
					cmbInscripcion->Items->Add(comboItem); // Agregar al ComboBox
				}
				cn->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error al ejecutar la petición: " + ex->Message);
			}
		}
		void fillComboBox2() {
			SqlConnection^ cn;
			SqlConnectionStringBuilder^ st;
			st = gcnew SqlConnectionStringBuilder();
			st->DataSource = "localhost";
			st->InitialCatalog = "dbGymFit";
			st->IntegratedSecurity = true;
			cn = gcnew SqlConnection(Convert::ToString(st));
			String^ query = "SELECT * FROM Membresia";
			SqlCommand^ command = gcnew SqlCommand(query, cn);
			try {
				cn->Open();
				SqlDataReader^ reader = command->ExecuteReader();
				int idIndex = reader->GetOrdinal("id_membresia");
				int tipoMembresiaIndex = reader->GetOrdinal("tipoMembresia");
				while (reader->Read()) {
					int nId = reader->GetInt32(idIndex);
					String^ nTipoMembresia = reader->GetString(tipoMembresiaIndex);
					String^ comboItem = nId.ToString() + " - " + nTipoMembresia->ToString();
					cmbMembresia->Items->Add(comboItem);
				}
				cn->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error al ejecutar la petición: " + ex->Message);
			}
		}
		void fillComboBox3() {
			SqlConnection^ cn;
			SqlConnectionStringBuilder^ st;
			st = gcnew SqlConnectionStringBuilder();
			st->DataSource = "localhost";
			st->InitialCatalog = "dbGymFit";
			st->IntegratedSecurity = true;
			cn = gcnew SqlConnection(Convert::ToString(st));
			String^ query = "SELECT * FROM Sede";
			SqlCommand^ command = gcnew SqlCommand(query, cn);
			try {
				cn->Open();
				SqlDataReader^ reader = command->ExecuteReader();
				int idIndex = reader->GetOrdinal("id_sede");
				int sedeNombreIndex = reader->GetOrdinal("sede_Nombre");
				while (reader->Read()) {
					int nId = reader->GetInt32(idIndex);
					String^ nSedeNombre = reader->GetString(sedeNombreIndex);
					String^ comboItem = nId.ToString() + " - " + nSedeNombre->ToString();
					cmbSede->Items->Add(comboItem);
				}
				cn->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error al ejecutar la petición: " + ex->Message);
			}
		}
		void LimpiarSeleccion(ComboBox^ comboBox) {
			comboBox->SelectedIndex = -1;
		}
#pragma endregion
		int idSede, idMembresia, idInscripcion;
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: User^ user;
	private: System::Void btnInscripcion_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaInscripcion^ fs = gcnew VentanaInscripcion();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaMembresia^ fs = gcnew VentanaMembresia();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaSede^ fs = gcnew VentanaSede();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_cliente; String^ cliente_Nombre; String^ cliente_Apellido; String^ cliente_Direccion;
		String^ cliente_Telefono; String^ id_sede; String^ id_membresia; String^ id_inscripcion;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ listSede = gcnew ListView();
		String^ sentencia = "SELECT * FROM Cliente";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->listClientes->Items->Clear();
		while (reader->Read())
		{
			id_cliente = (reader["id_cliente"]->ToString());
			cliente_Nombre = (reader["cliente_Nombre"]->ToString());
			cliente_Apellido = (reader["cliente_Apellido"]->ToString());
			cliente_Direccion = (reader["cliente_Direccion"]->ToString());
			cliente_Telefono = (reader["cliente_Telefono"]->ToString());
			id_sede = (reader["id_Sede"]->ToString());
			id_membresia = (reader["id_Membresia"]->ToString());
			id_inscripcion = (reader["id_Inscripcion"]->ToString());
			String^ srtNew1 = gcnew String(id_cliente);
			String^ srtNew2 = gcnew String(cliente_Nombre);
			String^ srtNew3 = gcnew String(cliente_Apellido);
			String^ srtNew4 = gcnew String(cliente_Direccion);
			String^ srtNew5 = gcnew String(cliente_Telefono);
			String^ srtNew6 = gcnew String(id_sede);
			String^ srtNew7 = gcnew String(id_membresia);
			String^ srtNew8 = gcnew String(id_inscripcion);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);
			listView1->SubItems->Add(srtNew6);
			listView1->SubItems->Add(srtNew7);
			listView1->SubItems->Add(srtNew8);
			this->listClientes->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		String^ selectedValue1 = safe_cast<String^>(cmbSede->SelectedItem);
		array<String^>^ splitValues1 = selectedValue1->Split('-');
		if (splitValues1->Length == 2) {
			idSede = Convert::ToInt32(splitValues1[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Sede");
		}
		String^ selectedValue2 = safe_cast<String^>(cmbMembresia->SelectedItem);
		array<String^>^ splitValues2 = selectedValue2->Split('-');
		if (splitValues2->Length == 2) {
			idMembresia = Convert::ToInt32(splitValues2[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Membresía");
		}
		String^ selectedValue3 = safe_cast<String^>(cmbInscripcion->SelectedItem);
		array<String^>^ splitValues3 = selectedValue3->Split('-');
		if (splitValues3->Length == 2) {
			idInscripcion = Convert::ToInt32(splitValues3[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Inscripción");
		}
		cldatos.InsertarCliente(
			(txtNombre->Text),
			(txtApellido->Text),
			(txtDireccion->Text),
			(txtTelefono->Text),
			idSede,
			idMembresia,
			idInscripcion
		);
		MessageBox::Show("Registro insertado correctamente!");
		txtNombre->Text = "";
		txtApellido->Text = "";
		txtDireccion->Text = "";
		txtTelefono->Text = "";
		LimpiarSeleccion(cmbSede);
		LimpiarSeleccion(cmbMembresia);
		LimpiarSeleccion(cmbInscripcion);

	}
	private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(txtIdCliente->Text) || String::IsNullOrEmpty(txtNombre->Text) || String::IsNullOrEmpty(txtApellido->Text) || String::IsNullOrEmpty(txtDireccion->Text) || String::IsNullOrEmpty(txtTelefono->Text) || String::IsNullOrEmpty(cmbSede->Text) || String::IsNullOrEmpty(cmbMembresia->Text) || String::IsNullOrEmpty(cmbInscripcion->Text)) {
			MessageBox::Show("Ingresa los datos requeridos!");
			return;
		}
		String^ selectedValue1 = safe_cast<String^>(cmbSede->SelectedItem);
		array<String^>^ splitValues1 = selectedValue1->Split('-');
		if (splitValues1->Length == 2) {
			idSede = Convert::ToInt32(splitValues1[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Sede");
		}
		String^ selectedValue2 = safe_cast<String^>(cmbMembresia->SelectedItem);
		array<String^>^ splitValues2 = selectedValue2->Split('-');
		if (splitValues2->Length == 2) {
			idMembresia = Convert::ToInt32(splitValues2[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Membresía");
		}
		String^ selectedValue3 = safe_cast<String^>(cmbInscripcion->SelectedItem);
		array<String^>^ splitValues3 = selectedValue3->Split('-');
		if (splitValues3->Length == 2) {
			idInscripcion = Convert::ToInt32(splitValues3[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Inscripción");
		}
		cldatos.ActualizarCliente(
			Convert::ToInt32(txtIdCliente->Text),
			(txtNombre->Text),
			(txtApellido->Text),
			(txtDireccion->Text),
			(txtTelefono->Text),
			idSede,
			idMembresia,
			idInscripcion
		);
		MessageBox::Show("Registro actualizado correctamente!");
		txtIdCliente->Text = "";
		txtNombre->Text = "";
		txtApellido->Text = "";
		txtDireccion->Text = "";
		txtTelefono->Text = "";
		LimpiarSeleccion(cmbSede);
		LimpiarSeleccion(cmbMembresia);
		LimpiarSeleccion(cmbInscripcion);

	}
	};
}
