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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usernames;
	public:

		static Cliente^ client;
		static Cliente^ member;
		property char UseType;
		EventForm(void)
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
		~EventForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ txtEventName;


















	private: System::Windows::Forms::Button^ btnAdd;


	private: System::Windows::Forms::ComboBox^ cmbRelevance;







	private: System::Windows::Forms::DateTimePicker^ dtpEventDate;
	private: System::Windows::Forms::NumericUpDown^ nudHour;
	private: System::Windows::Forms::NumericUpDown^ nudMinute;
	private: System::Windows::Forms::Button^ addFriends;



	private: System::Windows::Forms::DataGridView^ dvgMembers;





















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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEventName = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->cmbRelevance = (gcnew System::Windows::Forms::ComboBox());
			this->dtpEventDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->nudHour = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudMinute = (gcnew System::Windows::Forms::NumericUpDown());
			this->addFriends = (gcnew System::Windows::Forms::Button());
			this->dvgMembers = (gcnew System::Windows::Forms::DataGridView());
			this->Usernames = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHour))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMinute))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgMembers))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 27);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 133);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Relevancia:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 64);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fecha:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 99);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Hora:";
			// 
			// txtEventName
			// 
			this->txtEventName->Location = System::Drawing::Point(97, 25);
			this->txtEventName->Margin = System::Windows::Forms::Padding(2);
			this->txtEventName->Name = L"txtEventName";
			this->txtEventName->Size = System::Drawing::Size(202, 20);
			this->txtEventName->TabIndex = 7;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(81, 211);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(150, 27);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Guardar evento";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &EventForm::btnAdd_Click);
			// 
			// cmbRelevance
			// 
			this->cmbRelevance->FormattingEnabled = true;
			this->cmbRelevance->Location = System::Drawing::Point(97, 130);
			this->cmbRelevance->Margin = System::Windows::Forms::Padding(2);
			this->cmbRelevance->Name = L"cmbRelevance";
			this->cmbRelevance->Size = System::Drawing::Size(92, 21);
			this->cmbRelevance->TabIndex = 18;
			// 
			// dtpEventDate
			// 
			this->dtpEventDate->Location = System::Drawing::Point(97, 58);
			this->dtpEventDate->Name = L"dtpEventDate";
			this->dtpEventDate->Size = System::Drawing::Size(200, 20);
			this->dtpEventDate->TabIndex = 23;
			// 
			// nudHour
			// 
			this->nudHour->Location = System::Drawing::Point(97, 97);
			this->nudHour->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->nudHour->Name = L"nudHour";
			this->nudHour->Size = System::Drawing::Size(59, 20);
			this->nudHour->TabIndex = 24;
			// 
			// nudMinute
			// 
			this->nudMinute->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->nudMinute->Location = System::Drawing::Point(172, 98);
			this->nudMinute->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->nudMinute->Name = L"nudMinute";
			this->nudMinute->Size = System::Drawing::Size(59, 20);
			this->nudMinute->TabIndex = 25;
			// 
			// addFriends
			// 
			this->addFriends->Location = System::Drawing::Point(81, 176);
			this->addFriends->Name = L"addFriends";
			this->addFriends->Size = System::Drawing::Size(150, 23);
			this->addFriends->TabIndex = 26;
			this->addFriends->Text = L"Agregar amigos";
			this->addFriends->UseVisualStyleBackColor = true;
			this->addFriends->Click += gcnew System::EventHandler(this, &EventForm::button1_Click);
			// 
			// dvgMembers
			// 
			this->dvgMembers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgMembers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Usernames });
			this->dvgMembers->Location = System::Drawing::Point(330, 25);
			this->dvgMembers->Name = L"dvgMembers";
			this->dvgMembers->Size = System::Drawing::Size(193, 215);
			this->dvgMembers->TabIndex = 38;
			this->dvgMembers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EventForm::dvgMembers_CellContentClick);
			// 
			// Usernames
			// 
			this->Usernames->HeaderText = L"Personas";
			this->Usernames->Name = L"Usernames";
			this->Usernames->Width = 150;
			// 
			// EventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 265);
			this->Controls->Add(this->dvgMembers);
			this->Controls->Add(this->addFriends);
			this->Controls->Add(this->nudMinute);
			this->Controls->Add(this->nudHour);
			this->Controls->Add(this->dtpEventDate);
			this->Controls->Add(this->cmbRelevance);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtEventName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EventForm";
			this->Text = L"Agregar eventos de Usuarios";
			this->Load += gcnew System::EventHandler(this, &EventForm::EventForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHour))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMinute))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgMembers))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Event^ event = gcnew Event();
		//event->setId(Convert::ToInt32(txtEventId->Text));
		event->Id = Controller::QueryLastEventId()+1;
		event->Name = txtEventName->Text;
		event->Relevance = cmbRelevance->SelectedItem->ToString();
		event->Hour = Convert::ToInt32(nudHour);
		event->minutes= Convert::ToInt32(nudMinute);
		event->Date = dtpEventDate->Value.ToString("yyyy-MM-dd");
		
		//Aqui trabajamos con la lista de invitados
		List<String^>^ guestList;
		for (int i = 0; i < dvgMembers->Rows->Count; i++){
			guestList->Add(dvgMembers->Rows[i]->Cells[0]->Value->ToString());
		}
		guestList->Add(client->Username);
		event->guest;
		Controller::AddEvent(event);
		CleanControls();
		ShowEvents();
		Close();
	}
	
	void ShowEvents() {
		//List<Event^>^ myEventList = Controller::QueryAllEvent();
		
		//dgvEvents->Rows->Clear();
		//for (int i = 0; i < myEventList->Count; i++) {
		//	dgvEvents->Rows->Add(gcnew array<String^>{
		//			"" + myEventList[i]->Id,
		//				myEventList[i]->Name,
		//				myEventList[i]->Relevance,
		//				//myEventList[i]->Privacy,
		//			"" + myEventList[i]->Date,
		//			"" + myEventList[i]->Hour,
		//	});
		//}
	}

	void CleanControls() {
		//txtEventId->Clear();
		txtEventName->Clear();
		//txtEventRelevance->Clear();
		//txtEventPrivacy->Clear();
		//txtEventDate->Clear();
		dtpEventDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
		//txtEventHour->Clear();
	}	

	//private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	//	Event^ event = gcnew Event();
	//	//event->setId(Convert::ToInt32(txtEventId->Text));
	//	event->Id = Convert::ToInt32(txtEventId->Text);
	//	event->Name = txtEventName->Text;
	//	//event->Relevance = txtEventRelevance->Text;
	//	//event->Relevance = txtBox1->Text;
	//	//event->Privacy = txtEventPrivacy->Text;
	//	//event->Privacy = txtBox2->Text;
	//	//event->Date = Convert::ToInt32(txtEventDate->Text);
	//	//event->Date = txtEventDate->Text;
	//	event->Date = dtpEventDate->Value.ToString("yyyy-MM-dd");
	//	//event->Hour = Convert::ToInt32(txtEventHour->Text);

	

	private: System::Void dgvEvents_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//int selectedRowIndex = dgvEvents->SelectedCells[0]->RowIndex;
		//int eventId = Convert::ToInt32(dgvEvents->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		//Event^ p = Controller::QueryEventById(eventId);
		/*txtEventId->Text = "" + p->getId();*/
		/*txtEventId->Text = "" + p->Id;
		txtEventName->Text = p->Name;*/
		//txtEventRelevance->Text = p->Relevance;
		//txtEventPrivacy->Text = p->Privacy;
		
		//txtEventDate->Text = "" + p->Date;
		//txtEventDate->Text = p->Date;
		// con esto corre la muestra de datos
		//dtpEventDate->Value = Convert::ToDateTime(dgvEvents->Rows[selectedRowIndex]->Cells[4]->Value);

			//ConvertTo::DateTime(dgvEvents->Rows[selectedRowIndex]->Cells[4]->Value);
		//txtEventHour->Text = "" + p->Hour;
	}
	
	private: System::Void EventForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowEvents();
		FillcmbRelevance();
	}
void FillcmbRelevance() {
	cmbRelevance->Items->Clear();
	List<String^>^ relevList = Controller::QueryAllRelevance();

	for (int i = 0; i < relevList->Count; i++){
		cmbRelevance->Items->Add(relevList[i]);
	}

}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
public: Void SetClient(Cliente^ c) {
	this->client = c;
	//txtUsername->Text = c->Username;
	//lblCustomerData->Text = this->customer->DocNumber + " - " + cust->Name + " " + ((Natural^)cust)->LastName;
}
public: Void SetMember(Cliente^ m) {
	this->member = m;
}

private: System::Void AddFriend_Click(System::Object^ sender, System::EventArgs^ e) {
	//en proceso
	/*FriendsForm^ friendForm = gcnew FriendsForm();
	((FriendsForm^)friendForm)->SetClient(client);
	friendForm->UseType = 'E';
	friendForm->Show();*/

	/*
	FindFriendsForm^ Sclientf = gcnew FindFriendsForm();
	Sclientf->UseType = 'R';
	Sclientf->RefReportForm = this;
	Sclientf->ShowDialog();*/
}

private: System::Void dvgMembers_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
