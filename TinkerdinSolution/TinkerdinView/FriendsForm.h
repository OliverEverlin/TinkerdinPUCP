#pragma once
#include "Resource.h"
#include "EventForm.h"

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
		property char UseType;
		property Form^ RefReportForm;
		FriendsForm(void)
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
	private: System::Windows::Forms::PictureBox^ pbPhoto;


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
			this->dgvFriends = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cicle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AddtoEvent = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFriends))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
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
			this->dgvFriends->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FriendsForm::dgvFriends_CellClick);
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
			this->AddtoEvent->Click += gcnew System::EventHandler(this, &FriendsForm::AddtoEvent_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(409, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Eliminar amigo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FriendsForm::button1_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(409, 30);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(114, 138);
			this->pbPhoto->TabIndex = 3;
			this->pbPhoto->TabStop = false;
			// 
			// FriendsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 278);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AddtoEvent);
			this->Controls->Add(this->dgvFriends);
			//this->Name =  L"FriendsForm";
			this->Text = L"Lista de amigos ";
			this->Load += gcnew System::EventHandler(this, &FriendsForm::FriendsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFriends))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FriendsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshFriendList();
	}
	public: void RefreshFriendList() {
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
	public: Void SetClient(Cliente^ c) {
		this->client = c;
	}
private: System::Void dgvFriends_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvFriends->CurrentCell != nullptr &&
			dgvFriends->CurrentCell->Value != nullptr &&
			dgvFriends->CurrentCell->Value->ToString() != "") {

			int selectedrowindex = dgvFriends->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvFriends->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			Cliente^ c = Controller::QueryClientByUsername(a);
			//MessageBox::Show(customer->ToString()); //Polimorfismo
			//if (customer != nullptr && customer->GetType() == Natural::typeid) 
			if (c != nullptr) {
				if (c->Photo != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(c->Photo);
					pbPhoto->Image = Image::FromStream(ms);
				}
				else {
					pbPhoto->Image = nullptr;
					pbPhoto->Invalidate();
				}
				
			}
		}
	}
private: System::Void AddtoEvent_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (UseType == 'E') {

		this->Close();
	}*/


	/*if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ productId = dgvProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Product^ p = Controller::QueryProductById(Int32::Parse(productId));
		if (refForm->GetType() == SaleForm::typeid)
			((SaleForm^)refForm)->AddProductToSaleDetails(p);
	}
	this->Close();*/

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
