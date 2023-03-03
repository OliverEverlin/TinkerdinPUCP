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
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtReporter;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridView^ dgvReports;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reporter;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;







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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtReporter = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dgvReports = (gcnew System::Windows::Forms::DataGridView());
			this->Reporter = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReports))->BeginInit();
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(572, 36);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(132, 22);
			this->txtUsername->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(435, 36);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 16);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Nombre de usuario";
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Location = System::Drawing::Point(572, 164);
			this->cmbGender->Margin = System::Windows::Forms::Padding(4);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(132, 24);
			this->cmbGender->TabIndex = 51;
			this->cmbGender->SelectedIndexChanged += gcnew System::EventHandler(this, &CRUDClientsForm::cmbGender_SelectedIndexChanged);
			// 
			// txtCicle
			// 
			this->txtCicle->Location = System::Drawing::Point(572, 303);
			this->txtCicle->Margin = System::Windows::Forms::Padding(4);
			this->txtCicle->Name = L"txtCicle";
			this->txtCicle->Size = System::Drawing::Size(132, 22);
			this->txtCicle->TabIndex = 50;
			// 
			// txtCarrer
			// 
			this->txtCarrer->Location = System::Drawing::Point(572, 260);
			this->txtCarrer->Margin = System::Windows::Forms::Padding(4);
			this->txtCarrer->Name = L"txtCarrer";
			this->txtCarrer->Size = System::Drawing::Size(216, 22);
			this->txtCarrer->TabIndex = 49;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(572, 217);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(289, 22);
			this->txtEmail->TabIndex = 48;
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(572, 123);
			this->txtAge->Margin = System::Windows::Forms::Padding(4);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(132, 22);
			this->txtAge->TabIndex = 47;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(437, 306);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 46;
			this->label5->Text = L"Ciclo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(437, 260);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Carrera:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(437, 220);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 167);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Genero:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(437, 127);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 16);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Edad:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(572, 80);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(289, 22);
			this->txtName->TabIndex = 41;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(437, 84);
			this->name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(59, 16);
			this->name->TabIndex = 40;
			this->name->Text = L"Nombre:";
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(916, 294);
			this->btnSetImage->Margin = System::Windows::Forms::Padding(4);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(160, 28);
			this->btnSetImage->TabIndex = 55;
			this->btnSetImage->Text = L"Cambiar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnSetImage_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(877, 25);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(4);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(240, 262);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 54;
			this->pbPhoto->TabStop = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(4, 4);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(177, 28);
			this->btnUpdate->TabIndex = 56;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(4, 40);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(177, 28);
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
			this->dgvClients->Location = System::Drawing::Point(51, 36);
			this->dgvClients->Margin = System::Windows::Forms::Padding(4);
			this->dgvClients->Name = L"dgvClients";
			this->dgvClients->RowHeadersWidth = 51;
			this->dgvClients->Size = System::Drawing::Size(327, 393);
			this->dgvClients->TabIndex = 58;
			this->dgvClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUDClientsForm::dgvClientsCellClick);
			this->dgvClients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUDClientsForm::dgvClientsCellContentClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"User ";
			this->Username->MinimumWidth = 6;
			this->Username->Name = L"Username";
			this->Username->Width = 125;
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Age";
			this->Edad->MinimumWidth = 6;
			this->Edad->Name = L"Edad";
			this->Edad->ReadOnly = true;
			this->Edad->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(435, 357);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 16);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Codigo";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(435, 399);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 16);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Celular:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(435, 438);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Status";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(435, 478);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 16);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Contrasena:";
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(572, 348);
			this->txtCode->Margin = System::Windows::Forms::Padding(4);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(132, 22);
			this->txtCode->TabIndex = 63;
			// 
			// txtCellPhone
			// 
			this->txtCellPhone->Location = System::Drawing::Point(572, 395);
			this->txtCellPhone->Margin = System::Windows::Forms::Padding(4);
			this->txtCellPhone->Name = L"txtCellPhone";
			this->txtCellPhone->Size = System::Drawing::Size(132, 22);
			this->txtCellPhone->TabIndex = 64;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(572, 434);
			this->txtStatus->Margin = System::Windows::Forms::Padding(4);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(132, 22);
			this->txtStatus->TabIndex = 65;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(572, 474);
			this->txtPass->Margin = System::Windows::Forms::Padding(4);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(132, 22);
			this->txtPass->TabIndex = 66;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(4, 112);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(177, 28);
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
			this->flowLayoutPanel1->Location = System::Drawing::Point(911, 356);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(207, 180);
			this->flowLayoutPanel1->TabIndex = 68;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CRUDClientsForm::flowLayoutPanel1_Paint);
			// 
			// btnNew
			// 
			this->btnNew->Location = System::Drawing::Point(4, 76);
			this->btnNew->Margin = System::Windows::Forms::Padding(4);
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(177, 28);
			this->btnNew->TabIndex = 68;
			this->btnNew->Text = L"Nuevo";
			this->btnNew->UseVisualStyleBackColor = true;
			this->btnNew->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnNew_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(4, 148);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(177, 28);
			this->btnCancel->TabIndex = 69;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &CRUDClientsForm::btnCancel_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(435, 515);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 16);
			this->label13->TabIndex = 81;
			this->label13->Text = L"Reportes:";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(572, 571);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(370, 80);
			this->txtDescription->TabIndex = 80;
			// 
			// txtReporter
			// 
			this->txtReporter->Location = System::Drawing::Point(572, 538);
			this->txtReporter->Name = L"txtReporter";
			this->txtReporter->Size = System::Drawing::Size(166, 22);
			this->txtReporter->TabIndex = 79;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(455, 571);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 16);
			this->label12->TabIndex = 78;
			this->label12->Text = L"Descripción:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(453, 544);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 16);
			this->label11->TabIndex = 77;
			this->label11->Text = L"Reportador:";
			// 
			// dgvReports
			// 
			this->dgvReports->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvReports->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Reporter,
					this->Description
			});
			this->dgvReports->Location = System::Drawing::Point(12, 455);
			this->dgvReports->Name = L"dgvReports";
			this->dgvReports->RowHeadersWidth = 51;
			this->dgvReports->RowTemplate->Height = 24;
			this->dgvReports->Size = System::Drawing::Size(399, 196);
			this->dgvReports->TabIndex = 76;
			this->dgvReports->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUDClientsForm::dgvReports_CellClick);
			// 
			// Reporter
			// 
			this->Reporter->HeaderText = L"Reportador";
			this->Reporter->MinimumWidth = 6;
			this->Reporter->Name = L"Reporter";
			this->Reporter->Width = 125;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Descripción";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->Width = 220;
			// 
			// CRUDClientsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1269, 687);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtReporter);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dgvReports);
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CRUDClientsForm";
			this->Text = L"Revisión de usuarios";
			this->Load += gcnew System::EventHandler(this, &CRUDClientsForm::CRUDClientsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReports))->EndInit();
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
			txtReporter->Clear();
			txtDescription->Clear();
		}
		void CleanReports() {
			txtReporter->Clear();
			txtDescription->Clear();
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
			MessageBox::Show("Debe seleccionar un cliente.");
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
				List<String^>^ pataList = gcnew List<String^>();
				
				//a->FriendList =  pataList;

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
		CleanReports();

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
		//Reportes
		List<Report^>^ reportsList = Controller::QueryAllReportByReportedUser(clientUsername);
		dgvReports->Rows->Clear();
		for (int i = 0; i < reportsList->Count; i++) {
			dgvReports->Rows->Add(gcnew array<String^>{
				reportsList[i]->reporter,
					reportsList[i]->Description,
			});
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

	btnAdd->Visible = false;
	btnCancel->Visible = false;
}
private: System::Void dgvReports_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvReports->SelectedCells[0]->RowIndex;
	btnAdd->Enabled = false;

	String^ reporterUsername = dgvReports->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
	Report^ c = Controller::QueryReportByUsername(reporterUsername);
	txtReporter->Text = c->reporter;
	txtDescription->Text = c->Description;
	
}
};
}
