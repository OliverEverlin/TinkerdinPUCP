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
	/// Resumen de PlaceForm
	/// </summary>
	public ref class PlaceForm : public System::Windows::Forms::Form
	{
	public:
		PlaceForm(void)
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
		~PlaceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnPlaceAdd;

	private: System::Windows::Forms::Button^ btnPlaceUpdate;

	private: System::Windows::Forms::Button^ btnPlaceDelete;

	private: System::Windows::Forms::TextBox^ txtPlaceId;
	private: System::Windows::Forms::TextBox^ txtPlaceAvailability;
	private: System::Windows::Forms::TextBox^ txtPlacePowerOutlet;







	private: System::Windows::Forms::TextBox^ txtPlaceParticipants;
	private: System::Windows::Forms::TextBox^ txtPlaceLocation;




	private: System::Windows::Forms::TextBox^ txtPlaceTypePlace;
	private: System::Windows::Forms::DataGridView^ dgvPlace;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ placeId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ placeLocation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ placeAvailability;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ placePowerOutlet;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnPlaceAdd = (gcnew System::Windows::Forms::Button());
			this->btnPlaceUpdate = (gcnew System::Windows::Forms::Button());
			this->btnPlaceDelete = (gcnew System::Windows::Forms::Button());
			this->txtPlaceId = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaceAvailability = (gcnew System::Windows::Forms::TextBox());
			this->txtPlacePowerOutlet = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaceParticipants = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaceLocation = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaceTypePlace = (gcnew System::Windows::Forms::TextBox());
			this->dgvPlace = (gcnew System::Windows::Forms::DataGridView());
			this->placeId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->placeLocation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->placeAvailability = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->placePowerOutlet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlace))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 33);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			this->label1->Click += gcnew System::EventHandler(this, &PlaceForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 68);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Disponibilidad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 101);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Participantes:";
			this->label3->Click += gcnew System::EventHandler(this, &PlaceForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 133);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tomacorriente:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 165);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo de lugar:";
			this->label5->Click += gcnew System::EventHandler(this, &PlaceForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(52, 200);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Locación:";
			// 
			// btnPlaceAdd
			// 
			this->btnPlaceAdd->Location = System::Drawing::Point(310, 49);
			this->btnPlaceAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnPlaceAdd->Name = L"btnPlaceAdd";
			this->btnPlaceAdd->Size = System::Drawing::Size(80, 19);
			this->btnPlaceAdd->TabIndex = 6;
			this->btnPlaceAdd->Text = L"Agregar";
			this->btnPlaceAdd->UseVisualStyleBackColor = true;
			this->btnPlaceAdd->Click += gcnew System::EventHandler(this, &PlaceForm::btnPlaceAdd_Click);
			// 
			// btnPlaceUpdate
			// 
			this->btnPlaceUpdate->Location = System::Drawing::Point(310, 95);
			this->btnPlaceUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnPlaceUpdate->Name = L"btnPlaceUpdate";
			this->btnPlaceUpdate->Size = System::Drawing::Size(83, 19);
			this->btnPlaceUpdate->TabIndex = 7;
			this->btnPlaceUpdate->Text = L"Modificar";
			this->btnPlaceUpdate->UseVisualStyleBackColor = true;
			this->btnPlaceUpdate->Click += gcnew System::EventHandler(this, &PlaceForm::btnPlaceUpdate_Click);
			// 
			// btnPlaceDelete
			// 
			this->btnPlaceDelete->Location = System::Drawing::Point(310, 151);
			this->btnPlaceDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnPlaceDelete->Name = L"btnPlaceDelete";
			this->btnPlaceDelete->Size = System::Drawing::Size(89, 19);
			this->btnPlaceDelete->TabIndex = 8;
			this->btnPlaceDelete->Text = L"Eliminar";
			this->btnPlaceDelete->UseVisualStyleBackColor = true;
			this->btnPlaceDelete->Click += gcnew System::EventHandler(this, &PlaceForm::btnPlaceDelete_Click);
			// 
			// txtPlaceId
			// 
			this->txtPlaceId->Location = System::Drawing::Point(144, 31);
			this->txtPlaceId->Margin = System::Windows::Forms::Padding(2);
			this->txtPlaceId->Name = L"txtPlaceId";
			this->txtPlaceId->Size = System::Drawing::Size(76, 20);
			this->txtPlaceId->TabIndex = 9;
			this->txtPlaceId->TextChanged += gcnew System::EventHandler(this, &PlaceForm::textBox1_TextChanged);
			// 
			// txtPlaceAvailability
			// 
			this->txtPlaceAvailability->Location = System::Drawing::Point(144, 66);
			this->txtPlaceAvailability->Margin = System::Windows::Forms::Padding(2);
			this->txtPlaceAvailability->Name = L"txtPlaceAvailability";
			this->txtPlaceAvailability->Size = System::Drawing::Size(76, 20);
			this->txtPlaceAvailability->TabIndex = 10;
			// 
			// txtPlacePowerOutlet
			// 
			this->txtPlacePowerOutlet->Location = System::Drawing::Point(144, 133);
			this->txtPlacePowerOutlet->Margin = System::Windows::Forms::Padding(2);
			this->txtPlacePowerOutlet->Name = L"txtPlacePowerOutlet";
			this->txtPlacePowerOutlet->Size = System::Drawing::Size(76, 20);
			this->txtPlacePowerOutlet->TabIndex = 12;
			// 
			// txtPlaceParticipants
			// 
			this->txtPlaceParticipants->Location = System::Drawing::Point(144, 98);
			this->txtPlaceParticipants->Margin = System::Windows::Forms::Padding(2);
			this->txtPlaceParticipants->Name = L"txtPlaceParticipants";
			this->txtPlaceParticipants->Size = System::Drawing::Size(76, 20);
			this->txtPlaceParticipants->TabIndex = 11;
			// 
			// txtPlaceLocation
			// 
			this->txtPlaceLocation->Location = System::Drawing::Point(144, 197);
			this->txtPlaceLocation->Margin = System::Windows::Forms::Padding(2);
			this->txtPlaceLocation->Name = L"txtPlaceLocation";
			this->txtPlaceLocation->Size = System::Drawing::Size(76, 20);
			this->txtPlaceLocation->TabIndex = 14;
			// 
			// txtPlaceTypePlace
			// 
			this->txtPlaceTypePlace->Location = System::Drawing::Point(144, 162);
			this->txtPlaceTypePlace->Margin = System::Windows::Forms::Padding(2);
			this->txtPlaceTypePlace->Name = L"txtPlaceTypePlace";
			this->txtPlaceTypePlace->Size = System::Drawing::Size(76, 20);
			this->txtPlaceTypePlace->TabIndex = 13;
			// 
			// dgvPlace
			// 
			this->dgvPlace->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlace->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->placeId, this->placeLocation,
					this->placeAvailability, this->placePowerOutlet
			});
			this->dgvPlace->Location = System::Drawing::Point(9, 249);
			this->dgvPlace->Margin = System::Windows::Forms::Padding(2);
			this->dgvPlace->Name = L"dgvPlace";
			this->dgvPlace->RowHeadersWidth = 51;
			this->dgvPlace->RowTemplate->Height = 24;
			this->dgvPlace->Size = System::Drawing::Size(412, 196);
			this->dgvPlace->TabIndex = 15;
			this->dgvPlace->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PlaceForm::dgvPlace_CellClick);
			this->dgvPlace->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PlaceForm::dgvPlace_CellContentClick);
			// 
			// placeId
			// 
			this->placeId->HeaderText = L"Id";
			this->placeId->MinimumWidth = 6;
			this->placeId->Name = L"placeId";
			this->placeId->Width = 50;
			// 
			// placeLocation
			// 
			this->placeLocation->HeaderText = L"Locación";
			this->placeLocation->MinimumWidth = 6;
			this->placeLocation->Name = L"placeLocation";
			this->placeLocation->Width = 250;
			// 
			// placeAvailability
			// 
			this->placeAvailability->HeaderText = L"Disponible";
			this->placeAvailability->MinimumWidth = 6;
			this->placeAvailability->Name = L"placeAvailability";
			this->placeAvailability->Width = 80;
			// 
			// placePowerOutlet
			// 
			this->placePowerOutlet->HeaderText = L"Tomacorrientes";
			this->placePowerOutlet->MinimumWidth = 6;
			this->placePowerOutlet->Name = L"placePowerOutlet";
			this->placePowerOutlet->Width = 125;
			// 
			// PlaceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 454);
			this->Controls->Add(this->dgvPlace);
			this->Controls->Add(this->txtPlaceLocation);
			this->Controls->Add(this->txtPlaceTypePlace);
			this->Controls->Add(this->txtPlacePowerOutlet);
			this->Controls->Add(this->txtPlaceParticipants);
			this->Controls->Add(this->txtPlaceAvailability);
			this->Controls->Add(this->txtPlaceId);
			this->Controls->Add(this->btnPlaceDelete);
			this->Controls->Add(this->btnPlaceUpdate);
			this->Controls->Add(this->btnPlaceAdd);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PlaceForm";
			this->Text = L"PlaceForm";
			this->Load += gcnew System::EventHandler(this, &PlaceForm::PlaceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlace))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPlaceUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	Place^ place = gcnew Place();
	place->Id = Convert::ToInt32(txtPlaceId->Text);
	place->Availability = txtPlaceAvailability->Text;
	place->Participants = Convert::ToInt32( txtPlaceParticipants->Text);
	place->PowerOutlet = Convert::ToInt32(txtPlacePowerOutlet->Text);
	place->TypePlace = txtPlaceTypePlace->Text;
	place->Location = txtPlaceLocation->Text;
	Controller::UpdatePlace(place);
	CleanControls();
	ShowProducts();

}
private: System::Void btnPlaceAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	Place^ place = gcnew Place();
	place->Id = Convert::ToInt32(txtPlaceId->Text);
	place->Availability = txtPlaceAvailability->Text;
	place->Participants = Convert::ToInt32(txtPlaceParticipants->Text);
	place->PowerOutlet = Convert::ToInt32(txtPlacePowerOutlet->Text);
	//place->TypePlace =txtPlaceTypePlace->Text;
	place->Location = txtPlaceLocation->Text;

	Controller::AddPlace(place);

	CleanControls();
	ShowProducts();
}

	   void ShowProducts() {
		   List<Place^>^ placeList = Controller::QueryAllPlace();

		   dgvPlace->Rows->Clear();
		   for (int i = 0; i < placeList->Count; i++) {
			   dgvPlace->Rows->Add(gcnew array<String^>{
				   "" + placeList[i]->Id,
					   placeList[i]->Location,
					   "" + placeList[i]->Availability,
					   "" + placeList[i]->PowerOutlet,
					   
			   });
		   }
	   }

	   void CleanControls() {
		   txtPlaceId->Clear();
		   txtPlaceAvailability->Clear();
		   txtPlaceParticipants->Clear();
		   txtPlacePowerOutlet->Clear();
		   txtPlaceTypePlace->Clear();
		   txtPlaceLocation->Clear();
		   
	   }




private: System::Void btnPlaceDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtPlaceId->Text->Trim() == "") {
		MessageBox::Show("Debe seleccionar un lugar");
		return;
	}
	Controller::DeletePlace(Convert::ToInt32(txtPlaceId->Text->Trim()));
	CleanControls();
	ShowProducts();

}
private: System::Void dgvPlace_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int selectedRowIndex = dgvPlace->SelectedCells[0]->RowIndex;
	int placeId = Convert::ToInt32(dgvPlace->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Place^ p = Controller::QueryPlaceById(placeId);
	//txtPlaceId->Text = "" + p->getId();
	txtPlaceId->Text = "" + p->Id;//para convertirlo a string
	txtPlaceAvailability->Text = "" + p->Availability;
	txtPlaceParticipants->Text = "" + p->Participants;
	txtPlacePowerOutlet->Text = "" + p->PowerOutlet;
	txtPlaceTypePlace->Text =  p->TypePlace;
	txtPlaceLocation->Text =  p->Location;
	/*if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}*/


}
private: System::Void dgvPlace_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void PlaceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowProducts();


}
};
};
//}
