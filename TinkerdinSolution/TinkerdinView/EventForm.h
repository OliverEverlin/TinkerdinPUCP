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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEventId;
	private: System::Windows::Forms::TextBox^ txtEventName;




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
	private: System::Windows::Forms::ComboBox^ txtBox1;
	private: System::Windows::Forms::ComboBox^ txtBox2;



	private: System::Windows::Forms::DateTimePicker^ dtpEventDate;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ attendance;


















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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEventId = (gcnew System::Windows::Forms::TextBox());
			this->txtEventName = (gcnew System::Windows::Forms::TextBox());
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
			this->txtBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dtpEventDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->attendance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 94);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 143);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Relevancia:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(340, 40);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Privacidad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(340, 92);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fecha:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(340, 143);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Hora:";
			// 
			// txtEventId
			// 
			this->txtEventId->Location = System::Drawing::Point(97, 18);
			this->txtEventId->Margin = System::Windows::Forms::Padding(2);
			this->txtEventId->Name = L"txtEventId";
			this->txtEventId->Size = System::Drawing::Size(61, 20);
			this->txtEventId->TabIndex = 6;
			// 
			// txtEventName
			// 
			this->txtEventName->Location = System::Drawing::Point(97, 92);
			this->txtEventName->Margin = System::Windows::Forms::Padding(2);
			this->txtEventName->Name = L"txtEventName";
			this->txtEventName->Size = System::Drawing::Size(175, 20);
			this->txtEventName->TabIndex = 7;
			// 
			// dgvEvents
			// 
			this->dgvEvents->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEvents->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->eventId, this->eventName,
					this->eventRelevance, this->eventPrivacy, this->eventDate, this->eventHour
			});
			this->dgvEvents->Location = System::Drawing::Point(11, 400);
			this->dgvEvents->Margin = System::Windows::Forms::Padding(2);
			this->dgvEvents->Name = L"dgvEvents";
			this->dgvEvents->RowHeadersWidth = 51;
			this->dgvEvents->RowTemplate->Height = 24;
			this->dgvEvents->Size = System::Drawing::Size(669, 161);
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
			this->btnAdd->Location = System::Drawing::Point(444, 232);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(112, 27);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Guardar evento";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &EventForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(444, 263);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(112, 27);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &EventForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(444, 201);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(112, 27);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &EventForm::btnDelete_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 158);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"(Baja, Media, Alta)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(553, 36);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"(Si ,No)";
			// 
			// txtBox1
			// 
			this->txtBox1->FormattingEnabled = true;
			this->txtBox1->Location = System::Drawing::Point(97, 136);
			this->txtBox1->Margin = System::Windows::Forms::Padding(2);
			this->txtBox1->Name = L"txtBox1";
			this->txtBox1->Size = System::Drawing::Size(92, 21);
			this->txtBox1->TabIndex = 18;
			// 
			// txtBox2
			// 
			this->txtBox2->FormattingEnabled = true;
			this->txtBox2->Location = System::Drawing::Point(407, 33);
			this->txtBox2->Margin = System::Windows::Forms::Padding(2);
			this->txtBox2->Name = L"txtBox2";
			this->txtBox2->Size = System::Drawing::Size(92, 21);
			this->txtBox2->TabIndex = 19;
			// 
			// dtpEventDate
			// 
			this->dtpEventDate->Location = System::Drawing::Point(395, 89);
			this->dtpEventDate->Name = L"dtpEventDate";
			this->dtpEventDate->Size = System::Drawing::Size(200, 20);
			this->dtpEventDate->TabIndex = 23;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(395, 141);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(59, 20);
			this->numericUpDown1->TabIndex = 24;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(462, 143);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(59, 20);
			this->numericUpDown2->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Agregar amigos";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Nombre,
					this->attendance
			});
			this->dataGridView1->Location = System::Drawing::Point(66, 201);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 38;
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
			// EventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 585);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dtpEventDate);
			this->Controls->Add(this->txtBox2);
			this->Controls->Add(this->txtBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvEvents);
			this->Controls->Add(this->txtEventName);
			this->Controls->Add(this->txtEventId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EventForm";
			this->Text = L"Agregar eventos de Usuarios";
			this->Load += gcnew System::EventHandler(this, &EventForm::EventForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEvents))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Event^ event = gcnew Event();
		//event->setId(Convert::ToInt32(txtEventId->Text));
		event->Id = Convert::ToInt32(txtEventId->Text);
		event->Name = txtEventName->Text;
		//event->Relevance = txtEventRelevance->Text;
		event->Relevance = txtBox1->Text;
		//event->Privacy = txtEventPrivacy->Text;
		event->Privacy = txtBox2->Text;
		//event->Date = Convert::ToInt32(txtEventDate->Text);
		//event->Date = txtEventDate->Text;
		event->Date = dtpEventDate->Value.ToString("yyyy-MM-dd");
		//event->Hour = Convert::ToInt32(txtEventHour->Text);

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
		//txtEventRelevance->Clear();
		//txtEventPrivacy->Clear();
		//txtEventDate->Clear();
		dtpEventDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
		//txtEventHour->Clear();
	}	

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Event^ event = gcnew Event();
		//event->setId(Convert::ToInt32(txtEventId->Text));
		event->Id = Convert::ToInt32(txtEventId->Text);
		event->Name = txtEventName->Text;
		//event->Relevance = txtEventRelevance->Text;
		event->Relevance = txtBox1->Text;
		//event->Privacy = txtEventPrivacy->Text;
		event->Privacy = txtBox2->Text;
		//event->Date = Convert::ToInt32(txtEventDate->Text);
		//event->Date = txtEventDate->Text;
		event->Date = dtpEventDate->Value.ToString("yyyy-MM-dd");
		//event->Hour = Convert::ToInt32(txtEventHour->Text);

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
		/*txtEventId->Text = "" + p->Id;
		txtEventName->Text = p->Name;*/
		//txtEventRelevance->Text = p->Relevance;
		txtBox1->Text = p->Relevance;
		//txtEventPrivacy->Text = p->Privacy;
		txtBox2->Text = p->Privacy;
		//txtEventDate->Text = "" + p->Date;
		//txtEventDate->Text = p->Date;
		dtpEventDate->Value = Convert::ToDateTime(dgvEvents->Rows[selectedRowIndex]->Cells[4]->Value);

			//ConvertTo::DateTime(dgvEvents->Rows[selectedRowIndex]->Cells[4]->Value);
		//txtEventHour->Text = "" + p->Hour;
	}
	
	private: System::Void EventForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowEvents();
		txtBox1->Items->Add("Alta");
		txtBox1->Items->Add("Media");
		txtBox1->Items->Add("Baja");

		txtBox2->Items->Add("Si");
		txtBox2->Items->Add("No");
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
};
}
