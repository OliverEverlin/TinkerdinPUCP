#pragma once
#include "pch.h"

#include "PlaceForm.h"

//#include "TinkerdinControler.h"
using namespace TinkerdinControler;
using namespace TinkerdinModel;
using namespace TinkerdinView;
using namespace TinkerdinPersistance;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace TinkerdinView {

	

	/// <summary>
	/// Resumen de ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	public:
		ReportForm(void)
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
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;




	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lugar:";
			this->label1->Click += gcnew System::EventHandler(this, &ReportForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Disponibilidad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cantidad de tomacorrientes:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(215, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ReportForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(215, 99);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ReportForm::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReportForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ReportForm::textBox1_TextChanged);
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 466);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ReportForm";
			this->Text = L"ReportForm";
			this->Load += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void ReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
	List<Place^>^ placeList;
	placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");
	for (int i = 0; i < placeList->Count; i++)
		comboBox1->Items->Add(placeList[i]->Location);
	//Debería aparecer solo 3. **Cómo asignamos el valor tomacorrientes al dificio seleccionado anteriormente**?
	/*for (int j = 0; j < placeList->Count; j++)
		comboBox2->Items->Add(placeList[j]->Availability);*/
	//Load de cantidad de tomacorrientes:
	comboBox2->Items->Add("Vacio");
	comboBox2->Items->Add("Medio");
	comboBox2->Items->Add("Casi lleno");
	comboBox2->Items->Add("Lleno");
	comboBox2->Items->Add("AFHS");

}
	   //Botón -> MODIFICAR <-
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	Place^ place = gcnew Place();
	List<Place^>^ placeList;
	placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");
	//Necesito un QueryproductbyName para saber la Id del Local creado
	int Id_ = Convert::ToInt32(Controller::QueryPlaceByName(comboBox1->Text));

	place->Participants = placeList[Id_]->Participants;
	place->TypePlace = placeList[Id_]->TypePlace;
	place->Location = comboBox1->Text;
	place->Id =Id_ ;
	place->Availability = comboBox2->Text;
	place->PowerOutlet = Convert::ToInt32(textBox1->Text);
	//place->Location = txtPlaceLocation->Text;
	Controller::UpdatePlace(place);
	//CleanControls();
	//ShowProducts();
	MessageBox::Show("Gracias por tu reporte cara de mango");
	this->Close();


}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}//TextBox Tomacorrientes
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
};
}
