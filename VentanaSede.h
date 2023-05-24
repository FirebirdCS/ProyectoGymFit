#pragma once
#include "Conexion.h"

namespace ProyectoGymFit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaSede
	/// </summary>
	public ref class VentanaSede : public System::Windows::Forms::Form
	{
	public:
		VentanaSede(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaSede()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListView^ listSede;




	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;


	private: System::Windows::Forms::Button^ btnactualizar;

	private: System::Windows::Forms::Button^ btnconsultar;

	private: System::Windows::Forms::Button^ btnguardar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listSede = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnactualizar = (gcnew System::Windows::Forms::Button());
			this->btnconsultar = (gcnew System::Windows::Forms::Button());
			this->btnguardar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(281, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sede";
			this->label1->Click += gcnew System::EventHandler(this, &VentanaSede::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(48, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Departamento";
			// 
			// listSede
			// 
			this->listSede->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listSede->HideSelection = false;
			this->listSede->Location = System::Drawing::Point(53, 262);
			this->listSede->Name = L"listSede";
			this->listSede->Size = System::Drawing::Size(581, 198);
			this->listSede->TabIndex = 7;
			this->listSede->UseCompatibleStateImageBehavior = false;
			this->listSede->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 33;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombre";
			this->columnHeader2->Width = 195;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Dirección";
			this->columnHeader3->Width = 156;
			// 
			// btnactualizar
			// 
			this->btnactualizar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnactualizar->Location = System::Drawing::Point(357, 481);
			this->btnactualizar->Name = L"btnactualizar";
			this->btnactualizar->Size = System::Drawing::Size(146, 35);
			this->btnactualizar->TabIndex = 29;
			this->btnactualizar->Text = L"Actualizar";
			this->btnactualizar->UseVisualStyleBackColor = true;
			this->btnactualizar->Click += gcnew System::EventHandler(this, &VentanaSede::btnactualizar_Click);
			// 
			// btnconsultar
			// 
			this->btnconsultar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnconsultar->Location = System::Drawing::Point(182, 481);
			this->btnconsultar->Name = L"btnconsultar";
			this->btnconsultar->Size = System::Drawing::Size(146, 35);
			this->btnconsultar->TabIndex = 28;
			this->btnconsultar->Text = L"Consultar";
			this->btnconsultar->UseVisualStyleBackColor = true;
			this->btnconsultar->Click += gcnew System::EventHandler(this, &VentanaSede::btnconsultar_Click);
			// 
			// btnguardar
			// 
			this->btnguardar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnguardar->Location = System::Drawing::Point(7, 481);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(146, 35);
			this->btnguardar->TabIndex = 27;
			this->btnguardar->Text = L"Guardar";
			this->btnguardar->UseVisualStyleBackColor = true;
			this->btnguardar->Click += gcnew System::EventHandler(this, &VentanaSede::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(237, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(397, 22);
			this->textBox1->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(237, 157);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(397, 22);
			this->textBox2->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(237, 214);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(397, 22);
			this->textBox3->TabIndex = 33;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(237, 59);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(397, 22);
			this->textBox4->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(48, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 27);
			this->label5->TabIndex = 34;
			this->label5->Text = L"ID";
			this->label5->Click += gcnew System::EventHandler(this, &VentanaSede::label5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(526, 481);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 35);
			this->button4->TabIndex = 36;
			this->button4->Text = L"Regresar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VentanaSede::button4_Click);
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Departamento";
			this->columnHeader4->Width = 190;
			// 
			// VentanaSede
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 550);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnactualizar);
			this->Controls->Add(this->btnconsultar);
			this->Controls->Add(this->btnguardar);
			this->Controls->Add(this->listSede);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaSede";
			this->Text = L"VentanaSede";
			this->Load += gcnew System::EventHandler(this, &VentanaSede::VentanaSede_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VentanaSede_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.InsertarSede(
			textBox1->Text,
			textBox2->Text,
			textBox3->Text
		);

		MessageBox::Show("Registro guardado!");
		textBox1->Text = "",
		textBox2->Text = "";
		textBox3->Text = "";

	}
	private: System::Void btnconsultar_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_sede; String^ sede_Nombre; String^ sede_Direccion; String^ sede_Departamento;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ listSede = gcnew ListView();
		String^ sentencia = "SELECT * FROM Sede";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->listSede->Items->Clear();
		while (reader->Read())
		{
			id_sede = (reader["id_sede"]->ToString());
			sede_Nombre = (reader["sede_Nombre"]->ToString());
			sede_Direccion = (reader["sede_Direccion"]->ToString());
			sede_Departamento = (reader["sede_Departamento"]->ToString());

			String^ srtNew1 = gcnew String(id_sede);
			String^ srtNew2 = gcnew String(sede_Nombre);
			String^ srtNew3 = gcnew String(sede_Direccion);
			String^ srtNew4 = gcnew String(sede_Departamento);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);

			this->listSede->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void btnactualizar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text)) {
			MessageBox::Show("Ingresa los datos requeridos!");
		}
		else {
			cldatos.ActualizarSede(
				Convert::ToInt32(textBox4->Text),
				textBox1->Text,
				textBox2->Text,
				textBox3->Text
			);
			MessageBox::Show("Registro actualizado exitosamente");
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
		}
	};
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnregresar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}