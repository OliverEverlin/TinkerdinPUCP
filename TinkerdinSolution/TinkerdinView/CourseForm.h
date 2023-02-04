#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CourseForm
	/// </summary>
	public ref class CourseForm : public System::Windows::Forms::Form
	{
	public:
		CourseForm(void)
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
		~CourseForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::ComboBox^ cmbGroceryType;


	private: System::Windows::Forms::TextBox^ txtGroceryFeatures;
	private: System::Windows::Forms::TextBox^ txtGroceryBrand;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::TextBox^ txtGroceryName;
	private: System::Windows::Forms::TextBox^ txtGroceryId;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label15;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dgvGroceries;





	private: System::Windows::Forms::Button^ btnDeleteGrocery;
	private: System::Windows::Forms::Button^ btnUpdateGrocery;
	private: System::Windows::Forms::Button^ btnAddGrocery;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductIdGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductNameGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPriceMinGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPriceMajGrid;

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
			this->cmbGroceryType = (gcnew System::Windows::Forms::ComboBox());
			this->txtGroceryFeatures = (gcnew System::Windows::Forms::TextBox());
			this->txtGroceryBrand = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtGroceryName = (gcnew System::Windows::Forms::TextBox());
			this->txtGroceryId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dgvGroceries = (gcnew System::Windows::Forms::DataGridView());
			this->btnDeleteGrocery = (gcnew System::Windows::Forms::Button());
			this->btnUpdateGrocery = (gcnew System::Windows::Forms::Button());
			this->btnAddGrocery = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->ProductIdGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductNameGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPriceMinGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPriceMajGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGroceries))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbGroceryType
			// 
			this->cmbGroceryType->FormattingEnabled = true;
			this->cmbGroceryType->Location = System::Drawing::Point(137, 99);
			this->cmbGroceryType->Margin = System::Windows::Forms::Padding(4);
			this->cmbGroceryType->Name = L"cmbGroceryType";
			this->cmbGroceryType->Size = System::Drawing::Size(373, 24);
			this->cmbGroceryType->TabIndex = 47;
			// 
			// txtGroceryFeatures
			// 
			this->txtGroceryFeatures->Location = System::Drawing::Point(137, 194);
			this->txtGroceryFeatures->Margin = System::Windows::Forms::Padding(4);
			this->txtGroceryFeatures->Multiline = true;
			this->txtGroceryFeatures->Name = L"txtGroceryFeatures";
			this->txtGroceryFeatures->Size = System::Drawing::Size(373, 43);
			this->txtGroceryFeatures->TabIndex = 44;
			// 
			// txtGroceryBrand
			// 
			this->txtGroceryBrand->Location = System::Drawing::Point(137, 143);
			this->txtGroceryBrand->Margin = System::Windows::Forms::Padding(4);
			this->txtGroceryBrand->Name = L"txtGroceryBrand";
			this->txtGroceryBrand->Size = System::Drawing::Size(373, 22);
			this->txtGroceryBrand->TabIndex = 43;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 191);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 16);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Horario:";
			this->label8->Click += gcnew System::EventHandler(this, &CourseForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 143);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 16);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Profesor:";
			// 
			// txtGroceryName
			// 
			this->txtGroceryName->Location = System::Drawing::Point(138, 57);
			this->txtGroceryName->Margin = System::Windows::Forms::Padding(4);
			this->txtGroceryName->Name = L"txtGroceryName";
			this->txtGroceryName->Size = System::Drawing::Size(372, 22);
			this->txtGroceryName->TabIndex = 36;
			// 
			// txtGroceryId
			// 
			this->txtGroceryId->Location = System::Drawing::Point(138, 27);
			this->txtGroceryId->Margin = System::Windows::Forms::Padding(4);
			this->txtGroceryId->Name = L"txtGroceryId";
			this->txtGroceryId->Size = System::Drawing::Size(372, 22);
			this->txtGroceryId->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 57);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Id Curso:";
			this->label1->Click += gcnew System::EventHandler(this, &CourseForm::label1_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(37, 101);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 16);
			this->label15->TabIndex = 57;
			this->label15->Text = L"Tipo:";
			this->label15->Click += gcnew System::EventHandler(this, &CourseForm::label15_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 265);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 16);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Días de examenes:";
			// 
			// dgvGroceries
			// 
			this->dgvGroceries->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvGroceries->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ProductIdGrid,
					this->ProductNameGrid, this->ProductPriceMinGrid, this->ProductPriceMajGrid
			});
			this->dgvGroceries->Location = System::Drawing::Point(40, 419);
			this->dgvGroceries->Margin = System::Windows::Forms::Padding(4);
			this->dgvGroceries->Name = L"dgvGroceries";
			this->dgvGroceries->RowHeadersWidth = 51;
			this->dgvGroceries->Size = System::Drawing::Size(596, 162);
			this->dgvGroceries->TabIndex = 64;
			this->dgvGroceries->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CourseForm::dgvGroceries_CellContentClick);
			// 
			// btnDeleteGrocery
			// 
			this->btnDeleteGrocery->Location = System::Drawing::Point(439, 364);
			this->btnDeleteGrocery->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteGrocery->Name = L"btnDeleteGrocery";
			this->btnDeleteGrocery->Size = System::Drawing::Size(197, 28);
			this->btnDeleteGrocery->TabIndex = 63;
			this->btnDeleteGrocery->Text = L"Eliminar";
			this->btnDeleteGrocery->UseVisualStyleBackColor = true;
			// 
			// btnUpdateGrocery
			// 
			this->btnUpdateGrocery->Location = System::Drawing::Point(235, 364);
			this->btnUpdateGrocery->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdateGrocery->Name = L"btnUpdateGrocery";
			this->btnUpdateGrocery->Size = System::Drawing::Size(196, 28);
			this->btnUpdateGrocery->TabIndex = 62;
			this->btnUpdateGrocery->Text = L"Modificar";
			this->btnUpdateGrocery->UseVisualStyleBackColor = true;
			// 
			// btnAddGrocery
			// 
			this->btnAddGrocery->Location = System::Drawing::Point(30, 364);
			this->btnAddGrocery->Margin = System::Windows::Forms::Padding(4);
			this->btnAddGrocery->Name = L"btnAddGrocery";
			this->btnAddGrocery->Size = System::Drawing::Size(196, 28);
			this->btnAddGrocery->TabIndex = 61;
			this->btnAddGrocery->Text = L"Agregar";
			this->btnAddGrocery->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(138, 308);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 65;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(64, 308);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 66;
			this->label4->Text = L"Parcial:";
			this->label4->Click += gcnew System::EventHandler(this, &CourseForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(399, 308);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 68;
			this->label5->Text = L"Final:";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(457, 308);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 67;
			// 
			// ProductIdGrid
			// 
			this->ProductIdGrid->HeaderText = L"Id";
			this->ProductIdGrid->MinimumWidth = 6;
			this->ProductIdGrid->Name = L"ProductIdGrid";
			this->ProductIdGrid->Width = 50;
			// 
			// ProductNameGrid
			// 
			this->ProductNameGrid->HeaderText = L"Nombre";
			this->ProductNameGrid->MinimumWidth = 6;
			this->ProductNameGrid->Name = L"ProductNameGrid";
			this->ProductNameGrid->Width = 250;
			// 
			// ProductPriceMinGrid
			// 
			this->ProductPriceMinGrid->HeaderText = L"Tipo";
			this->ProductPriceMinGrid->MinimumWidth = 6;
			this->ProductPriceMinGrid->Name = L"ProductPriceMinGrid";
			this->ProductPriceMinGrid->Width = 80;
			// 
			// ProductPriceMajGrid
			// 
			this->ProductPriceMajGrid->HeaderText = L"Profesor";
			this->ProductPriceMajGrid->MinimumWidth = 6;
			this->ProductPriceMajGrid->Name = L"ProductPriceMajGrid";
			this->ProductPriceMajGrid->Width = 80;
			// 
			// CourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 646);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->dgvGroceries);
			this->Controls->Add(this->btnDeleteGrocery);
			this->Controls->Add(this->btnUpdateGrocery);
			this->Controls->Add(this->btnAddGrocery);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->cmbGroceryType);
			this->Controls->Add(this->txtGroceryFeatures);
			this->Controls->Add(this->txtGroceryBrand);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtGroceryName);
			this->Controls->Add(this->txtGroceryId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CourseForm";
			this->Text = L"CourseForm";
			this->Load += gcnew System::EventHandler(this, &CourseForm::CourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGroceries))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvGroceries_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
