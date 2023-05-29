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


	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ btnEmpleado;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->btnEmpleado = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::SkyBlue;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->Location = System::Drawing::Point(62, 312);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(137, 38);
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
			this->btnEmpleado->Location = System::Drawing::Point(62, 214);
			this->btnEmpleado->Name = L"btnEmpleado";
			this->btnEmpleado->Size = System::Drawing::Size(137, 38);
			this->btnEmpleado->TabIndex = 3;
			this->btnEmpleado->Text = L"Empleado";
			this->btnEmpleado->UseVisualStyleBackColor = false;
			this->btnEmpleado->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEmpleado_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnCliente);
			this->panel1->Controls->Add(this->btnEmpleado);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(274, 559);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(271, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(602, 556);
			this->panel2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(82, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 45);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Menú";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 553);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MenuPrincipal";
			this->Text = L"Menu";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
