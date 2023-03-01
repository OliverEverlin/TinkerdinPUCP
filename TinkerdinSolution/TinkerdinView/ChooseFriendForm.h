#pragma once
//#include "Resource.h"
//#include "RegisterEventForm.h"

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
	/// Resumen de ChooseFriendForm
	/// </summary>
	public ref class ChooseFriendForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		static Cliente^ client;
		ChooseFriendForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ChooseFriendForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Button^ DeleteFriend;
	protected:

	private: System::Windows::Forms::Button^ AddtoEvent;
	private: System::Windows::Forms::DataGridView^ dgvFriends;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cicle;

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
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->DeleteFriend = (gcnew System::Windows::Forms::Button());
			this->AddtoEvent = (gcnew System::Windows::Forms::Button());
			this->dgvFriends = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cicle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFriends))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(428, 39);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(114, 138);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 7;
			this->pbPhoto->TabStop = false;
			// 
			// DeleteFriend
			// 
			this->DeleteFriend->Location = System::Drawing::Point(428, 224);
			this->DeleteFriend->Name = L"DeleteFriend";
			this->DeleteFriend->Size = System::Drawing::Size(112, 23);
			this->DeleteFriend->TabIndex = 6;
			this->DeleteFriend->Text = L"Eliminar amigo";
			this->DeleteFriend->UseVisualStyleBackColor = true;
			// 
			// AddtoEvent
			// 
			this->AddtoEvent->Location = System::Drawing::Point(428, 195);
			this->AddtoEvent->Name = L"AddtoEvent";
			this->AddtoEvent->Size = System::Drawing::Size(112, 23);
			this->AddtoEvent->TabIndex = 5;
			this->AddtoEvent->Text = L"Agregar a evento";
			this->AddtoEvent->UseVisualStyleBackColor = true;
			this->AddtoEvent->Click += gcnew System::EventHandler(this, &ChooseFriendForm::AddtoEvent_Click);
			// 
			// dgvFriends
			// 
			this->dgvFriends->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFriends->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Name, this->Carrer,
					this->Cicle
			});
			this->dgvFriends->Location = System::Drawing::Point(31, 39);
			this->dgvFriends->Name = L"dgvFriends";
			this->dgvFriends->Size = System::Drawing::Size(343, 223);
			this->dgvFriends->TabIndex = 4;
			this->dgvFriends->Click += gcnew System::EventHandler(this, &ChooseFriendForm::dgvFriends_Click);
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
			// ChooseFriendForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 298);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->DeleteFriend);
			this->Controls->Add(this->AddtoEvent);
			this->Controls->Add(this->dgvFriends);
			//this->Name = L"ChooseFriendForm";
			this->Text = L"Selecciona alguno de tus amigos";
			this->Load += gcnew System::EventHandler(this, &ChooseFriendForm::ChooseFriendForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFriends))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ChooseFriendForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshFriendList();
		DeleteFriend->Visible = false;
	}
	public: 
		void RefreshFriendList() {
			   List <String^>^ buddyList = gcnew List <String^>();
			   Cliente^ buddy = gcnew Cliente();
			   buddyList = client->FriendList;
			   for (int i = 0; i < buddyList->Count; i++) {
				   buddy = Controller::QueryClientByUsername(buddyList[i]);
				   dgvFriends->Rows->Add(gcnew array<String^>{
					   buddy->Username,
						   "" + buddy->Age,
						   "" + buddy->Cicle
				   });

			   }
		   }
	public: 
	Void SetMaker(Cliente^ maker) {
		this->client = maker;
	}
	//Void RefreshFriendList()
	

private: System::Void dgvFriends_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dgvFriends_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddtoEvent_Click(System::Object^ sender, System::EventArgs^ e);
};
}
