#pragma once

#include "Resource.h"

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
	using namespace Threading;

	/// <summary>
	/// Resumen de FindFriendsForm
	/// </summary>
	public ref class FindFriendsForm : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ RefReportForm;
		property Cliente^ me;

	public:
		FindFriendsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			UseType = 'S';
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FindFriendsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtCellPhone;
	protected:
	private: System::Windows::Forms::TextBox^ txtCode;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dgvClients;





	private: System::Windows::Forms::PictureBox^ pbPhoto;



	private: System::Windows::Forms::TextBox^ txtCicle;
	private: System::Windows::Forms::TextBox^ txtCarrer;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtAge;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ name;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::Button^ btnAddFriend;
	private: System::Windows::Forms::Button^ btnChose;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ txtGender;



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
			this->txtCellPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvClients = (gcnew System::Windows::Forms::DataGridView());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtCicle = (gcnew System::Windows::Forms::TextBox());
			this->txtCarrer = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnAddFriend = (gcnew System::Windows::Forms::Button());
			this->btnChose = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// txtCellPhone
			// 
			this->txtCellPhone->Location = System::Drawing::Point(140, 320);
			this->txtCellPhone->Name = L"txtCellPhone";
			this->txtCellPhone->ReadOnly = true;
			this->txtCellPhone->Size = System::Drawing::Size(100, 20);
			this->txtCellPhone->TabIndex = 91;
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(140, 282);
			this->txtCode->Name = L"txtCode";
			this->txtCode->ReadOnly = true;
			this->txtCode->Size = System::Drawing::Size(100, 20);
			this->txtCode->TabIndex = 90;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 323);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 87;
			this->label8->Text = L"Celular:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 86;
			this->label7->Text = L"Codigo";
			// 
			// dgvClients
			// 
			this->dgvClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Username,
					this->Nombre, this->Edad
			});
			this->dgvClients->Location = System::Drawing::Point(648, 67);
			this->dgvClients->Name = L"dgvClients";
			this->dgvClients->Size = System::Drawing::Size(345, 325);
			this->dgvClients->TabIndex = 85;
			this->dgvClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FindFriendsForm::dgvClients_CellClick);
			this->dgvClients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FindFriendsForm::dgvClients_CellContentClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"User ";
			this->Username->Name = L"Username";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Age";
			this->Edad->Name = L"Edad";
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(423, 67);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(180, 213);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 81;
			this->pbPhoto->TabStop = false;
			// 
			// txtCicle
			// 
			this->txtCicle->Location = System::Drawing::Point(140, 245);
			this->txtCicle->Name = L"txtCicle";
			this->txtCicle->ReadOnly = true;
			this->txtCicle->Size = System::Drawing::Size(100, 20);
			this->txtCicle->TabIndex = 77;
			// 
			// txtCarrer
			// 
			this->txtCarrer->Location = System::Drawing::Point(140, 210);
			this->txtCarrer->Name = L"txtCarrer";
			this->txtCarrer->ReadOnly = true;
			this->txtCarrer->Size = System::Drawing::Size(163, 20);
			this->txtCarrer->TabIndex = 76;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(140, 175);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->ReadOnly = true;
			this->txtEmail->Size = System::Drawing::Size(218, 20);
			this->txtEmail->TabIndex = 75;
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(140, 99);
			this->txtAge->Name = L"txtAge";
			this->txtAge->ReadOnly = true;
			this->txtAge->Size = System::Drawing::Size(100, 20);
			this->txtAge->TabIndex = 74;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Ciclo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 72;
			this->label1->Text = L"Carrera:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 71;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 70;
			this->label3->Text = L"Genero:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 69;
			this->label2->Text = L"Edad:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(140, 64);
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(218, 20);
			this->txtName->TabIndex = 68;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(39, 67);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 13);
			this->name->TabIndex = 67;
			this->name->Text = L"Nombre:";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(856, 26);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(123, 25);
			this->btnSearch->TabIndex = 95;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &FindFriendsForm::btnSearch_Click);
			// 
			// btnAddFriend
			// 
			this->btnAddFriend->Location = System::Drawing::Point(423, 317);
			this->btnAddFriend->Name = L"btnAddFriend";
			this->btnAddFriend->Size = System::Drawing::Size(180, 24);
			this->btnAddFriend->TabIndex = 96;
			this->btnAddFriend->Text = L"Agregar a lista de amigos";
			this->btnAddFriend->UseVisualStyleBackColor = true;
			this->btnAddFriend->Click += gcnew System::EventHandler(this, &FindFriendsForm::btnAddFriend_Click);
			// 
			// btnChose
			// 
			this->btnChose->Location = System::Drawing::Point(423, 357);
			this->btnChose->Name = L"btnChose";
			this->btnChose->Size = System::Drawing::Size(180, 29);
			this->btnChose->TabIndex = 97;
			this->btnChose->Text = L"Escoger";
			this->btnChose->UseVisualStyleBackColor = true;
			this->btnChose->Click += gcnew System::EventHandler(this, &FindFriendsForm::btnChose_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(648, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 20);
			this->textBox1->TabIndex = 98;
			// 
			// txtGender
			// 
			this->txtGender->Location = System::Drawing::Point(140, 135);
			this->txtGender->Name = L"txtGender";
			this->txtGender->ReadOnly = true;
			this->txtGender->Size = System::Drawing::Size(100, 20);
			this->txtGender->TabIndex = 99;
			// 
			// FindFriendsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1015, 473);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnChose);
			this->Controls->Add(this->btnAddFriend);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtCellPhone);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvClients);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtCicle);
			this->Controls->Add(this->txtCarrer);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtAge);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->name);
			this->Name = L"FindFriendsForm";
			this->Text = L"Buscar usuarios";
			this->Load += gcnew System::EventHandler(this, &FindFriendsForm::FindFriendsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void FindFriendsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshClientsDGV();
	if (UseType == 'R') {
		btnSearch->Visible = false;
		btnAddFriend->Visible = false;
		btnChose->Visible = true;
	}
	else {
		btnSearch->Visible = true;
		btnAddFriend->Visible = true;
		btnChose->Visible = false;

		//txtCicle->
		/*txtCarrer->Visible = false;
		txtCode->Enabled = false;
		txtEmail->Enabled = false;
		txtCellPhone->Enabled = false;*/

	}
}
public: Void RefreshClientsDGV();
public: void SetUser(Cliente^ c) {
	this->me = c;
}
private: System::Void dgvClients_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void dgvClients_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);



private: System::Void btnAddFriend_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedRowIndex = dgvClients->SelectedCells[0]->RowIndex;
	String^ usern= dgvClients->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
	List<String^>^ flist = gcnew List<String^>();
	if (me->FriendList == nullptr) {
		//si no tiene la definicion de list se la creo 
		me->FriendList = gcnew List<String^>();
		Controller::UpdateClient(me);
		RefreshClientsDGV();
	}
	//si no tenia ese amigo registrado se lo añado
	flist = me->FriendList;
	if (!(flist->Contains(usern))) {
		int elements = flist->Count;
		flist->Add(usern);
		me->FriendList = flist;
		Controller::UpdateClient(me);
		RefreshClientsDGV();
	}
	else MessageBox::Show("Ese ya es tu pana we");


}

private: System::Void btnChose_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
