#pragma once

#include "ClientForm.h"
namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TinkerdinControler;
	using namespace TinkerdinModel;
	using namespace System::Collections::Generic;
	using namespace TinkerdinView;
	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::PictureBox^ pbIntro;

	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Label^ label3;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->pbIntro = (gcnew System::Windows::Forms::PictureBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbIntro))->BeginInit();
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(493, 146);
			this->btnOK->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(121, 33);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"Aceptar";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(693, 146);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(121, 33);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(467, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(467, 89);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contrase�a:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(617, 36);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(188, 22);
			this->txtUsername->TabIndex = 4;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtUsername_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(617, 81);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(188, 22);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtPassword_KeyDown);
			// 
			// pbIntro
			// 
			this->pbIntro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbIntro.Image")));
			this->pbIntro->Location = System::Drawing::Point(55, 15);
			this->pbIntro->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pbIntro->Name = L"pbIntro";
			this->pbIntro->Size = System::Drawing::Size(289, 267);
			this->pbIntro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbIntro->TabIndex = 6;
			this->pbIntro->TabStop = false;
			this->pbIntro->LoadCompleted += gcnew System::ComponentModel::AsyncCompletedEventHandler(this, &LoginForm::pbIntro_LoadCompleted);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(687, 226);
			this->btnRegister->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(120, 33);
			this->btnRegister->TabIndex = 7;
			this->btnRegister->Text = L"Registro";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(423, 235);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"�Eres nuev@\? Registrate aqu�";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 314);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->pbIntro);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LoginForm";
			this->Text = L"Autenticaci�n de usuario";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbIntro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	
	private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter)
			btnOK->PerformClick();
	}

private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientForm^ clientForm = gcnew ClientForm();
	//clientForm->MdiParent = this;
	clientForm->Show();
}
private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//pbIntro->Image=gcnew Bitmap(opnfd->F)
	//this-> Close();
}
private: System::Void pbIntro_LoadCompleted(System::Object^ sender, System::ComponentModel::AsyncCompletedEventArgs^ e) {
}
};
}
