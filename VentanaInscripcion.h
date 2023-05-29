#pragma once
#include "Conexion.h"
#include <string>
namespace ProyectoGymFit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaInscripcion
	/// </summary>
	public ref class VentanaInscripcion : public System::Windows::Forms::Form
	{
	public:
		VentanaInscripcion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaInscripcion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtIdInscripcion;

	private: System::Windows::Forms::Button^ btnGuardarIns;
	private: System::Windows::Forms::DateTimePicker^ dateInscripcion;
	private: System::Windows::Forms::ListView^ listIns;

	private: System::Windows::Forms::Button^ btnConsultarIns;
	private: System::Windows::Forms::ColumnHeader^ Id_Inscripcion;
	private: System::Windows::Forms::ColumnHeader^ fechaInscripcion;
	private: System::Windows::Forms::Button^ btnAcutalizarIns;
	private: System::Windows::Forms::PictureBox^ pictureBox1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaInscripcion::typeid));
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtIdInscripcion = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarIns = (gcnew System::Windows::Forms::Button());
			this->dateInscripcion = (gcnew System::Windows::Forms::DateTimePicker());
			this->listIns = (gcnew System::Windows::Forms::ListView());
			this->Id_Inscripcion = (gcnew System::Windows::Forms::ColumnHeader());
			this->fechaInscripcion = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnConsultarIns = (gcnew System::Windows::Forms::Button());
			this->btnAcutalizarIns = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegresar
			// 
			this->btnRegresar->BackColor = System::Drawing::Color::SkyBlue;
			this->btnRegresar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(528, 518);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(146, 35);
			this->btnRegresar->TabIndex = 1;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &VentanaInscripcion::btnRegresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(278, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Inscripcion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Fecha de Inscripcion";
			this->label3->Click += gcnew System::EventHandler(this, &VentanaInscripcion::label3_Click);
			// 
			// txtIdInscripcion
			// 
			this->txtIdInscripcion->Location = System::Drawing::Point(316, 134);
			this->txtIdInscripcion->Name = L"txtIdInscripcion";
			this->txtIdInscripcion->Size = System::Drawing::Size(358, 22);
			this->txtIdInscripcion->TabIndex = 5;
			// 
			// btnGuardarIns
			// 
			this->btnGuardarIns->BackColor = System::Drawing::Color::SkyBlue;
			this->btnGuardarIns->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGuardarIns->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardarIns->Location = System::Drawing::Point(39, 518);
			this->btnGuardarIns->Name = L"btnGuardarIns";
			this->btnGuardarIns->Size = System::Drawing::Size(146, 35);
			this->btnGuardarIns->TabIndex = 7;
			this->btnGuardarIns->Text = L"Guardar";
			this->btnGuardarIns->UseVisualStyleBackColor = false;
			this->btnGuardarIns->Click += gcnew System::EventHandler(this, &VentanaInscripcion::btnGuardarIns_Click);
			// 
			// dateInscripcion
			// 
			this->dateInscripcion->CustomFormat = L"yyyy/MM/dd";
			this->dateInscripcion->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateInscripcion->Location = System::Drawing::Point(316, 185);
			this->dateInscripcion->Name = L"dateInscripcion";
			this->dateInscripcion->Size = System::Drawing::Size(358, 22);
			this->dateInscripcion->TabIndex = 8;
			this->dateInscripcion->ValueChanged += gcnew System::EventHandler(this, &VentanaInscripcion::dateInscripcion_ValueChanged);
			// 
			// listIns
			// 
			this->listIns->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->Id_Inscripcion, this->fechaInscripcion });
			this->listIns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listIns->HideSelection = false;
			this->listIns->Location = System::Drawing::Point(39, 261);
			this->listIns->Name = L"listIns";
			this->listIns->Size = System::Drawing::Size(635, 210);
			this->listIns->TabIndex = 9;
			this->listIns->UseCompatibleStateImageBehavior = false;
			this->listIns->View = System::Windows::Forms::View::Details;
			// 
			// Id_Inscripcion
			// 
			this->Id_Inscripcion->Text = L"Id_Inscripcion";
			this->Id_Inscripcion->Width = 216;
			// 
			// fechaInscripcion
			// 
			this->fechaInscripcion->Text = L"FechaInscripcion";
			this->fechaInscripcion->Width = 295;
			// 
			// btnConsultarIns
			// 
			this->btnConsultarIns->BackColor = System::Drawing::Color::SkyBlue;
			this->btnConsultarIns->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnConsultarIns->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultarIns->Location = System::Drawing::Point(199, 518);
			this->btnConsultarIns->Name = L"btnConsultarIns";
			this->btnConsultarIns->Size = System::Drawing::Size(146, 35);
			this->btnConsultarIns->TabIndex = 10;
			this->btnConsultarIns->Text = L"Consultar";
			this->btnConsultarIns->UseVisualStyleBackColor = false;
			this->btnConsultarIns->Click += gcnew System::EventHandler(this, &VentanaInscripcion::btnConsultarIns_Click);
			// 
			// btnAcutalizarIns
			// 
			this->btnAcutalizarIns->BackColor = System::Drawing::Color::SkyBlue;
			this->btnAcutalizarIns->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAcutalizarIns->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcutalizarIns->Location = System::Drawing::Point(365, 518);
			this->btnAcutalizarIns->Name = L"btnAcutalizarIns";
			this->btnAcutalizarIns->Size = System::Drawing::Size(146, 35);
			this->btnAcutalizarIns->TabIndex = 11;
			this->btnAcutalizarIns->Text = L"Actualizar";
			this->btnAcutalizarIns->UseVisualStyleBackColor = false;
			this->btnAcutalizarIns->Click += gcnew System::EventHandler(this, &VentanaInscripcion::btnAcutalizarIns_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(222, 95);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// VentanaInscripcion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAcutalizarIns);
			this->Controls->Add(this->btnConsultarIns);
			this->Controls->Add(this->listIns);
			this->Controls->Add(this->dateInscripcion);
			this->Controls->Add(this->btnGuardarIns);
			this->Controls->Add(this->txtIdInscripcion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnRegresar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VentanaInscripcion";
			this->Text = L"Inscripcion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnGuardarIns_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.InsertarInscripcion(
			Convert::ToDateTime(this->dateInscripcion->Text)
		);
		MessageBox::Show("Registro guardado!");
		txtIdInscripcion->Text = "";
		dateInscripcion->Text = "";
	}


	private: System::Void btnConsultarIns_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_inscripcion; String^ fechaInscripcion;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ ListadoFab = gcnew ListView();
		String^ sentencia = "SELECT * FROM Inscripcion";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->listIns->Items->Clear();
		while (reader->Read())
		{
			id_inscripcion = (reader["id_inscripcion"]->ToString());
			fechaInscripcion = (reader["fechaInscripcion"]->ToString());
			String^ srtNew1 = gcnew String(id_inscripcion);
			String^ srtNew2 = gcnew String(fechaInscripcion);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			this->listIns->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void btnAcutalizarIns_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(txtIdInscripcion->Text) || String::IsNullOrEmpty(dateInscripcion->Text)) {
			MessageBox::Show("Ingresa tanto como un Id y una fecha!");
		}
		else {
			cldatos.ActualizarInscripcion(
				Convert::ToInt32(txtIdInscripcion->Text),
				Convert::ToDateTime(this->dateInscripcion->Text)
			);
			MessageBox::Show("Registro actualizado exitosamente");
			txtIdInscripcion->Text = "";
			dateInscripcion->Text = "";
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateInscripcion_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
