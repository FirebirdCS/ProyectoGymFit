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
	private: System::Windows::Forms::Button^ btnRegresar;

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
			this->btnSede = (gcnew System::Windows::Forms::Button());
			this->btnJornada = (gcnew System::Windows::Forms::Button());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSede
			// 
			this->btnSede->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSede->Location = System::Drawing::Point(350, 213);
			this->btnSede->Name = L"btnSede";
			this->btnSede->Size = System::Drawing::Size(189, 35);
			this->btnSede->TabIndex = 4;
			this->btnSede->Text = L"Sedes";
			this->btnSede->UseVisualStyleBackColor = true;
			this->btnSede->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnSede_Click);
			// 
			// btnJornada
			// 
			this->btnJornada->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJornada->Location = System::Drawing::Point(350, 156);
			this->btnJornada->Name = L"btnJornada";
			this->btnJornada->Size = System::Drawing::Size(189, 35);
			this->btnJornada->TabIndex = 5;
			this->btnJornada->Text = L"Jornada";
			this->btnJornada->UseVisualStyleBackColor = true;
			this->btnJornada->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnJornada_Click);
			// 
			// btnRegresar
			// 
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(350, 272);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(189, 35);
			this->btnRegresar->TabIndex = 6;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = true;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &VentanaEmpleado::btnRegresar_Click);
			// 
			// VentanaEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 336);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->btnJornada);
			this->Controls->Add(this->btnSede);
			this->Name = L"VentanaEmpleado";
			this->Text = L"Ventana de Empleado";
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
