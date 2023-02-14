#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReportClientForm
	/// </summary>
	public ref class ReportClientForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::TextBox^ txtUsername;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Description;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Button^ btnCancel;

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
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(135, 29);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 55;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Nombre de usuario";
			// 
			// Description
			// 
			this->Description->AutoSize = true;
			this->Description->Location = System::Drawing::Point(35, 76);
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(69, 13);
			this->Description->TabIndex = 56;
			this->Description->Text = L"Descripción: ";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(135, 76);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(400, 131);
			this->txtDescription->TabIndex = 57;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(66, 243);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 58;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(387, 243);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 59;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// ReportClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 318);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label6);
			this->Name = L"ReportClientForm";
			this->Text = L"Reporte de usuarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
