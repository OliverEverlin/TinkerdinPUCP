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
	using namespace System::Collections::Generic;
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
	private: System::Windows::Forms::DataGridView^ dgvMembers;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ attendance;
	private: System::Windows::Forms::Button^ btnCancelAsistance;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventRelevance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventHour;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;







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
			this->eventId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventRelevance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvMembers = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->attendance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancelAsistance = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMembers))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
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
			this->dgvEvents->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyEventsForm::dgvEvents_CellClick);
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
			// dgvMembers
			// 
			this->dgvMembers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMembers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Nombre, this->attendance });
			this->dgvMembers->Location = System::Drawing::Point(411, 32);
			this->dgvMembers->Name = L"dgvMembers";
			this->dgvMembers->Size = System::Drawing::Size(240, 150);
			this->dgvMembers->TabIndex = 37;
			this->dgvMembers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyEventsForm::dgvMembers_CellClick);
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
			// btnCancelAsistance
			// 
			this->btnCancelAsistance->Location = System::Drawing::Point(3, 3);
			this->btnCancelAsistance->Name = L"btnCancelAsistance";
			this->btnCancelAsistance->Size = System::Drawing::Size(170, 23);
			this->btnCancelAsistance->TabIndex = 38;
			this->btnCancelAsistance->Text = L"Camcelar asistencia";
			this->btnCancelAsistance->UseVisualStyleBackColor = true;
			this->btnCancelAsistance->Click += gcnew System::EventHandler(this, &MyEventsForm::btnCancelAsistance_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 32);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(170, 23);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Confirmar asitencia";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyEventsForm::button2_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->btnCancelAsistance);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(91, 71);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(180, 100);
			this->flowLayoutPanel1->TabIndex = 41;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyEventsForm::flowLayoutPanel1_Paint);
			// 
			// MyEventsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 465);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->dgvMembers);
			this->Controls->Add(this->dgvEvents);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyEventsForm";
			this->Text = L"Mis eventos programados";
			this->Load += gcnew System::EventHandler(this, &MyEventsForm::MyEventsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMembers))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
public: 
	void SetClient(Cliente^c) {
		this->client = c;
	}
	void RefreshMemberList() {

	}
	void RefreshEventsList() {
		List <int>^ listEventId = gcnew List<int>();
		listEventId = client->EventList;
		//List<Event^>^ listE = gcnew List<Event^>();
		Event^ Ev = gcnew Event();
		String^ tempo = "";
		for (int i = 0; i < listEventId->Count; i++)
		{
			Ev = Controller::QueryEventById(listEventId[i]);
			if (Ev != nullptr) {
				//listE = add(Controller::QueryEventById(listEventId[i]);
				tempo = Convert::ToString(Ev->Hour) + ":" + Convert::ToString(Ev->minutes);
				dgvEvents->Rows->Add(gcnew array<String^> {
					"" + Ev->Id,
						Ev->Name,
						Ev->Relevance,
						Ev->Date,
						//tempo,

				});
			}
		}
		//dgvEvents->Rows->Clear();
		//List <int>^ ListEventId = gcnew List <int>();
		//ListEventId = client->EventList;
		//if (client->EventList != nullptr) {
		//	Event^ iEvent = gcnew Event();
		//	for (int i = 0; i < client->EventList->Count - 1; i++) {
		//		iEvent = Controller::QueryEventById(ListEventId[i]);
		//		//algoritmo de presentacion de la hora
		//		String^ clock;
		//		clock = Convert::ToString(iEvent->Hour) + ":" + Convert::ToString(iEvent->minutes);
		//		dgvEvents->Rows->Add(gcnew array<String^>{
		//			Convert::ToString(iEvent->Id),
		//				iEvent->Name,
		//				iEvent->Relevance,
		//				iEvent->Date,
		//				clock,
		//		});
		//	}
		//}  

	}

	void ChangeConfirmation(String^ confirm) {
		int selectedRowIndex = dgvEvents->SelectedCells[0]->RowIndex;
		int EventId = Convert::ToInt32(dgvEvents->Rows[selectedRowIndex]->Cells[0]->Value);
		Event^ eve = Controller::QueryEventById(EventId);

		List<Asistance^>^ asistanceList = eve->Members;
		for (int i = 0; i < asistanceList->Count; i++)
		{
			if (asistanceList[i]->Username->Equals(Convert::ToString(client->Username)))
				eve->Members[i]->confirmation = confirm;
		}
		Controller::UpdateEvent(eve);

		//Controller::QueryAllAsistancebyId(clientUsername);
		Event^ even = Controller::QueryEventById(EventId);
		List<Asistance^>^ asistanceL = even->Members;

		dgvMembers->Rows->Clear();
		for (int i = 0; i < asistanceL->Count; i++) {
			dgvMembers->Rows->Add(gcnew array<String^>{
				asistanceL[i]->Username,
					Convert::ToString(asistanceL[i]->confirmation),
			});
		}
	}

private: System::Void MyEventsForm_Load(System::Object^ sender, System::EventArgs^ e);

public: System::Void btnSearchMyEvents_Click(System::Object^ sender, System::EventArgs^ e) {
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


	//List <int>^ listEventId = gcnew List<int>();
	//listEventId = client->EventList;
	//List<Event^>^ listE = gcnew List<Event^>();
	//Event^ Ev = gcnew Event();
	//String^ tempo;
	//for (int i = 0; i < listEventId->Count; i++)
	//{
	//	//listE = add(Controller::QueryEventById(listEventId[i]);
	//	Ev = Controller::QueryEventById(listEventId[i]);
	//	String^ tempo = Convert::ToString(Ev->Hour) + ":" + Convert::ToString(Ev->minutes);
	//	dgvEvents->Rows->Add(gcnew array<String^> {
	//		"" + Ev->Id,
	//			Ev->Name,
	//			Ev->Relevance,
	//			Ev->Date,
	//			tempo,
	//			
	//	});
	//}
}
private: System::Void dgvMembers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dgvEvents_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvEvents->SelectedCells[0]->RowIndex;
	int EventId = Convert::ToInt32(dgvEvents->Rows[selectedRowIndex]->Cells[0]->Value);
	Event^ eve = Controller::QueryEventById(EventId);
	List<Asistance^>^ asistanceList = eve->Members;
	dgvMembers->Rows->Clear();
	for (int i = 0; i < asistanceList->Count; i++) {
		dgvMembers->Rows->Add(gcnew array<String^>{
			asistanceList[i]->Username,
			Convert::ToString(asistanceList[i]->confirmation),
		});
	}
	for (int i = 0; i < asistanceList->Count; i++){
		if (asistanceList[i]->Username->Equals(Convert::ToString(client->Username))) {
			if (asistanceList[i]->confirmation == "Por confirmar") {
				btnCancelAsistance->Visible = true;
				button2->Visible = true;
			}
			if (asistanceList[i]->confirmation == "Confirmada") {
				btnCancelAsistance->Visible = true;
				button2->Visible = false;
			}
			if (asistanceList[i]->confirmation == "Cancelada") {
				btnCancelAsistance->Visible = false;
				button2->Visible = true;
			}
		}
				
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeConfirmation("Confirmada");
	button2->Visible = false;
	btnCancelAsistance->Visible = true;
}
private: System::Void btnCancelAsistance_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeConfirmation("Cancelada");
	button2->Visible = true;
	btnCancelAsistance->Visible = false;
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
