#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TinkerdinModel;
	using namespace TinkerdinControler;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de EventForm
	/// </summary>
	public ref class EventForm : public System::Windows::Forms::Form
	{
	public:
		EventForm(void)
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
		~EventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEventId;
	private: System::Windows::Forms::TextBox^ txtEventName;
	private: System::Windows::Forms::TextBox^ txtEventRelevance;
	private: System::Windows::Forms::TextBox^ txtEventPrivacy;
	private: System::Windows::Forms::TextBox^ txtEventDate;
	private: System::Windows::Forms::TextBox^ txtEventHour;
	private: System::Windows::Forms::DataGridView^ dgvEvents;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventRelevance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventPrivacy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventHour;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEventId = (gcnew System::Windows::Forms::TextBox());
			this->txtEventName = (gcnew System::Windows::Forms::TextBox());
			this->txtEventRelevance = (gcnew System::Windows::Forms::TextBox());
			this->txtEventPrivacy = (gcnew System::Windows::Forms::TextBox());
			this->txtEventDate = (gcnew System::Windows::Forms::TextBox());
			this->txtEventHour = (gcnew System::Windows::Forms::TextBox());
			this->dgvEvents = (gcnew System::Windows::Forms::DataGridView());
			this->eventId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventRelevance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventPrivacy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Relevancia:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(453, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Privacidad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(453, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fecha:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(453, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Hora:";
			// 
			// txtEventId
			// 
			this->txtEventId->Location = System::Drawing::Point(129, 49);
			this->txtEventId->Name = L"txtEventId";
			this->txtEventId->Size = System::Drawing::Size(232, 22);
			this->txtEventId->TabIndex = 6;
			// 
			// txtEventName
			// 
			this->txtEventName->Location = System::Drawing::Point(129, 113);
			this->txtEventName->Name = L"txtEventName";
			this->txtEventName->Size = System::Drawing::Size(232, 22);
			this->txtEventName->TabIndex = 7;
			// 
			// txtEventRelevance
			// 
			this->txtEventRelevance->Location = System::Drawing::Point(129, 170);
			this->txtEventRelevance->Name = L"txtEventRelevance";
			this->txtEventRelevance->Size = System::Drawing::Size(232, 22);
			this->txtEventRelevance->TabIndex = 8;
			// 
			// txtEventPrivacy
			// 
			this->txtEventPrivacy->Location = System::Drawing::Point(543, 43);
			this->txtEventPrivacy->Name = L"txtEventPrivacy";
			this->txtEventPrivacy->Size = System::Drawing::Size(235, 22);
			this->txtEventPrivacy->TabIndex = 9;
			// 
			// txtEventDate
			// 
			this->txtEventDate->Location = System::Drawing::Point(543, 110);
			this->txtEventDate->Name = L"txtEventDate";
			this->txtEventDate->Size = System::Drawing::Size(235, 22);
			this->txtEventDate->TabIndex = 10;
			// 
			// txtEventHour
			// 
			this->txtEventHour->Location = System::Drawing::Point(543, 170);
			this->txtEventHour->Name = L"txtEventHour";
			this->txtEventHour->Size = System::Drawing::Size(235, 22);
			this->txtEventHour->TabIndex = 11;
			// 
			// dgvEvents
			// 
			this->dgvEvents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEvents->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->eventId, this->eventName,
					this->eventRelevance, this->eventPrivacy, this->eventDate, this->eventHour
			});
			this->dgvEvents->Location = System::Drawing::Point(12, 301);
			this->dgvEvents->Name = L"dgvEvents";
			this->dgvEvents->RowHeadersWidth = 51;
			this->dgvEvents->RowTemplate->Height = 24;
			this->dgvEvents->Size = System::Drawing::Size(892, 198);
			this->dgvEvents->TabIndex = 12;
			this->dgvEvents->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EventForm::dgvEvents_CellClick);
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
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(92, 247);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(150, 33);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &EventForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(342, 247);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(150, 33);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &EventForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(592, 247);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(150, 33);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &EventForm::btnDelete_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"(Baja, Media, Alta)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(462, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"(Si ,No)";
			// 
			// EventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 511);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvEvents);
			this->Controls->Add(this->txtEventHour);
			this->Controls->Add(this->txtEventDate);
			this->Controls->Add(this->txtEventPrivacy);
			this->Controls->Add(this->txtEventRelevance);
			this->Controls->Add(this->txtEventName);
			this->Controls->Add(this->txtEventId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EventForm";
			this->Text = L"Eventos de Usuarios";
			this->Load += gcnew System::EventHandler(this, &EventForm::EventForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Event^ event = gcnew Event();
		//event->setId(Convert::ToInt32(txtEventId->Text));
		event->Id = Convert::ToInt32(txtEventId->Text);
		event->Name = txtEventName->Text;
		event->Relevance = txtEventRelevance->Text;
		event->Privacy = txtEventPrivacy->Text;
		event->Date = Convert::ToInt32(txtEventDate->Text);
		event->Hour = Convert::ToInt32(txtEventHour->Text);

		Controller::AddEvent(event);

		CleanControls();
		ShowEvents();
	}
	
	void ShowEvents() {
		List<Event^>^ myEventList = Controller::QueryAllEvent();
		
		dgvEvents->Rows->Clear();
		for (int i = 0; i < myEventList->Count; i++) {
			dgvEvents->Rows->Add(gcnew array<String^>{
					"" + myEventList[i]->Id,
						myEventList[i]->Name,
						myEventList[i]->Relevance,
						myEventList[i]->Privacy,
					"" + myEventList[i]->Date,
					"" + myEventList[i]->Hour,
			});
		}
	}

	void CleanControls() {
		txtEventId->Clear();
		txtEventName->Clear();
		txtEventRelevance->Clear();
		txtEventPrivacy->Clear();
		txtEventDate->Clear();
		txtEventHour->Clear();
	}	

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Event^ event = gcnew Event();
		//event->setId(Convert::ToInt32(txtEventId->Text));
		event->Id = Convert::ToInt32(txtEventId->Text);
		event->Name = txtEventName->Text;
		event->Relevance = txtEventRelevance->Text;
		event->Privacy = txtEventPrivacy->Text;
		event->Date = Convert::ToInt32(txtEventDate->Text);
		event->Hour = Convert::ToInt32(txtEventHour->Text);

		Controller::UpdateEvent(event);
		CleanControls();
		ShowEvents();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtEventId->Text->Trim() == "") {
			MessageBox::Show("Debe seleccionar un producto");
			return;
		}
		Controller::DeleteEvent(Convert::ToInt32(txtEventId->Text->Trim()));
		CleanControls();
		ShowEvents();
	}

	private: System::Void dgvEvents_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvEvents->SelectedCells[0]->RowIndex;
		int eventId = Convert::ToInt32(dgvEvents->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Event^ p = Controller::QueryEventById(eventId);
		/*txtEventId->Text = "" + p->getId();*/
		txtEventId->Text = "" + p->Id;
		txtEventName->Text = p->Name;
		txtEventRelevance->Text = p->Relevance;
		txtEventPrivacy->Text = p->Privacy;
		txtEventDate->Text = "" + p->Date;
		txtEventHour->Text = "" + p->Hour;
	}
	
	private: System::Void EventForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowEvents();
	}
};
}
