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
	/// Resumen de FindCourseForm
	/// </summary>
	public ref class FindCourseForm : public System::Windows::Forms::Form
	{
	public:
		FindCourseForm(void)
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
		~FindCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtFindCourseName;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textFindCourseId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtFindCourseProfe;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFindCourseType;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textFindCourseExParc;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dgvCourse;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;

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
			this->txtFindCourseName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textFindCourseId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtFindCourseProfe = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFindCourseType = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textFindCourseExParc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvCourse = (gcnew System::Windows::Forms::DataGridView());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// txtFindCourseName
			// 
			this->txtFindCourseName->Location = System::Drawing::Point(137, 117);
			this->txtFindCourseName->Name = L"txtFindCourseName";
			this->txtFindCourseName->Size = System::Drawing::Size(110, 20);
			this->txtFindCourseName->TabIndex = 82;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 81;
			this->label6->Text = L"Nombre del curso:";
			// 
			// textFindCourseId
			// 
			this->textFindCourseId->Location = System::Drawing::Point(137, 66);
			this->textFindCourseId->Name = L"textFindCourseId";
			this->textFindCourseId->Size = System::Drawing::Size(110, 20);
			this->textFindCourseId->TabIndex = 84;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 83;
			this->label1->Text = L"Id:";
			// 
			// txtFindCourseProfe
			// 
			this->txtFindCourseProfe->Location = System::Drawing::Point(137, 181);
			this->txtFindCourseProfe->Name = L"txtFindCourseProfe";
			this->txtFindCourseProfe->Size = System::Drawing::Size(110, 20);
			this->txtFindCourseProfe->TabIndex = 86;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 85;
			this->label2->Text = L"Profesor:";
			// 
			// txtFindCourseType
			// 
			this->txtFindCourseType->Location = System::Drawing::Point(137, 230);
			this->txtFindCourseType->Name = L"txtFindCourseType";
			this->txtFindCourseType->Size = System::Drawing::Size(110, 20);
			this->txtFindCourseType->TabIndex = 88;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 87;
			this->label3->Text = L"Tipo:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 307);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 90;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FindCourseForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 307);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 89;
			this->label4->Text = L"Examen Final:";
			this->label4->Click += gcnew System::EventHandler(this, &FindCourseForm::label4_Click);
			// 
			// textFindCourseExParc
			// 
			this->textFindCourseExParc->Location = System::Drawing::Point(137, 270);
			this->textFindCourseExParc->Name = L"textFindCourseExParc";
			this->textFindCourseExParc->Size = System::Drawing::Size(110, 20);
			this->textFindCourseExParc->TabIndex = 92;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 91;
			this->label5->Text = L"Examen Parcial:";
			// 
			// dgvCourse
			// 
			this->dgvCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Username, this->Nombre,
					this->Edad
			});
			this->dgvCourse->Location = System::Drawing::Point(281, 66);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->Size = System::Drawing::Size(490, 325);
			this->dgvCourse->TabIndex = 93;
			this->dgvCourse->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FindCourseForm::dgvCourse_CellClick);
			// 
			// Username
			// 
			this->Username->HeaderText = L"Nombre";
			this->Username->Name = L"Username";
			this->Username->Width = 200;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Profesor";
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 150;
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Tipo";
			this->Edad->Name = L"Edad";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 30);
			this->button1->TabIndex = 94;
			this->button1->Text = L"Agregar a mi lista";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FindCourseForm::button1_Click);
			// 
			// FindCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 474);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgvCourse);
			this->Controls->Add(this->textFindCourseExParc);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtFindCourseType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtFindCourseProfe);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textFindCourseId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtFindCourseName);
			this->Controls->Add(this->label6);
			this->Name = L"FindCourseForm";
			this->Text = L"FindCourseForm";
			this->Load += gcnew System::EventHandler(this, &FindCourseForm::FindCourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: Void RefreshCoursesDGV();

	private: System::Void FindCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshCoursesDGV();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvCourse_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvCourse->SelectedCells[0]->RowIndex;
	if (e->RowIndex < 0)return;//Para que no retorne error ULTIMATE No sirve xd
	String^ courseId = dgvCourse->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
	Course^ p;
	p= Controller::QueryCourseById(courseId);
	//txtPlaceId->Text = "" + p->getId();
	textFindCourseId->Text = "" + p->Id;//para convertirlo a string
	txtFindCourseName->Text = "" + p->Name;
	txtFindCourseProfe->Text = "" + p->Professor;
	txtFindCourseType->Text = "" + p->Type;
	//textFindCourseExParc->Text = "" + p->;
	//textBox1->Text = "" + p->Type;
	//LO DE ARRIBA DEBO CREARLE ATRIBUTO? 


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Agregar CURSO a la lista del cliente



}
};
}
