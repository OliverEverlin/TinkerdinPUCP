#include "pch.h"
#include "LoginForm.h"
#include "MainForm.h"
#include "AdminMainForm.h"


System::Void TinkerdinView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e){
	
	//debo filtrar el username para registro
	
	Cliente^ client = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (client != nullptr) {
		MessageBox::Show("Bienvenido " + client->Name + " Cliente");
		MainForm^ reportForm = gcnew MainForm();
		MainForm::client = client;
		//reportForm->Show();
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos");
	}
	


	//Version con filtro
	////admin 
	//if (Controller::QueryAdminByUsername(txtUsername->Text) != nullptr) {
	//	Admin^ admin = Controller::LoginAdmin(txtUsername->Text, txtPassword->Text);
	//	MessageBox::Show("Bienvenido " + admin->Name + " Admin");
	//	AdminMainForm^ reportForm = gcnew AdminMainForm();
	//	reportForm->Show();
	//	this->Hide();
	//}
	//else {
	//	//client
	//	if (Controller::QueryClientByUsername(txtUsername->Text) != nullptr) {
	//		Cliente^ client = Controller::Login(txtUsername->Text, txtPassword->Text);
	//		MessageBox::Show("Bienvenido " + client->Name + "Cliente");
	//		MainForm^ reportForm = gcnew MainForm();
	//		MainForm::client = client;
	//		reportForm->Show();
	//		this->Hide();
	//	}
	//	else {
	//		MessageBox::Show("Usuario y contraseña incorrectos.");
	//	}
	//}
}

/*System::Void SalesView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	Employee^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name + " " + emp->LastName);
		SalesMainForm::employee = emp;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}*/