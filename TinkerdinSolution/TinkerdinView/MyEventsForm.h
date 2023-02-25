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
	public ref class MyEventsForm : public System::Windows::Forms::Form{
		static Cliente^ client;
		//static Cliente^ member;
		property char UseType;
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

	protected:












	private: System::Windows::Forms::DataGridView^ dgvEvents;






	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ attendance;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventRelevance;
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
			this->dgvEvents = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->attendance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->eventId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventRelevance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvEvents
			// 
			this->dgvEvents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEvents->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->eventId, this->eventName,
					this->eventRelevance, this->eventDate, this->eventHour
			});
			this->dgvEvents->Location = System::Drawing::Point(29, 216);
			this->dgvEvents->Margin = System::Windows::Forms::Padding(2);
			this->dgvEvents->Name = L"dgvEvents";
			this->dgvEvents->RowHeadersWidth = 51;
			this->dgvEvents->RowTemplate->Height = 24;
			this->dgvEvents->Size = System::Drawing::Size(625, 228);
			this->dgvEvents->TabIndex = 25;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Nombre,
					this->attendance
			});
			this->dataGridView1->Location = System::Drawing::Point(411, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 37;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Personas";
			this->Nombre->Name = L"Nombre";
			// 
			// attendance
			// 
			this->attendance->HeaderText = L"Asistencia";
			this->attendance->Name = L"attendance";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 23);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Camcelar asistencia";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 86);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(170, 23);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Confirmar asitencia";
			this->button2->UseVisualStyleBackColor = true;
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
			this->eventRelevance->Width = 70;
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
			// 
			// MyEventsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 465);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dgvEvents);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyEventsForm";
			this->Text = L"Mis eventos programados";
			this->Load += gcnew System::EventHandler(this, &MyEventsForm::MyEventsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
public: void SetClient(Cliente^c) {
	this->client = c;
}
	  void RefreshMemberList() {

	  }
	  void RefreshEventsList() {
		  
	  }

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
