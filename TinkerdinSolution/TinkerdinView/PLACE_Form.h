#pragma once
#include "ReportForm.h"
namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PLACE_Form
	/// </summary>
	public ref class PLACE_Form : public System::Windows::Forms::Form
	{
	public:
		PLACE_Form(void)
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
		~PLACE_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPLACE_Report;

	private: System::Windows::Forms::Button^ btnPLACE_Book;
	private: System::Windows::Forms::Button^ btnPLACE_AddMember;




	protected:

	protected:





	protected:

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
			this->btnPLACE_Report = (gcnew System::Windows::Forms::Button());
			this->btnPLACE_Book = (gcnew System::Windows::Forms::Button());
			this->btnPLACE_AddMember = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPLACE_Report
			// 
			this->btnPLACE_Report->Location = System::Drawing::Point(67, 65);
			this->btnPLACE_Report->Name = L"btnPLACE_Report";
			this->btnPLACE_Report->Size = System::Drawing::Size(95, 39);
			this->btnPLACE_Report->TabIndex = 0;
			this->btnPLACE_Report->Text = L"Reportar lugar";
			this->btnPLACE_Report->UseVisualStyleBackColor = true;
			this->btnPLACE_Report->Click += gcnew System::EventHandler(this, &PLACE_Form::btnPLACE_Report_Click);
			// 
			// btnPLACE_Book
			// 
			this->btnPLACE_Book->Location = System::Drawing::Point(67, 123);
			this->btnPLACE_Book->Name = L"btnPLACE_Book";
			this->btnPLACE_Book->Size = System::Drawing::Size(95, 39);
			this->btnPLACE_Book->TabIndex = 2;
			this->btnPLACE_Book->Text = L"Reservar lugar";
			this->btnPLACE_Book->UseVisualStyleBackColor = true;
			this->btnPLACE_Book->Click += gcnew System::EventHandler(this, &PLACE_Form::btnPLACE_Book_Click);
			// 
			// btnPLACE_AddMember
			// 
			this->btnPLACE_AddMember->Location = System::Drawing::Point(67, 183);
			this->btnPLACE_AddMember->Name = L"btnPLACE_AddMember";
			this->btnPLACE_AddMember->Size = System::Drawing::Size(95, 45);
			this->btnPLACE_AddMember->TabIndex = 4;
			this->btnPLACE_AddMember->Text = L"Añadir miembro";
			this->btnPLACE_AddMember->UseVisualStyleBackColor = true;
			// 
			// PLACE_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 318);
			this->Controls->Add(this->btnPLACE_AddMember);
			this->Controls->Add(this->btnPLACE_Book);
			this->Controls->Add(this->btnPLACE_Report);
			this->Name = L"PLACE_Form";
			this->Text = L"PLACE_Form";
			this->Load += gcnew System::EventHandler(this, &PLACE_Form::PLACE_Form_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnPLACE_Report_Click(System::Object^ sender, System::EventArgs^ e) {
		ReportForm^ reportForm = gcnew ReportForm();
		//reportForm->MdiParent = this;
		reportForm->Show();



	}
	private: System::Void btnPLACE_Book_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PLACE_Form_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
