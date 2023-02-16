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
	/// Resumen de CRUDClientsForm
	/// </summary>
	public ref class CRUDClientsForm : public System::Windows::Forms::Form
	{
	public:
		CRUDClientsForm(void)
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
		~CRUDClientsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUsername;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbGender;

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
	private: System::Windows::Forms::Button^ btnSetImage;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvClients;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtCode;

	private: System::Windows::Forms::TextBox^ txtCellPhone;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Button^ btnAdd;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btnNew;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::Button^ btnCancel;







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
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
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
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvClients = (gcnew System::Windows::Forms::DataGridView());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->txtCellPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnNew = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(429, 29);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(326, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Nombre de usuario";
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Location = System::Drawing::Point(429, 133);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(100, 21);
			this->cmbGender->TabIndex = 51;
			this->cmbGender->SelectedIndexChanged += gcnew System::EventHandler(this, &CRUDClientsForm::cmbGender_SelectedIndexChanged);
			// 
			// txtCicle
			// 
			this->txtCicle->Location = System::Drawing::Point(429, 246);
			this->txtCicle->Name = L"txtCicle";
			this->txtCicle->Size = System::Drawing::Size(100, 20);
			this->txtCicle->TabIndex = 50;
			// 
			// txtCarrer
			// 
			this->txtCarrer->Location = System::Drawing::Point(429, 211);
			this->txtCarrer->Name = L"txtCarrer";
			this->txtCarrer->Size = System::Drawing::Size(163, 20);
			this->txtCarrer->TabIndex = 49;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(429, 176);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(218, 20);
			this->txtEmail->TabIndex = 48;
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(429, 100);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(100, 20);
			this->txtAge->TabIndex = 47;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(328, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 46;
			this->label5->Text = L"Ciclo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(328, 211);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Carrera:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(328, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(328, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Genero:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(328, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Edad:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(429, 65);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(218, 20);
			this->txtName->TabIndex = 41;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(328, 68);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 13);
			this->name->TabIndex = 40;
			this->name->Text = L"Nombre:";
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(687, 239);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(120, 23);
			this->btnSetImage->TabIndex = 55;
			this->btnSetImage->Text = L"Cambiar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnSetImage_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(658, 20);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(180, 213);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 54;
			this->pbPhoto->TabStop = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(3, 3);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(133, 23);
			this->btnUpdate->TabIndex = 56;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(3, 32);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(133, 23);
			this->btnDelete->TabIndex = 57;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnDelete_Click);
			// 
			// dgvClients
			// 
			this->dgvClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Username,
					this->Edad
			});
			this->dgvClients->Location = System::Drawing::Point(38, 29);
			this->dgvClients->Name = L"dgvClients";
			this->dgvClients->Size = System::Drawing::Size(245, 396);
			this->dgvClients->TabIndex = 58;
			this->dgvClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUDClientsForm::dgvClientsCellClick);
			this->dgvClients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUDClientsForm::dgvClientsCellContentClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"User ";
			this->Username->Name = L"Username";
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Age";
			this->Edad->Name = L"Edad";
			this->Edad->ReadOnly = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(326, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Codigo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(326, 324);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Celular:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(326, 356);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Status";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(326, 388);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 13);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Contrasena:";
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(429, 283);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(100, 20);
			this->txtCode->TabIndex = 63;
			// 
			// txtCellPhone
			// 
			this->txtCellPhone->Location = System::Drawing::Point(429, 321);
			this->txtCellPhone->Name = L"txtCellPhone";
			this->txtCellPhone->Size = System::Drawing::Size(100, 20);
			this->txtCellPhone->TabIndex = 64;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(429, 353);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(100, 20);
			this->txtStatus->TabIndex = 65;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(429, 385);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(100, 20);
			this->txtPass->TabIndex = 66;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(3, 90);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(133, 23);
			this->btnAdd->TabIndex = 67;
			this->btnAdd->Text = L"Registrar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnAdd_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->btnUpdate);
			this->flowLayoutPanel1->Controls->Add(this->btnDelete);
			this->flowLayoutPanel1->Controls->Add(this->btnNew);
			this->flowLayoutPanel1->Controls->Add(this->btnAdd);
			this->flowLayoutPanel1->Controls->Add(this->btnCancel);
			this->flowLayoutPanel1->Location = System::Drawing::Point(683, 289);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(155, 146);
			this->flowLayoutPanel1->TabIndex = 68;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CRUDClientsForm::flowLayoutPanel1_Paint);
			// 
			// btnNew
			// 
			this->btnNew->Location = System::Drawing::Point(3, 61);
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(133, 23);
			this->btnNew->TabIndex = 68;
			this->btnNew->Text = L"Nuevo";
			this->btnNew->UseVisualStyleBackColor = true;
			this->btnNew->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnNew_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(3, 119);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(133, 23);
			this->btnCancel->TabIndex = 69;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnCancel_Click);
			// 
			// CRUDClientsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 449);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtCellPhone);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvClients);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cmbGender);
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
			this->Name = L"CRUDClientsForm";
			this->Text = L"Checking de usuarios";
			this->Load += gcnew System::EventHandler(this, &CRUDClientsForm::CRUDClientsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowClients() {
			List<Cliente^>^ myClientList = Controller::QueryAllClients();
			dgvClients->Rows->Clear();
			if (myClientList != nullptr) {
				for (int i = 0; i < myClientList->Count; i++) {
					dgvClients->Rows->Add(gcnew array<String^>{
						myClientList[i]->Username,
							"" + myClientList[i]->Age,
						""+(myClientList[i]->Gender),
					});
				}
			}
			//Convert::ToString;

		}
		void CleanControls() {
			txtUsername->Clear();
			txtName->Clear();
			txtAge->Clear();
			txtEmail->Clear();
			txtCarrer->Clear();
			txtCicle->Clear();
			txtCode->Clear();
			txtCellPhone->Clear();
			txtStatus->Clear();
			txtPass->Clear();
			pbPhoto->Image = nullptr;
		}
		void FillCmbGender() {
			cmbGender->Items->Clear();
			List<String^>^ genderList = Controller::QueryAllGender();

			for (int i = 0; i < genderList->Count; i++)
			{
				cmbGender->Items->Add(genderList[i]);
			}
		}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtUsername->Text->Trim()->Equals(""))
			MessageBox::Show("Debe seleccionar un curso.");
		else
			Controller::DeleteClient(txtUsername->Text);
		ShowClients();
		CleanControls();
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvClients->CurrentCell != nullptr &&
			dgvClients->CurrentCell->Value != nullptr &&
			dgvClients->CurrentCell->Value->ToString() != "" &&
			!txtUsername->Text->Trim()->Equals("")) {
			//Debe esta el username lleno

			Cliente^ a = gcnew Cliente();
			String^ gender;
			try{
				if (txtUsername->Text->Trim() == "") {
					MessageBox::Show("El nombre de usuario no debe estar vacío.");
					return;
				}
				a->Username = txtUsername->Text;
				a->Name = txtName->Text;
				a->Age = Convert::ToInt32(txtAge->Text);
				if (cmbGender->SelectedText->Trim()->Equals("")){
					gender = cmbGender->SelectedItem->ToString();
					if (gender == "masculino") a->Gender = 'M';
					if (gender == "femenino") a->Gender = 'F';
					if (gender == "otros") a->Gender = 'O';
				}
				//else a->Gender = 'O';
				a->Email = txtEmail->Text;
				a->Carrer = txtCarrer->Text;
				a->Cicle = Convert::ToInt32(txtCicle->Text);
				a->code = Convert::ToInt32(txtCode->Text);
				a->Phone = Convert::ToInt32(txtCellPhone->Text);
				a->Status = txtStatus->Text;
				a->Password = txtPass->Text;
				if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					a->Photo = ms->ToArray();
				}

				Controller::UpdateClient(a);
				CleanControls();
				ShowClients();


			}
			catch (Exception^ ex){
				MessageBox::Show(ex->ToString(), "No se guardó el tipo por error en los datos.");
				return;
			}
			
		}
		
	}
	private: System::Void dgvClientsCellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvClients->SelectedCells[0]->RowIndex;
		btnAdd->Enabled=false;

		//int clientUsername = Convert::ToInt32(dgvClients->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		String^ clientUsername = dgvClients->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
		Cliente^ c = Controller::QueryClientByUsername(clientUsername);
		txtUsername->Text = c->Username;
		txtName->Text = c->Name;
		txtAge->Text = "" + c->Age;
		txtEmail->Text = c->Email;
		txtCarrer->Text = c->Carrer;
		txtCicle->Text = "" + c->Cicle;
		txtCode->Text = "" + c->code;
		txtCellPhone->Text = "" + c->code;
		txtStatus->Text = c->Status;
		txtPass->Text = c->Password;
		//Conversión de tipos
		if (c->Gender == 'M')	cmbGender->SelectedIndex = 0;
		if (c->Gender == 'F')	cmbGender->SelectedIndex = 1;
		if (c->Gender == 'O')	cmbGender->SelectedIndex = 2;

		if (c->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(c->Photo);
			pbPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
		}
	}
	private: System::Void dgvClientsCellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void CRUDClientsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCmbGender();
		ShowClients();
		btnAdd->Visible = false;
		btnCancel->Visible = false;
	}
	private: System::Void cmbGender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnSetImage_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente^ a = gcnew Cliente();
	String^ gender;
	try {
		//condition to don't repite username
		if (Controller::QueryAdminByUsername(txtUsername->Text) != nullptr &&
			Controller::QueryClientByUsername(txtUsername->Text) != nullptr) {
			MessageBox::Show("El nombre de usuario ya existe");
			return;
		}
		if (txtUsername->Text->Trim() == "") {
			MessageBox::Show("El nombre del usuario no debe estar vacío.");
			return;
		}
		if (txtPass->Text->Trim() == "") {
			MessageBox::Show("El password del usuario no debe estar vacío.");
			return;
		}
		if (cmbGender->SelectedIndex < 0) {
			MessageBox::Show("El genero debe estar selecionado");
			return;
		}

		a->Username = txtUsername->Text;
		a->Name = txtName->Text;
		a->Age = Convert::ToInt32(txtAge->Text);
		//conversion a string
		gender = cmbGender->SelectedItem->ToString();
		if (gender == "masculino") a->Gender = 'M';
		if (gender == "femenino") a->Gender = 'F';
		if (gender == "otros") a->Gender = 'O';
		a->Email = txtEmail->Text;
		a->Carrer = txtCarrer->Text;
		a->Cicle = Convert::ToInt32(txtCicle->Text);
		a->Password = txtPass->Text;
		a->code = 0;
		a->Phone = 0;
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			a->Photo = ms->ToArray();
		}

		Controller::AddClient(a);

		CleanControls();
		ShowClients();
		btnDelete->Visible = true;
		btnUpdate->Visible = true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
		return;
	}
	MessageBox::Show("Cliente registrado de manera exitosa");
	this->Close();
}


