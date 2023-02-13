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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtCode;

	private: System::Windows::Forms::TextBox^ txtCellPhone;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::TextBox^ txtPass;





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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(139, 37);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Nombre de usuario";
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Location = System::Drawing::Point(139, 141);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(100, 21);
			this->cmbGender->TabIndex = 51;
			this->cmbGender->SelectedIndexChanged += gcnew System::EventHandler(this, &CRUDClientsForm::cmbGender_SelectedIndexChanged);
			// 
			// txtCicle
			// 
			this->txtCicle->Location = System::Drawing::Point(139, 254);
			this->txtCicle->Name = L"txtCicle";
			this->txtCicle->Size = System::Drawing::Size(100, 20);
			this->txtCicle->TabIndex = 50;
			// 
			// txtCarrer
			// 
			this->txtCarrer->Location = System::Drawing::Point(139, 219);
			this->txtCarrer->Name = L"txtCarrer";
			this->txtCarrer->Size = System::Drawing::Size(163, 20);
			this->txtCarrer->TabIndex = 49;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(139, 184);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(218, 20);
			this->txtEmail->TabIndex = 48;
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(139, 108);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(100, 20);
			this->txtAge->TabIndex = 47;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 46;
			this->label5->Text = L"Ciclo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Carrera:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Genero:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Edad:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(139, 73);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(218, 20);
			this->txtName->TabIndex = 41;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(38, 76);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 13);
			this->name->TabIndex = 40;
			this->name->Text = L"Nombre:";
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(451, 256);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(120, 23);
			this->btnSetImage->TabIndex = 55;
			this->btnSetImage->Text = L"Cambiar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(422, 37);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(180, 213);
			this->pbPhoto->TabIndex = 54;
			this->pbPhoto->TabStop = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(139, 483);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 56;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(303, 483);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
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
			this->dgvClients->Location = System::Drawing::Point(645, 37);
			this->dgvClients->Name = L"dgvClients";
			this->dgvClients->Size = System::Drawing::Size(244, 396);
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
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Codigo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Celular:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 364);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Status";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(36, 396);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 13);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Contrasena:";
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(139, 291);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(100, 20);
			this->txtCode->TabIndex = 63;
			// 
			// txtCellPhone
			// 
			this->txtCellPhone->Location = System::Drawing::Point(139, 329);
			this->txtCellPhone->Name = L"txtCellPhone";
			this->txtCellPhone->Size = System::Drawing::Size(100, 20);
			this->txtCellPhone->TabIndex = 64;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(139, 361);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(100, 20);
			this->txtStatus->TabIndex = 65;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(139, 393);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(100, 20);
			this->txtPass->TabIndex = 66;
			// 
			// CRUDClientsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(930, 539);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtCellPhone);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvClients);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
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
					});
				}
			}

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
					if (gender == "masculino") {
						a->Gender = 'M';
					}
					if (gender == "femenino") {
						a->Gender = 'F';
					}
					else {
						a->Gender = 'O';
					}
				}
				else a->Gender = 'O';
				a->Email = txtEmail->Text;
				a->Carrer = txtCarrer->Text;
				a->Cicle = Convert::ToInt32(txtCicle->Text);

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
		//cmbGender->
		for (int i = 0; i < cmbGender->Items->Count; i++) {
			if (cmbGender->Items[i]->ToString()->CompareTo(c->Gender) == 0) {
				cmbGender->SelectedIndex = i;
				break;
			}
		}


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
	}
	private: System::Void cmbGender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
