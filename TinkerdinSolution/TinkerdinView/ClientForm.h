#pragma once

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
	/// <summary>
	/// Resumen de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::TextBox^ txtName;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtAge;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtCarrer;
	private: System::Windows::Forms::TextBox^ txtCicle;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::ComboBox^ cmbGender;
	private: System::Windows::Forms::PictureBox^ pbPhoto;









	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Button^ btnSetImage;
	private: System::Windows::Forms::DataGridView^ dgvClients;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cicle;
	private: System::Windows::Forms::Button^ btnAdd;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->name = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtCarrer = (gcnew System::Windows::Forms::TextBox());
			this->txtCicle = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->dgvClients = (gcnew System::Windows::Forms::DataGridView());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cicle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(56, 89);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 13);
			this->name->TabIndex = 0;
			this->name->Text = L"Nombre:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(157, 86);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(218, 20);
			this->txtName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Edad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Genero:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Email:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Carrera:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ciclo";
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(157, 121);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(100, 20);
			this->txtAge->TabIndex = 7;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(157, 197);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(100, 20);
			this->txtEmail->TabIndex = 9;
			// 
			// txtCarrer
			// 
			this->txtCarrer->Location = System::Drawing::Point(157, 232);
			this->txtCarrer->Name = L"txtCarrer";
			this->txtCarrer->Size = System::Drawing::Size(100, 20);
			this->txtCarrer->TabIndex = 10;
			// 
			// txtCicle
			// 
			this->txtCicle->Location = System::Drawing::Point(157, 267);
			this->txtCicle->Name = L"txtCicle";
			this->txtCicle->Size = System::Drawing::Size(100, 20);
			this->txtCicle->TabIndex = 11;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(119, 338);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 12;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ClientForm::btnUpdate_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(625, 481);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 13;
			this->btnReturn->Text = L"Cancelar";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &ClientForm::btnReturn_Click);
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Location = System::Drawing::Point(157, 154);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(100, 21);
			this->cmbGender->TabIndex = 14;
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(497, 39);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(180, 213);
			this->pbPhoto->TabIndex = 15;
			this->pbPhoto->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Nombre de usuario";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(159, 44);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 17;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(526, 258);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(120, 23);
			this->btnSetImage->TabIndex = 18;
			this->btnSetImage->Text = L"Cambiar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &ClientForm::button3_Click);
			// 
			// dgvClients
			// 
			this->dgvClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Username,
					this->Age, this->Cicle
			});
			this->dgvClients->Location = System::Drawing::Point(42, 388);
			this->dgvClients->Name = L"dgvClients";
			this->dgvClients->Size = System::Drawing::Size(344, 116);
			this->dgvClients->TabIndex = 19;
			this->dgvClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientForm::dgvClients_CellClick);
			this->dgvClients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientForm::dgvClients_CellContentClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"Username";
			this->Username->Name = L"Username";
			// 
			// Age
			// 
			this->Age->HeaderText = L"Age";
			this->Age->Name = L"Age";
			// 
			// Cicle
			// 
			this->Cicle->HeaderText = L"Cicle";
			this->Cicle->Name = L"Cicle";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(355, 338);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 20;
			this->btnAdd->Text = L"Registrar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ClientForm::btnAdd_Click);
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 526);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvClients);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->cmbGender);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnUpdate);
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
			this->Name = L"ClientForm";
			this->Text = L"Registro de nuevo usuario";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void CleanControls() {
	txtUsername->Clear();
	txtName->Clear();
	txtAge->Clear();
	txtEmail->Clear();
	txtCarrer->Clear();
	txtCicle->Clear();
	pbPhoto->Image = nullptr;
}
void ShowClients() {
	List<Cliente^>^ myClientList = Controller::QueryAllClients();

	dgvClients->Rows->Clear();
	for (int i = 0; i < myClientList->Count; i++) {
		dgvClients->Rows->Add(gcnew array<String^>{
			myClientList[i]->Username,
				"" + myClientList[i]->Age,
				"" + myClientList[i]->Cicle,
		});
	}

}
private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowClients();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}

}


private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente^ a = gcnew Cliente();
	a->Username = txtUsername->Text;
	a->Name = txtName->Text;
	a->Age = Convert::ToInt32(txtAge->Text);
	//a->Gender= txt
	a->Email = txtEmail->Text;
	a->Carrer = txtCarrer->Text;
	a->Cicle = Convert::ToInt32(txtCicle->Text);


	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		a->Photo = ms->ToArray();
	}

	Controller::UpdateClient(a);
	ShowClients();

}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente^ a = gcnew Cliente();
	a->Username = txtUsername->Text;
	a->Name = txtName->Text;
	a->Age = Convert::ToInt32(txtAge->Text);
	//a->Gender= txt
	a->Email = txtEmail->Text;
	a->Carrer = txtCarrer->Text;
	a->Cicle = Convert::ToInt32(txtCicle->Text);
	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		a->Photo = ms->ToArray();
	}

	Controller::AddClient(a);

	CleanControls();
	ShowClients();
}
private: System::Void dgvClients_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e) {
	//exit(); 
}
private: System::Void dgvClients_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	Cliente^ client = Controller::QueryClientById(txtUsername->Text);

}
};
}