private: System::Void btnNew_Click(System::Object^ sender, System::EventArgs^ e) {
	/*btnDelete->Enabled = false;
	btnUpdate->Enabled = false;*/
	btnDelete->Visible = false;
	btnUpdate->Visible = false;
	btnAdd->Visible = true;
	btnCancel->Visible = true;
	txtUsername->Text = "";
	txtName->Text = "";
	txtAge->Text = "";
	txtEmail->Text = "";
	txtCarrer->Text = "";
	txtCicle->Text = "";
	txtCode->Text = "";
	txtCellPhone->Text = "";
	txtStatus->Text = "";
	txtPass->Text = "";
	pbPhoto->Image = nullptr;
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	


}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	btnDelete->Visible = true;
	btnUpdate->Visible = true;
	btnAdd->Visible = false;
	btnDelete->Visible = false;
	btnUpdate->Visible = false;
	btnAdd->Visible = true;
	btnCancel->Visible = true;
	txtUsername->Text = "";
	txtName->Text = "";
	txtAge->Text = "";
	txtEmail->Text = "";
	txtCarrer->Text = "";
	txtCicle->Text = "";
	txtCode->Text = "";
	txtCellPhone->Text = "";
	txtStatus->Text = "";
	txtPass->Text = "";
	pbPhoto->Image = nullptr;
	btnCancel->Visible = true;
}
};
}
