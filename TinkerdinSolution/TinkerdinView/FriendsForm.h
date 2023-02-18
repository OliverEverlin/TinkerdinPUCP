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
	using namespace Threading;

	/// <summary>
	/// Resumen de FriendsForm
	/// </summary>
	public ref class FriendsForm : public System::Windows::Forms::Form
	{

	public:
		static Cliente^ client;
		FriendsForm(void)
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
		~FriendsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvFriends;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cicle;
	private: System::Windows::Forms::Button^ AddtoEvent;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvFriends = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cicle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AddtoEvent = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFriends))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvFriends
			// 
			this->dgvFriends->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFriends->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Name, this->Carrer,
					this->Cicle
			});
			this->dgvFriends->Location = System::Drawing::Point(12, 30);
			this->dgvFriends->Name = L"dgvFriends";
			this->dgvFriends->Size = System::Drawing::Size(343, 223);
			this->dgvFriends->TabIndex = 0;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			// 
			// Carrer
			// 
			this->Carrer->HeaderText = L"Carrera";
			this->Carrer->Name = L"Carrer";
			// 
			// Cicle
			// 
			this->Cicle->HeaderText = L"Ciclo";
			this->Cicle->Name = L"Cicle";
			// 
			// AddtoEvent
			// 
			this->AddtoEvent->Location = System::Drawing::Point(409, 186);
			this->AddtoEvent->Name = L"AddtoEvent";
			this->AddtoEvent->Size = System::Drawing::Size(112, 23);
			this->AddtoEvent->TabIndex = 1;
			this->AddtoEvent->Text = L"Agregar a evento";
			this->AddtoEvent->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(409, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Eliminar amigo";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(409, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(114, 138);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// FriendsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 278);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AddtoEvent);
			this->Controls->Add(this->dgvFriends);
			//this->Name = L"FriendsForm";
			this->Text = L"Lista de amigos ";
			this->Load += gcnew System::EventHandler(this, &FriendsForm::FriendsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFriends))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FriendsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

	public: Void SetClient(Cliente^ c) {
		this->client = c;
		List <String^>^ buddyList = gcnew List <String^>();
		Cliente^ buddy =gcnew Cliente();
		for (int i = 0; i < buddyList->Count; i++){
			buddy = Controller::QueryClientByUsername(buddyList[i]);
			dgvFriends->Rows->Add(gcnew array<String^>{
				buddy->Username,
					"" + buddy->Age,
					"" + buddy->Cicle
			});

		}
	}
	};
}
