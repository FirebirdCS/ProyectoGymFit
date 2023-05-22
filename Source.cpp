#include "VentanaPrincipal.h"
#include "MenuPrincipal.h"

using namespace ProyectoGymFit;
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoGymFit::VentanaPrincipal ventanaPrincipal;

	ventanaPrincipal.ShowDialog();
	User^ user = ventanaPrincipal.user;

	if (user != nullptr) {
		ProyectoGymFit::MenuPrincipal menuPrincipal(user);
		Application::Run(% menuPrincipal);
	}
	else {
		MessageBox::Show("Autenticacion cancelada!");
	}

	return 0;
}