#pragma once
#include "ReportClientForm.h"

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace TinkerdinControler;
	using namespace TinkerdinModel;
	using namespace Threading;

	/// <summary>
	/// Resumen de SearchClientForm
	/// </summary>
	public ref class SearchClientForm : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ RefReportForm;
		
	public:
		//SearchClientForm(void)
		SearchClientForm()
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			UseType = 'S';
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SearchClientForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label6;










	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Button^ btnChose;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::Label());
			this->btnChose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(122, 28);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 82;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 81;
			this->label6->Text = L"Nombre de usuario";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(122, 64);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 70;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(21, 67);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 13);
			this->name->TabIndex = 69;
			this->name->Text = L"Nombre:";
			// 
			// btnChose
			// 
			this->btnChose->Location = System::Drawing::Point(392, 28);
			this->btnChose->Name = L"btnChose";
			this->btnChose->Size = System::Drawing::Size(96, 33);
			this->btnChose->TabIndex = 92;
			this->btnChose->Text = L"Escoger";
			this->btnChose->UseVisualStyleBackColor = true;
			this->btnChose->Click += gcnew System::EventHandler(this, &SearchClientForm::btnChose_Click);
			// 
			// SearchClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 156);
			this->Controls->Add(this->btnChose);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->name);
			this->Name = L"SearchClientForm";
			this->Text = L"Buscar Personas";
			this->Load += gcnew System::EventHandler(this, &SearchClientForm::SearchClientForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SearchClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCmbGender();
		ShowClients();
	}
public: System::Void FillCmbGender() {
		//cmbGender->Items->Clear();
		List<String^>^ genderList = Controller::QueryAllGender();

		for (int i = 0; i < genderList->Count; i++)
		{
			//cmbGender->Items->Add(genderList[i]);
		}
	}
public: System::Void ShowClients() {
		/*List<Cliente^>^ myClientList = Controller::QueryAllClients();
		dgvClients->Rows->Clear();
		if (myClientList != nullptr) {
			for (int i = 0; i < myClientList->Count; i++) {
				dgvClients->Rows->Add(gcnew array<String^>{
					myClientList[i]->Username,
						"" + myClientList[i]->Age,
						"" + (myClientList[i]->Gender),
				});
			}
		}*/
	}
private: System::Void dgvClients_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void btnChose_Click(System::Object^ sender, System::EventArgs^ e) {
	/*ReportClientForm^ reportForm = gcnew ReportClientForm();
	Cliente^ client = gcnew Cliente();
	client = Controller::QueryClientByUsername(txtUsername->Text);
	ReportClientForm::client = client;
	this->Close();*/
}
private: System::Void dgvClients_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
