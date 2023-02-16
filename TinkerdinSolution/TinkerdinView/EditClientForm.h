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

	/// <summary>
	/// Resumen de EditClientForm
	/// </summary>
	public ref class EditClientForm : public System::Windows::Forms::Form
	{
	public:
		EditClientForm(void)
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
		~EditClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUsername;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::ComponentModel::IContainer^ components;


	protected:








	protected:

	protected:








	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(136, 29);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Nombre de usuario";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(134, 139);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 37;
			// 
			// txtCicle
			// 
			this->txtCicle->Location = System::Drawing::Point(134, 252);
			this->txtCicle->Name = L"txtCicle";
			this->txtCicle->Size = System::Drawing::Size(100, 20);
			this->txtCicle->TabIndex = 36;
			// 
			// txtCarrer
			// 
			this->txtCarrer->Location = System::Drawing::Point(134, 217);
			this->txtCarrer->Name = L"txtCarrer";
			this->txtCarrer->Size = System::Drawing::Size(100, 20);
			this->txtCarrer->TabIndex = 35;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(134, 182);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(100, 20);
			this->txtEmail->TabIndex = 34;
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(134, 106);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(100, 20);
			this->txtAge->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Ciclo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 217);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Carrera:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Genero:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Edad:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(134, 71);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(218, 20);
			this->txtName->TabIndex = 27;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(33, 74);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 13);
			this->name->TabIndex = 26;
			this->name->Text = L"Nombre:";
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(433, 248);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(120, 23);
			this->btnSetImage->TabIndex = 41;
			this->btnSetImage->Text = L"Cambiar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(404, 29);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(180, 213);
			this->pbPhoto->TabIndex = 40;
			this->pbPhoto->TabStop = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(134, 346);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 42;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &EditClientForm::btnUpdate_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(374, 346);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 43;
			this->btnReturn->Text = L"Cancelar";
			this->btnReturn->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(260, 253);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(62, 20);
			this->numericUpDown1->TabIndex = 92;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(260, 106);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 93;
			// 
			// EditClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 413);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
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
			this->Name = L"EditClientForm";
			this->Text = L"Actualización de usuario";
			this->Load += gcnew System::EventHandler(this, &EditClientForm::EditClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//cargo los datos a las text box
		Cliente^ a = gcnew Cliente();
		//tengo que conseguir el id del cliente al que me refiero

		//a = QueryClientById(clientId);
		a->Username = txtUsername->Text;
		a->Name = txtName->Text;
		a->Age = Convert::ToInt32(txtAge->Text);
		//a->Gender= txt
		a->Email = txtEmail->Text;
		a->Carrer = txtCarrer->Text;
		a->Cicle = Convert::ToInt32(txtCicle->Text);
	
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
	//ShowClients();

}
};
}
