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
	/// Resumen de VentanaMembresia
	/// </summary>
	public ref class VentanaMembresia : public System::Windows::Forms::Form
	{
	public:
		VentanaMembresia(void)
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
		~VentanaMembresia()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListView^ listMem;

	private: System::Windows::Forms::ColumnHeader^ id_membresia;
	private: System::Windows::Forms::ColumnHeader^ tipoMembresia;
	private: System::Windows::Forms::ColumnHeader^ tieneSpa;
	private: System::Windows::Forms::ColumnHeader^ tieneMaquinas;
	private: System::Windows::Forms::ColumnHeader^ tieneDucha;
	private: System::Windows::Forms::ColumnHeader^ tieneEntrenador;
	private: System::Windows::Forms::ColumnHeader^ precio;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaMembresia::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listMem = (gcnew System::Windows::Forms::ListView());
			this->id_membresia = (gcnew System::Windows::Forms::ColumnHeader());
			this->tipoMembresia = (gcnew System::Windows::Forms::ColumnHeader());
			this->tieneSpa = (gcnew System::Windows::Forms::ColumnHeader());
			this->tieneMaquinas = (gcnew System::Windows::Forms::ColumnHeader());
			this->tieneDucha = (gcnew System::Windows::Forms::ColumnHeader());
			this->tieneEntrenador = (gcnew System::Windows::Forms::ColumnHeader());
			this->precio = (gcnew System::Windows::Forms::ColumnHeader());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(287, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Membresia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de Membresia";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Spa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Maquinas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(411, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ducha";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(411, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 27);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Entrenador";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(411, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 27);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Precio";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(27, 536);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaMembresia::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(254, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 22);
			this->textBox1->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(254, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 22);
			this->textBox2->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(254, 182);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 22);
			this->textBox3->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(254, 231);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 22);
			this->textBox4->TabIndex = 20;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(556, 114);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 22);
			this->textBox5->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(556, 159);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(140, 22);
			this->textBox6->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(556, 204);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(140, 22);
			this->textBox7->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(201, 536);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 35);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Consultar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaMembresia::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(376, 536);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 35);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Actualizar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &VentanaMembresia::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SkyBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(551, 536);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 35);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Regresar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &VentanaMembresia::button4_Click);
			// 
			// listMem
			// 
			this->listMem->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->id_membresia, this->tipoMembresia,
					this->tieneSpa, this->tieneMaquinas, this->tieneDucha, this->tieneEntrenador, this->precio
			});
			this->listMem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listMem->HideSelection = false;
			this->listMem->Location = System::Drawing::Point(27, 271);
			this->listMem->Name = L"listMem";
			this->listMem->Size = System::Drawing::Size(670, 232);
			this->listMem->TabIndex = 27;
			this->listMem->UseCompatibleStateImageBehavior = false;
			this->listMem->View = System::Windows::Forms::View::Details;
			// 
			// id_membresia
			// 
			this->id_membresia->Text = L"Id";
			this->id_membresia->Width = 44;
			// 
			// tipoMembresia
			// 
			this->tipoMembresia->Text = L"Tipo de membresia";
			this->tipoMembresia->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tipoMembresia->Width = 174;
			// 
			// tieneSpa
			// 
			this->tieneSpa->Text = L"Spa";
			this->tieneSpa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tieneSpa->Width = 67;
			// 
			// tieneMaquinas
			// 
			this->tieneMaquinas->Text = L"Maquinas";
			this->tieneMaquinas->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tieneMaquinas->Width = 91;
			// 
			// tieneDucha
			// 
			this->tieneDucha->Text = L"Ducha";
			this->tieneDucha->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tieneDucha->Width = 71;
			// 
			// tieneEntrenador
			// 
			this->tieneEntrenador->Text = L"Entrenador";
			this->tieneEntrenador->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tieneEntrenador->Width = 115;
			// 
			// precio
			// 
			this->precio->Text = L"Precio";
			this->precio->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->precio->Width = 74;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// VentanaMembresia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listMem);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VentanaMembresia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Membresia";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_membresia; String^ tipoMembresia; String^ tieneSpa;
		String^ tieneMaquinas; String^ tieneDucha; String^ tieneEntrenador;
		String^ precio;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ ListadoFab = gcnew ListView();
		String^ sentencia = "SELECT * FROM Membresia";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->listMem->Items->Clear();
		while (reader->Read())
		{
			id_membresia = (reader["id_membresia"]->ToString());
			tipoMembresia = (reader["tipoMembresia"]->ToString());
			tieneSpa = (reader["tieneSpa"]->ToString());
			tieneMaquinas = (reader["tieneMaquinas"]->ToString());
			tieneDucha = (reader["tieneDucha"]->ToString());
			tieneEntrenador = (reader["tieneEntrenador"]->ToString());
			precio = (reader["precio"]->ToString());
			String^ srtNew1 = gcnew String(id_membresia);
			String^ srtNew2 = gcnew String(tipoMembresia);
			String^ srtNew3 = gcnew String(tieneSpa);
			String^ srtNew4 = gcnew String(tieneMaquinas);
			String^ srtNew5 = gcnew String(tieneDucha);
			String^ srtNew6 = gcnew String(tieneEntrenador);
			String^ srtNew7 = gcnew String(precio);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);
			listView1->SubItems->Add(srtNew6);
			listView1->SubItems->Add(srtNew7);
			this->listMem->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text) || String::IsNullOrEmpty(textBox5->Text) || String::IsNullOrEmpty(textBox6->Text) || String::IsNullOrEmpty(textBox7->Text)) {
			MessageBox::Show("Ingresa los datos requeridos!");
		}
		else {
			cldatos.InsertarMembresia(
				textBox2->Text,
				textBox3->Text,
				textBox4->Text,
				textBox5->Text,
				textBox6->Text,
				Convert::ToDecimal(textBox7->Text)
			);
			MessageBox::Show("Registro guardado!");
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text) || String::IsNullOrEmpty(textBox5->Text) || String::IsNullOrEmpty(textBox6->Text) || String::IsNullOrEmpty(textBox7->Text)) {
			MessageBox::Show("Ingresa los datos requeridos!");
		}
		else {
			cldatos.ActualizarMembresia(
				Convert::ToInt32(textBox1->Text),
				textBox2->Text,
				textBox3->Text,
				textBox4->Text,
				textBox5->Text,
				textBox6->Text,
				Convert::ToDecimal(textBox7->Text)
			);
			MessageBox::Show("Registro actualizado exitosamente");
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
		}
	}
	};
}