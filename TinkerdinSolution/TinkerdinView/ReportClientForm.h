#pragma once
//#include "SearchClientForm.h"
#include "Resource.h"
#include "FindFriendsform.h"

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

	/// <summary>
	/// Resumen de ReportClientForm
	/// </summary>
	public ref class ReportClientForm : public System::Windows::Forms::Form
	{
	public:
		static Cliente^ client;
		static Cliente^ reporter;
	
	public:

	public:
		
		ReportClientForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReportClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblReport;
	private: System::Windows::Forms::TextBox^ txtUsername;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Description;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSearch;

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
			this->Description = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->lblReport = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(181, 55);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(239, 22);
			this->txtUsername->TabIndex = 55;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 55);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 16);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Nombre de usuario";
			// 
			// Description
			// 
			this->Description->AutoSize = true;
			this->Description->Location = System::Drawing::Point(48, 113);
			this->Description->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(85, 16);
			this->Description->TabIndex = 56;
			this->Description->Text = L"Descripción: ";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(181, 113);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(532, 160);
			this->txtDescription->TabIndex = 57;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(89, 319);
			this->btnSend->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(100, 28);
			this->btnSend->TabIndex = 58;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &ReportClientForm::btnSend_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(517, 319);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(100, 28);
			this->btnCancel->TabIndex = 59;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ReportClientForm::btnCancel_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(517, 53);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(100, 28);
			this->btnSearch->TabIndex = 60;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ReportClientForm::btnSearch_Click);
			// 
			// lblReport
			// 
			this->lblReport->AutoSize = true;
			this->lblReport->Location = System::Drawing::Point(48, 11);
			this->lblReport->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblReport->Name = L"lblReport";
			this->lblReport->Size = System::Drawing::Size(44, 16);
			this->lblReport->TabIndex = 61;
			this->lblReport->Text = L"label1";
			// 
			// ReportClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 391);
			this->Controls->Add(this->lblReport);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label6);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ReportClientForm";
			this->Text = L"Reporte de usuarios";
			this->Load += gcnew System::EventHandler(this, &ReportClientForm::ReportClientForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: Void SetClient(Cliente^ c) {
	this->client = c;
	txtUsername->Text = c->Username;
	//lblCustomerData->Text = this->customer->DocNumber + " - " + cust->Name + " " + ((Natural^)cust)->LastName;
}
public: Void SetReporter(Cliente^ repor) {
	this->reporter = repor;
	lblReport->Text = this->reporter->Name;
}
private: System::Void ReportClientForm_Load(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	FindFriendsForm^ Sclientf = gcnew FindFriendsForm();
	Sclientf->RefReportForm = this;
	Sclientf->UseType = 'R';
	Sclientf->me= this-> client;
	Sclientf->ShowDialog();
}
private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
	Report^ r = gcnew Report();
	r->state = 'P';
	r->Description = txtDescription->Text;
	r->badUser = txtUsername->Text;
	r->reporter = this->reporter->Username;

	Controller::AddReport(r);

	CleanReport();
	MessageBox::Show("Reporte enviado con éxito");
}
	   void CleanReport() {
		   txtUsername->Clear();
		   txtDescription->Clear();
	   }

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
