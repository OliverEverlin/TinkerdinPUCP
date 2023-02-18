#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace TinkerdinControler;
	using namespace TinkerdinModel;
	using namespace Threading;


	/// <summary>
	/// Resumen de MyEventsForm
	/// </summary>
	public ref class MyEventsForm : public System::Windows::Forms::Form
	{
	

	public:
		MyEventsForm(void)
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
		~MyEventsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDate;
	protected:
	private: System::Windows::Forms::TextBox^ txtRelevance;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtActualDate;
	private: System::Windows::Forms::Button^ btnSearchMyEvents;


	private: System::Windows::Forms::DataGridView^ dgvEvents;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventRelevance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventPrivacy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventHour;

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
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->txtRelevance = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtActualDate = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchMyEvents = (gcnew System::Windows::Forms::Button());
			this->dgvEvents = (gcnew System::Windows::Forms::DataGridView());
			this->eventId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventRelevance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventPrivacy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->BeginInit();
			this->SuspendLayout();
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(376, 114);
			this->txtDate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDate->Name = L"txtDate";
			this->txtDate->Size = System::Drawing::Size(128, 20);
			this->txtDate->TabIndex = 36;
			// 
			// txtRelevance
			// 
			this->txtRelevance->Location = System::Drawing::Point(376, 58);
			this->txtRelevance->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtRelevance->Name = L"txtRelevance";
			this->txtRelevance->Size = System::Drawing::Size(128, 20);
			this->txtRelevance->TabIndex = 35;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(82, 114);
			this->txtName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(130, 20);
			this->txtName->TabIndex = 34;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(82, 63);
			this->txtId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(130, 20);
			this->txtId->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(304, 114);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Fecha:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(304, 60);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Relevancia:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 63);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 114);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 12);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Fecha:";
			// 
			// txtActualDate
			// 
			this->txtActualDate->Location = System::Drawing::Point(50, 10);
			this->txtActualDate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtActualDate->Name = L"txtActualDate";
			this->txtActualDate->ReadOnly = true;
			this->txtActualDate->Size = System::Drawing::Size(130, 20);
			this->txtActualDate->TabIndex = 27;
			// 
			// btnSearchMyEvents
			// 
			this->btnSearchMyEvents->Location = System::Drawing::Point(566, 81);
			this->btnSearchMyEvents->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSearchMyEvents->Name = L"btnSearchMyEvents";
			this->btnSearchMyEvents->Size = System::Drawing::Size(94, 27);
			this->btnSearchMyEvents->TabIndex = 26;
			this->btnSearchMyEvents->Text = L"Buscar";
			this->btnSearchMyEvents->UseVisualStyleBackColor = true;
			this->btnSearchMyEvents->Click += gcnew System::EventHandler(this, &MyEventsForm::btnSearchMyEvents_Click);
			// 
			// dgvEvents
			// 
			this->dgvEvents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEvents->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->eventId, this->eventName,
					this->eventRelevance, this->eventPrivacy, this->eventDate, this->eventHour
			});
			this->dgvEvents->Location = System::Drawing::Point(9, 153);
			this->dgvEvents->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvEvents->Name = L"dgvEvents";
			this->dgvEvents->RowHeadersWidth = 51;
			this->dgvEvents->RowTemplate->Height = 24;
			this->dgvEvents->Size = System::Drawing::Size(669, 228);
			this->dgvEvents->TabIndex = 25;
			// 
			// eventId
			// 
			this->eventId->HeaderText = L"Id";
			this->eventId->MinimumWidth = 6;
			this->eventId->Name = L"eventId";
			this->eventId->Width = 50;
			// 
			// eventName
			// 
			this->eventName->HeaderText = L"Name";
			this->eventName->MinimumWidth = 6;
			this->eventName->Name = L"eventName";
			this->eventName->Width = 200;
			// 
			// eventRelevance
			// 
			this->eventRelevance->HeaderText = L"Relevance";
			this->eventRelevance->MinimumWidth = 6;
			this->eventRelevance->Name = L"eventRelevance";
			this->eventRelevance->Width = 150;
			// 
			// eventPrivacy
			// 
			this->eventPrivacy->HeaderText = L"Privacy";
			this->eventPrivacy->MinimumWidth = 6;
			this->eventPrivacy->Name = L"eventPrivacy";
			this->eventPrivacy->Width = 150;
			// 
			// eventDate
			// 
			this->eventDate->HeaderText = L"Date";
			this->eventDate->MinimumWidth = 6;
			this->eventDate->Name = L"eventDate";
			this->eventDate->Width = 150;
			// 
			// eventHour
			// 
			this->eventHour->HeaderText = L"Hour";
			this->eventHour->MinimumWidth = 6;
			this->eventHour->Name = L"eventHour";
			this->eventHour->Width = 130;
			// 
			// MyEventsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 476);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->txtRelevance);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtActualDate);
			this->Controls->Add(this->btnSearchMyEvents);
			this->Controls->Add(this->dgvEvents);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyEventsForm";
			this->Text = L"MyEventsForm";
			this->Load += gcnew System::EventHandler(this, &MyEventsForm::MyEventsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyEventsForm_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnSearchMyEvents_Click(System::Object^ sender, System::EventArgs^ e) {
	/*customer = Controller::QueryCustomerByDocNumber(txtCustomer->Text);
	if (customer != nullptr) {
		if (customer->GetType() == Natural::typeid)
			lblCustomerData->Text = customer->DocNumber + " - " + customer->Name +
			" " + ((Natural^)customer)->LastName;
		else
			lblCustomerData->Text = customer->DocNumber + " - " + customer->Name;
	}
	else {
		MessageBox::Show("Cliente no encontrado!");
	}*/
}
};
}
