#pragma once

#include "VentanaInscripcion.h"
#include "VentanaMembresia.h"
#include "User.h"
#include "VentanaSede.h"

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
			this->SuspendLayout();
			// 
			// btnRegresar
			// 
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(584, 490);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(189, 35);
			this->btnRegresar->TabIndex = 0;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = true;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &VentanaCliente::btnRegresar_Click);
			// 
			// btnInscripcion
			// 
			this->btnInscripcion->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInscripcion->Location = System::Drawing::Point(584, 207);
			this->btnInscripcion->Name = L"btnInscripcion";
			this->btnInscripcion->Size = System::Drawing::Size(189, 35);
			this->btnInscripcion->TabIndex = 1;
			this->btnInscripcion->Text = L"Inscripcion";
			this->btnInscripcion->UseVisualStyleBackColor = true;
			this->btnInscripcion->Click += gcnew System::EventHandler(this, &VentanaCliente::btnInscripcion_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(584, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Membresia";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaCliente::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(584, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Sedes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaCliente::button2_Click);
			// 
			// VentanaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 551);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnInscripcion);
			this->Controls->Add(this->btnRegresar);
			this->Name = L"VentanaCliente";
			this->Text = L"Cliente";
			this->ResumeLayout(false);

		}
#pragma endregion
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
};
}
