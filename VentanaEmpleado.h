#pragma once
#include "VentanaSede.h"
#include "VentanaJornada.h"

namespace ProyectoGymFit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaEmpleado
	/// </summary>
	public ref class VentanaEmpleado : public System::Windows::Forms::Form
	{
	public:
		VentanaEmpleado(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CenterToScreen();
			fillComboBox();
			fillComboBox2();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSede;
	protected:
	private: System::Windows::Forms::Button^ btnJornada;

	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::Button^ btnConsultar;
	private: System::Windows::Forms::Button^ btnGuardar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listEmpleados;
	private: System::Windows::Forms::ComboBox^ cmbJornada;


	private: System::Windows::Forms::ComboBox^ cmbSede;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtIdEmpleado;

	private: System::Windows::Forms::Label^ idJornada;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::TextBox^ txtTitulo;
	private: System::Windows::Forms::Label^ Titulo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dtpFechaNac;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaEmpleado::typeid));
			this->btnSede = (gcnew System::Windows::Forms::Button());
			this->btnJornada = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listEmpleados = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->cmbJornada = (gcnew System::Windows::Forms::ComboBox());
			this->cmbSede = (gcnew System::Windows::Forms::ComboBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtIdEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->idJornada = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dtpFechaNac = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSede
			// 
			this->btnSede->BackColor = System::Drawing::Color::SkyBlue;
			this->btnSede->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSede->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSede->Location = System::Drawing::Point(885, 236);
			this->btnSede->Name = L"btnSede";
			this->btnSede->Size = System::Drawing::Size(189, 35);
			this->btnSede->TabIndex = 4;
			this->btnSede->Text = L"Sedes";
			this->btnSede->UseVisualStyleBackColor = false;
			this->btnSede->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnSede_Click);
			// 
			// btnJornada
			// 
			this->btnJornada->BackColor = System::Drawing::Color::SkyBlue;
			this->btnJornada->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnJornada->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJornada->Location = System::Drawing::Point(885, 293);
			this->btnJornada->Name = L"btnJornada";
			this->btnJornada->Size = System::Drawing::Size(189, 35);
			this->btnJornada->TabIndex = 5;
			this->btnJornada->Text = L"Jornada";
			this->btnJornada->UseVisualStyleBackColor = false;
			this->btnJornada->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnJornada_Click);
			// 
			// btnActualizar
			// 
			this->btnActualizar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnActualizar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnActualizar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizar->Location = System::Drawing::Point(587, 595);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(203, 35);
			this->btnActualizar->TabIndex = 17;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = false;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnActualizar_Click);
			// 
			// btnConsultar
			// 
			this->btnConsultar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnConsultar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnConsultar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultar->Location = System::Drawing::Point(304, 595);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(204, 35);
			this->btnConsultar->TabIndex = 16;
			this->btnConsultar->Text = L"Consultar";
			this->btnConsultar->UseVisualStyleBackColor = false;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnConsultar_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnGuardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(47, 595);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(171, 35);
			this->btnGuardar->TabIndex = 15;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnGuardar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(498, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 37);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Empleado";
			// 
			// listEmpleados
			// 
			this->listEmpleados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader8, this->columnHeader9
			});
			this->listEmpleados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listEmpleados->HideSelection = false;
			this->listEmpleados->Location = System::Drawing::Point(47, 396);
			this->listEmpleados->Name = L"listEmpleados";
			this->listEmpleados->Size = System::Drawing::Size(1027, 162);
			this->listEmpleados->TabIndex = 19;
			this->listEmpleados->UseCompatibleStateImageBehavior = false;
			this->listEmpleados->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Id";
			this->columnHeader1->Width = 41;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombre";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 140;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Apellido";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 112;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Dirección";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 127;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Teléfono";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 111;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Fecha de Nac.";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 120;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Titulo";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 106;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Id_Sede";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 81;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Id_Jornada";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 119;
			// 
			// cmbJornada
			// 
			this->cmbJornada->FormattingEnabled = true;
			this->cmbJornada->Location = System::Drawing::Point(639, 297);
			this->cmbJornada->Name = L"cmbJornada";
			this->cmbJornada->Size = System::Drawing::Size(223, 24);
			this->cmbJornada->TabIndex = 47;
			// 
			// cmbSede
			// 
			this->cmbSede->FormattingEnabled = true;
			this->cmbSede->Location = System::Drawing::Point(639, 247);
			this->cmbSede->Name = L"cmbSede";
			this->cmbSede->Size = System::Drawing::Size(223, 24);
			this->cmbSede->TabIndex = 45;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(228, 321);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(223, 22);
			this->txtTelefono->TabIndex = 44;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(228, 267);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(223, 22);
			this->txtDireccion->TabIndex = 43;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(228, 207);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(223, 22);
			this->txtApellido->TabIndex = 42;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(228, 160);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(223, 22);
			this->txtNombre->TabIndex = 41;
			// 
			// txtIdEmpleado
			// 
			this->txtIdEmpleado->Location = System::Drawing::Point(228, 114);
			this->txtIdEmpleado->Name = L"txtIdEmpleado";
			this->txtIdEmpleado->Size = System::Drawing::Size(223, 22);
			this->txtIdEmpleado->TabIndex = 40;
			// 
			// idJornada
			// 
			this->idJornada->AutoSize = true;
			this->idJornada->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idJornada->Location = System::Drawing::Point(475, 294);
			this->idJornada->Name = L"idJornada";
			this->idJornada->Size = System::Drawing::Size(132, 27);
			this->idJornada->TabIndex = 39;
			this->idJornada->Text = L"Id_Jornada";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(475, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 27);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Id_Sede";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(68, 321);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 27);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(68, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 27);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(68, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 27);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 27);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 27);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Id";
			// 
			// btnRegresar
			// 
			this->btnRegresar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnRegresar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(859, 595);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(206, 35);
			this->btnRegresar->TabIndex = 6;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnRegresar_Click);
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(639, 189);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(223, 22);
			this->txtTitulo->TabIndex = 51;
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titulo->Location = System::Drawing::Point(475, 184);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(84, 27);
			this->Titulo->TabIndex = 49;
			this->Titulo->Text = L"Titulo";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(475, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 27);
			this->label9->TabIndex = 48;
			this->label9->Text = L"Fecha de Nac.";
			// 
			// dtpFechaNac
			// 
			this->dtpFechaNac->CustomFormat = L"yyyy/MM/dd";
			this->dtpFechaNac->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFechaNac->Location = System::Drawing::Point(639, 136);
			this->dtpFechaNac->Name = L"dtpFechaNac";
			this->dtpFechaNac->Size = System::Drawing::Size(223, 22);
			this->dtpFechaNac->TabIndex = 52;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-5, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(223, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 53;
			this->pictureBox1->TabStop = false;
			// 
			// VentanaEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1110, 666);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dtpFechaNac);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->cmbJornada);
			this->Controls->Add(this->cmbSede);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtIdEmpleado);
			this->Controls->Add(this->idJornada);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listEmpleados);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->btnJornada);
			this->Controls->Add(this->btnSede);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VentanaEmpleado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Empleado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void fillComboBox() {
			SqlConnection^ cn;
			SqlConnectionStringBuilder^ st;
			st = gcnew SqlConnectionStringBuilder();
			st->DataSource = "localhost\\SQLEXPRESS";
			st->InitialCatalog = "dbGymFit";
			st->IntegratedSecurity = true;
			cn = gcnew SqlConnection(Convert::ToString(st));
			String^ query = "SELECT * FROM Sede";
			SqlCommand^ command = gcnew SqlCommand(query, cn);
			try {
				cn->Open();
				SqlDataReader^ reader = command->ExecuteReader();
				int idIndex = reader->GetOrdinal("id_sede"); // Obtener el índice de la columna
				int sedeIndex = reader->GetOrdinal("sede_Nombre"); // Obtener el índice de la columna
				while (reader->Read()) {
					int nId = reader->GetInt32(idIndex); // Obtener el valor entero
					String^ nSede = reader->GetString(sedeIndex); // Obtener el valor de "fechaInscripcion"
					String^ comboItem = nId.ToString() + " - " + nSede->ToString(); // Concatenar el ID y la fecha
					cmbSede->Items->Add(comboItem); // Agregar al ComboBox
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
			st->DataSource = "localhost\\SQLEXPRESS";
			st->InitialCatalog = "dbGymFit";
			st->IntegratedSecurity = true;
			cn = gcnew SqlConnection(Convert::ToString(st));
			String^ query = "SELECT * FROM Jornada";
			SqlCommand^ command = gcnew SqlCommand(query, cn);
			try {
				cn->Open();
				SqlDataReader^ reader = command->ExecuteReader();
				int idIndex = reader->GetOrdinal("id_jornada"); // Obtener el índice de la columna
				int horaIndex = reader->GetOrdinal("horaInicio"); // Obtener el índice de la columna
				while (reader->Read()) {
					int nId = reader->GetInt32(idIndex); // Obtener el valor entero
					TimeSpan nHoraI = reader->GetTimeSpan(horaIndex);
					String^ comboItem = nId.ToString() + " - " + nHoraI.ToString();
					cmbJornada->Items->Add(comboItem); // Agregar al ComboBox
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
		int idSede, idJ;
	private: System::Void btnJornada_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaJornada^ fs = gcnew VentanaJornada();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	private: System::Void btnSede_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaSede^ fs = gcnew VentanaSede();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(txtNombre->Text) || String::IsNullOrEmpty(txtApellido->Text) || String::IsNullOrEmpty(txtDireccion->Text) || String::IsNullOrEmpty(txtTelefono->Text) || String::IsNullOrEmpty(txtTitulo->Text) || String::IsNullOrEmpty(cmbSede->Text) || String::IsNullOrEmpty(cmbJornada->Text)) {
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
		String^ selectedValue2 = safe_cast<String^>(cmbJornada->SelectedItem);
		array<String^>^ splitValues2 = selectedValue2->Split('-');
		if (splitValues2->Length == 2) {
			idJ = Convert::ToInt32(splitValues2[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Jornada");
		}
		cldatos.InsertarEmpleado(
			(txtNombre->Text),
			(txtApellido->Text),
			(txtDireccion->Text),
			(txtTelefono->Text),
			Convert::ToDateTime(this->dtpFechaNac->Text),
			(txtTitulo->Text),
			idSede,
			idJ
		);
		MessageBox::Show("Registro insertado correctamente!");
		txtNombre->Text = "";
		txtApellido->Text = "";
		txtDireccion->Text = "";
		txtTelefono->Text = "";
		txtTitulo->Text = "";
		LimpiarSeleccion(cmbSede);
		LimpiarSeleccion(cmbJornada);
	}
	private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_empleado; String^ empleado_Nombre; String^ empleado_Apellido; String^ empleado_Direccion;
		String^ empleado_Telefono; String^ fechaNac; String^ empleado_Titulo; String^ id_sede; String^ id_jornada;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ listSede = gcnew ListView();
		String^ sentencia = "SELECT * FROM Empleado";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->listEmpleados->Items->Clear();
		while (reader->Read())
		{
			id_empleado = (reader["id_empleado"]->ToString());
			empleado_Nombre = (reader["empleado_Nombre"]->ToString());
			empleado_Apellido = (reader["empleado_Apellido"]->ToString());
			empleado_Direccion = (reader["empleado_Direccion"]->ToString());
			empleado_Telefono = (reader["empleado_Telefono"]->ToString());
			fechaNac = (reader["empleado_FechaNac"]->ToString());
			empleado_Titulo = (reader["empleado_Titulo"]->ToString());
			id_sede = (reader["id_Sede"]->ToString());
			id_jornada = (reader["id_Jornada"]->ToString());
			String^ srtNew1 = gcnew String(id_empleado);
			String^ srtNew2 = gcnew String(empleado_Nombre);
			String^ srtNew3 = gcnew String(empleado_Apellido);
			String^ srtNew4 = gcnew String(empleado_Direccion);
			String^ srtNew5 = gcnew String(empleado_Telefono);
			String^ srtNew6 = gcnew String(fechaNac);
			String^ srtNew7 = gcnew String(empleado_Titulo);
			String^ srtNew8 = gcnew String(id_sede);
			String^ srtNew9 = gcnew String(id_jornada);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);
			listView1->SubItems->Add(srtNew6);
			listView1->SubItems->Add(srtNew7);
			listView1->SubItems->Add(srtNew8);
			listView1->SubItems->Add(srtNew9);
			this->listEmpleados->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(txtIdEmpleado->Text) || String::IsNullOrEmpty(txtNombre->Text) || String::IsNullOrEmpty(txtApellido->Text) || String::IsNullOrEmpty(txtDireccion->Text) || String::IsNullOrEmpty(txtTelefono->Text) || String::IsNullOrEmpty(txtTitulo->Text) || String::IsNullOrEmpty(cmbSede->Text) || String::IsNullOrEmpty(cmbJornada->Text)) {
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
		String^ selectedValue2 = safe_cast<String^>(cmbJornada->SelectedItem);
		array<String^>^ splitValues2 = selectedValue2->Split('-');
		if (splitValues2->Length == 2) {
			idJ = Convert::ToInt32(splitValues2[0]->Trim());
		}
		else {
			MessageBox::Show("Error al obtener el valor seleccionado del ComboBox de Jornada");
		}
		cldatos.ActualizarEmpleado(
			Convert::ToInt32(this->txtIdEmpleado->Text),
			(txtNombre->Text),
			(txtApellido->Text),
			(txtDireccion->Text),
			(txtTelefono->Text),
			Convert::ToDateTime(this->dtpFechaNac->Text),
			(txtTitulo->Text),
			idSede,
			idJ
		);
		MessageBox::Show("Registro actualizado correctamente!");
		txtIdEmpleado->Text = "";
		txtNombre->Text = "";
		txtApellido->Text = "";
		txtDireccion->Text = "";
		txtTelefono->Text = "";
		txtTitulo->Text = "";
		LimpiarSeleccion(cmbSede);
		LimpiarSeleccion(cmbJornada);
	}
	};
}
