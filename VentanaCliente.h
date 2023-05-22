#pragma once

#include "VentanaInscripcion.h"
#include "User.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->btnInscripcion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRegresar
			// 
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(421, 229);
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
			this->btnInscripcion->Location = System::Drawing::Point(421, 158);
			this->btnInscripcion->Name = L"btnInscripcion";
			this->btnInscripcion->Size = System::Drawing::Size(189, 35);
			this->btnInscripcion->TabIndex = 1;
			this->btnInscripcion->Text = L"Inscripcion";
			this->btnInscripcion->UseVisualStyleBackColor = true;
			this->btnInscripcion->Click += gcnew System::EventHandler(this, &VentanaCliente::btnInscripcion_Click);
			// 
			// VentanaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 306);
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
	};
}
