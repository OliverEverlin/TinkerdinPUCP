#include "pch.h"
#include "LoginForm.h"
#include "MainForm.h"


System::Void TinkerdinView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	Cliente^ client = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (client != nullptr) {
		MessageBox::Show("Bienvenido " + client->Name );
		MainForm::client = client;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contrase�a incorrectos.");
	}
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
		MessageBox::Show("Usuario y contrase�a incorrectos.");
	}
}*/