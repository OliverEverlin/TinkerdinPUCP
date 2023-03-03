#pragma once
#include "ChooseFriendForm.h"
//#include "MainForm.h" //para recibir el username del main form
#include "Resource.h"

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
	using namespace Threading;

	/// <summary>
	/// Resumen de RegisterEventForm
	/// </summary>
	public ref class RegisterEventForm : public System::Windows::Forms::Form
	{
	private:
		Cliente^ user; //guardar al usuario que crea el evento
	public:
		//property Form^ RefFriendsForm;
		//static Cliente^ cliente;
		RegisterEventForm(void)
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
		~RegisterEventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnFriends;
	protected:
	private: System::Windows::Forms::DataGridView^ dvgMembers;

	private: System::Windows::Forms::Button^ addFriends;
	private: System::Windows::Forms::NumericUpDown^ nudMinute;
	private: System::Windows::Forms::NumericUpDown^ nudHour;
	private: System::Windows::Forms::DateTimePicker^ dtpEventDate;
	private: System::Windows::Forms::ComboBox^ cmbRelevance;
	private: System::Windows::Forms::Button^ btnAddEvent;

	private: System::Windows::Forms::TextBox^ txtEventName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usernames;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Confirmation;
	private: System::Windows::Forms::Button^ DeleteMember;
	private: System::Windows::Forms::TextBox^ txtEventId;

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
			this->btnFriends = (gcnew System::Windows::Forms::Button());
			this->dvgMembers = (gcnew System::Windows::Forms::DataGridView());
			this->Usernames = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Confirmation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->addFriends = (gcnew System::Windows::Forms::Button());
			this->nudMinute = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudHour = (gcnew System::Windows::Forms::NumericUpDown());
			this->dtpEventDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbRelevance = (gcnew System::Windows::Forms::ComboBox());
			this->btnAddEvent = (gcnew System::Windows::Forms::Button());
			this->txtEventName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DeleteMember = (gcnew System::Windows::Forms::Button());
			this->txtEventId = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgMembers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMinute))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHour))->BeginInit();
			this->SuspendLayout();
			// 
			// btnFriends
			// 
			this->btnFriends->Location = System::Drawing::Point(207, 125);
			this->btnFriends->Name = L"btnFriends";
			this->btnFriends->Size = System::Drawing::Size(75, 23);
			this->btnFriends->TabIndex = 52;
			this->btnFriends->Text = L"button1";
			this->btnFriends->UseVisualStyleBackColor = true;
			// 
			// dvgMembers
			// 
			this->dvgMembers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgMembers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Usernames,
					this->Confirmation
			});
			this->dvgMembers->Location = System::Drawing::Point(315, 22);
			this->dvgMembers->Name = L"dvgMembers";
			this->dvgMembers->Size = System::Drawing::Size(193, 215);
			this->dvgMembers->TabIndex = 51;
			// 
			// Usernames
			// 
			this->Usernames->HeaderText = L"Personas";
			this->Usernames->Name = L"Usernames";
			this->Usernames->Width = 150;
			// 
			// Confirmation
			// 
			this->Confirmation->HeaderText = L"Confirmation";
			this->Confirmation->Name = L"Confirmation";
			this->Confirmation->Visible = false;
			// 
			// addFriends
			// 
			this->addFriends->Location = System::Drawing::Point(66, 173);
			this->addFriends->Name = L"addFriends";
			this->addFriends->Size = System::Drawing::Size(150, 23);
			this->addFriends->TabIndex = 50;
			this->addFriends->Text = L"Agregar amigos";
			this->addFriends->UseVisualStyleBackColor = true;
			this->addFriends->Click += gcnew System::EventHandler(this, &RegisterEventForm::addFriends_Click);
			// 
			// nudMinute
			// 
			this->nudMinute->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->nudMinute->Location = System::Drawing::Point(157, 95);
			this->nudMinute->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->nudMinute->Name = L"nudMinute";
			this->nudMinute->Size = System::Drawing::Size(59, 20);
			this->nudMinute->TabIndex = 49;
			// 
			// nudHour
			// 
			this->nudHour->Location = System::Drawing::Point(82, 94);
			this->nudHour->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->nudHour->Name = L"nudHour";
			this->nudHour->Size = System::Drawing::Size(59, 20);
			this->nudHour->TabIndex = 48;
			// 
			// dtpEventDate
			// 
			this->dtpEventDate->Location = System::Drawing::Point(82, 55);
			this->dtpEventDate->Name = L"dtpEventDate";
			this->dtpEventDate->Size = System::Drawing::Size(200, 20);
			this->dtpEventDate->TabIndex = 47;
			// 
			// cmbRelevance
			// 
			this->cmbRelevance->FormattingEnabled = true;
			this->cmbRelevance->Location = System::Drawing::Point(82, 127);
			this->cmbRelevance->Margin = System::Windows::Forms::Padding(2);
			this->cmbRelevance->Name = L"cmbRelevance";
			this->cmbRelevance->Size = System::Drawing::Size(92, 21);
			this->cmbRelevance->TabIndex = 46;
			// 
			// btnAddEvent
			// 
			this->btnAddEvent->Location = System::Drawing::Point(66, 253);
			this->btnAddEvent->Margin = System::Windows::Forms::Padding(2);
			this->btnAddEvent->Name = L"btnAddEvent";
			this->btnAddEvent->Size = System::Drawing::Size(150, 27);
			this->btnAddEvent->TabIndex = 45;
			this->btnAddEvent->Text = L"Guardar evento";
			this->btnAddEvent->UseVisualStyleBackColor = true;
			this->btnAddEvent->Click += gcnew System::EventHandler(this, &RegisterEventForm::btnAddEvent_Click);
			// 
			// txtEventName
			// 
			this->txtEventName->Location = System::Drawing::Point(82, 22);
			this->txtEventName->Margin = System::Windows::Forms::Padding(2);
			this->txtEventName->Name = L"txtEventName";
			this->txtEventName->Size = System::Drawing::Size(202, 20);
			this->txtEventName->TabIndex = 44;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 96);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Hora:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 61);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Fecha:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 130);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Relevancia:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 24);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Nombre:";
			// 
			// DeleteMember
			// 
			this->DeleteMember->Location = System::Drawing::Point(66, 214);
			this->DeleteMember->Name = L"DeleteMember";
			this->DeleteMember->Size = System::Drawing::Size(150, 23);
			this->DeleteMember->TabIndex = 53;
			this->DeleteMember->Text = L"Eliminar miembro";
			this->DeleteMember->UseVisualStyleBackColor = true;
			this->DeleteMember->Click += gcnew System::EventHandler(this, &RegisterEventForm::DeleteMember_Click);
			// 
			// txtEventId
			// 
			this->txtEventId->Location = System::Drawing::Point(463, 270);
			this->txtEventId->Name = L"txtEventId";
			this->txtEventId->Size = System::Drawing::Size(45, 20);
			this->txtEventId->TabIndex = 54;
			// 
			// RegisterEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 312);
			this->Controls->Add(this->txtEventId);
			this->Controls->Add(this->DeleteMember);
			this->Controls->Add(this->btnFriends);
			this->Controls->Add(this->dvgMembers);
			this->Controls->Add(this->addFriends);
			this->Controls->Add(this->nudMinute);
			this->Controls->Add(this->nudHour);
			this->Controls->Add(this->dtpEventDate);
			this->Controls->Add(this->cmbRelevance);
			this->Controls->Add(this->btnAddEvent);
			this->Controls->Add(this->txtEventName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"RegisterEventForm";
			this->Text = L"Agregar evento";
			this->Load += gcnew System::EventHandler(this, &RegisterEventForm::RegisterEventForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgMembers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudMinute))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHour))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: 
	Void SetMember(String^ AsistanceUserName) {
		for (int  i = 0; i < dvgMembers->RowCount - 1; i++)
		{
			//lleno la tabla
			dvgMembers->Rows[i]->Cells[0]->Value = AsistanceUserName;
			//Le pongo a asistance su modo
			//Asistance->EventId = le creo un id;
			//Asistance->confirmation = 'R';//registrado osea por confirmar
		}

}
	Void SetUser(Cliente^ principalclient) {
		this->user = principalclient;
	}
	Void AddMembersToList(String^ p) {
		bool repeat= false;
		for (int i = 0; i < dvgMembers->RowCount-1; i++){
			if (p == dvgMembers->Rows[i]->Cells[0]->Value->ToString())
				repeat = true;
		}
		if (!repeat)
			dvgMembers->Rows->Add(gcnew array<String^> {
			p, "P"
		});
		else
			MessageBox::Show("El amigo seleccionado ya ha sido agregado");
		//"p" de por confirmar
		
		//refresco la lista de cosas
		//RefreshMembers();
	}
	Void FillCmbRelevance() {
		cmbRelevance->Items->Clear();
		List<String^>^ relevList = Controller::QueryAllRelevance();

		for (int i = 0; i < relevList->Count; i++) {
			cmbRelevance->Items->Add(relevList[i]);
		}
	}
	//public: Void refreshdgvMembers(){
//
//	}
private: System::Void addFriends_Click(System::Object^ sender, System::EventArgs^ e) {
	/*FriendsForm^ friendsF = gcnew FriendsForm(this);
	friendsF->ShowDialog();*/
	ChooseFriendForm^ ChooseFriend = gcnew ChooseFriendForm(this);
	ChooseFriend->SetMaker(user);
	ChooseFriend->Show();
}
private: System::Void RegisterEventForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Event^ newEvent = gcnew Event();
	FillCmbRelevance();

}
private: System::Void btnAddEvent_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DeleteMember_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dvgMembers->CurrentCell != nullptr &&
		dvgMembers->CurrentCell->Value != nullptr &&
		dvgMembers->CurrentCell->Value->ToString() != "") {

		int selectedrowindex = dvgMembers->SelectedCells[0]->RowIndex;
		dvgMembers->Rows->RemoveAt(selectedrowindex);
		
	}
	else
		MessageBox::Show("Debe seleccionar un amigo.");
}
};
}
