#pragma once
#include "User.h"
#include "VentanaCliente.h"
#include "VentanaEmpleado.h"

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DodgerBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(537, 115);
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
			this->label2->Location = System::Drawing::Point(315, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Menu";
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::SkyBlue;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->Location = System::Drawing::Point(62, 311);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(137, 45);
			this->btnCliente->TabIndex = 2;
			this->btnCliente->Text = L"Clientes";
			this->btnCliente->UseVisualStyleBackColor = false;
			this->btnCliente->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnCliente_Click);
			// 
			// btnEmpleado
			// 
			this->btnEmpleado->BackColor = System::Drawing::Color::SkyBlue;
			this->btnEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEmpleado->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmpleado->Location = System::Drawing::Point(62, 194);
			this->btnEmpleado->Name = L"btnEmpleado";
			this->btnEmpleado->Size = System::Drawing::Size(137, 38);
			this->btnEmpleado->TabIndex = 3;
			this->btnEmpleado->Text = L"Empleado";
			this->btnEmpleado->UseVisualStyleBackColor = false;
			this->btnEmpleado->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEmpleado_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Controls->Add(this->btnCliente);
			this->panel1->Controls->Add(this->btnEmpleado);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 559);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(262, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(720, 556);
			this->panel2->TabIndex = 5;
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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

	private: System::Void btnEmpleado_Click(System::Object^ sender, System::EventArgs^ e) {
		VentanaEmpleado^ fs = gcnew VentanaEmpleado();
		this->Hide();
		fs->ShowDialog();
		this->Show();
	}
	};

}
