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
	/// Resumen de VentanaJornada
	/// </summary>
	public ref class VentanaJornada : public System::Windows::Forms::Form
	{
	public:
		VentanaJornada(void)
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
		~VentanaJornada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListView^ listJornada;
	private: System::Windows::Forms::ColumnHeader^ colIdJornada;
	private: System::Windows::Forms::ColumnHeader^ colHoraInicio;
	private: System::Windows::Forms::ColumnHeader^ colHoraFin;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnConsultar;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::TextBox^ txtIdJornada;
	private: System::Windows::Forms::DateTimePicker^ dtpInicio;
	private: System::Windows::Forms::DateTimePicker^ dtpFinal;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listJornada = (gcnew System::Windows::Forms::ListView());
			this->colIdJornada = (gcnew System::Windows::Forms::ColumnHeader());
			this->colHoraInicio = (gcnew System::Windows::Forms::ColumnHeader());
			this->colHoraFin = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnConsultar = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->txtIdJornada = (gcnew System::Windows::Forms::TextBox());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// btnRegresar
			// 
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->Location = System::Drawing::Point(509, 470);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(123, 35);
			this->btnRegresar->TabIndex = 1;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = true;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &VentanaJornada::btnRegresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(273, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Jornada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(252, 27);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Hora de Finalización";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Hora de inicio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 27);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Id_Jornada";
			// 
			// listJornada
			// 
			this->listJornada->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->colIdJornada, this->colHoraInicio,
					this->colHoraFin
			});
			this->listJornada->HideSelection = false;
			this->listJornada->Location = System::Drawing::Point(40, 260);
			this->listJornada->Name = L"listJornada";
			this->listJornada->Size = System::Drawing::Size(592, 172);
			this->listJornada->TabIndex = 7;
			this->listJornada->UseCompatibleStateImageBehavior = false;
			this->listJornada->View = System::Windows::Forms::View::Details;
			// 
			// colIdJornada
			// 
			this->colIdJornada->Text = L"Id_Jornada";
			this->colIdJornada->Width = 135;
			// 
			// colHoraInicio
			// 
			this->colHoraInicio->Text = L"Hora de Inicio";
			this->colHoraInicio->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colHoraInicio->Width = 98;
			// 
			// colHoraFin
			// 
			this->colHoraFin->Text = L"Hora de finalización";
			this->colHoraFin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colHoraFin->Width = 120;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(40, 470);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(139, 35);
			this->btnGuardar->TabIndex = 8;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &VentanaJornada::btnGuardar_Click);
			// 
			// btnConsultar
			// 
			this->btnConsultar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConsultar->Location = System::Drawing::Point(197, 470);
			this->btnConsultar->Name = L"btnConsultar";
			this->btnConsultar->Size = System::Drawing::Size(130, 35);
			this->btnConsultar->TabIndex = 9;
			this->btnConsultar->Text = L"Consultar";
			this->btnConsultar->UseVisualStyleBackColor = true;
			this->btnConsultar->Click += gcnew System::EventHandler(this, &VentanaJornada::btnConsultar_Click);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizar->Location = System::Drawing::Point(351, 470);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(152, 35);
			this->btnActualizar->TabIndex = 10;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &VentanaJornada::btnActualizar_Click);
			// 
			// txtIdJornada
			// 
			this->txtIdJornada->Location = System::Drawing::Point(317, 112);
			this->txtIdJornada->Name = L"txtIdJornada";
			this->txtIdJornada->Size = System::Drawing::Size(259, 22);
			this->txtIdJornada->TabIndex = 11;
			// 
			// dtpInicio
			// 
			this->dtpInicio->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpInicio->Location = System::Drawing::Point(317, 162);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->Size = System::Drawing::Size(259, 22);
			this->dtpInicio->TabIndex = 12;
			// 
			// dtpFinal
			// 
			this->dtpFinal->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpFinal->Location = System::Drawing::Point(317, 209);
			this->dtpFinal->Name = L"dtpFinal";
			this->dtpFinal->Size = System::Drawing::Size(259, 22);
			this->dtpFinal->TabIndex = 13;
			// 
			// VentanaJornada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 531);
			this->Controls->Add(this->dtpFinal);
			this->Controls->Add(this->dtpInicio);
			this->Controls->Add(this->txtIdJornada);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->btnConsultar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->listJornada);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnRegresar);
			this->Name = L"VentanaJornada";
			this->Text = L"VentanaJornada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.InsertarJornada(
			Convert::ToDateTime(this->dtpInicio->Text),
			Convert::ToDateTime(this->dtpFinal->Text)
		);
		MessageBox::Show("Registro guardado!");
	}
	private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_jornada; String^ horaInicio; String^ horaFinal;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost";
		st->InitialCatalog = "dbGymFit";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ ListadoFab = gcnew ListView();
		String^ sentencia = "SELECT * FROM Jornada";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		this->listJornada->Items->Clear();
		while (reader->Read())
		{
			id_jornada = (reader["id_jornada"]->ToString());
			horaInicio = (reader["horaInicio"]->ToString());
			horaFinal = (reader["horaFinal"]->ToString());
			String^ srtNew1 = gcnew String(id_jornada);
			String^ srtNew2 = gcnew String(horaInicio);
			String^ srtNew3 = gcnew String(horaFinal);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			this->listJornada->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		if (String::IsNullOrEmpty(txtIdJornada->Text) || String::IsNullOrEmpty(dtpInicio->Text) || String::IsNullOrEmpty(dtpFinal->Text)) {
			MessageBox::Show("Ingresa tanto como un Id como ambas horas!");
		}
		else {
			cldatos.ActualizarJornada(
				Convert::ToInt32(txtIdJornada->Text),
				Convert::ToDateTime(this->dtpInicio->Text),
				Convert::ToDateTime(this->dtpFinal->Text)
			);
			MessageBox::Show("Registro actualizado exitosamente");
			txtIdJornada->Text = "";
		}
	}
	};
}
