#pragma once
#include "User.h"
#include "VentanaCliente.h"

namespace ProyectoGymFit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(User^ user)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ btnEmpleado;


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
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->btnEmpleado = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GymFit";
			this->label1->Click += gcnew System::EventHandler(this, &MenuPrincipal::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(195, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Menu";
			// 
			// btnCliente
			// 
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->Location = System::Drawing::Point(57, 203);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(119, 32);
			this->btnCliente->TabIndex = 2;
			this->btnCliente->Text = L"Clientes";
			this->btnCliente->UseVisualStyleBackColor = true;
			this->btnCliente->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnCliente_Click);
			// 
			// btnEmpleado
			// 
			this->btnEmpleado->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmpleado->Location = System::Drawing::Point(266, 203);
			this->btnEmpleado->Name = L"btnEmpleado";
			this->btnEmpleado->Size = System::Drawing::Size(129, 32);
			this->btnEmpleado->TabIndex = 3;
			this->btnEmpleado->Text = L"Empleado";
			this->btnEmpleado->UseVisualStyleBackColor = true;
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 413);
			this->Controls->Add(this->btnEmpleado);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaCliente^ fs = gcnew VentanaCliente();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	};

}
