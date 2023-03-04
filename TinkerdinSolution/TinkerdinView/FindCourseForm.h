#pragma once
#include "ClientForm.h"
#include "Resource.h"
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
	using namespace TinkerdinView;
	using namespace TinkerdinPersistance;

	using namespace Threading;

	/// <summary>
	/// Resumen de FindCourseForm
	/// </summary>
	public ref class FindCourseForm : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ refFindCourseForm;
		property Cliente^ me;
		
	public:
		
		FindCourseForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//refFindCourseForm = Form;
		}
		/*
		FindCourseForm(Form^form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}
		*/

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
	private: System::Windows::Forms::TextBox^ txtFindCourseExFin;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textFindCourseExParc;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dgvCourse;
	private: System::Windows::Forms::Button^ btn_add_course;
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
			this->txtFindCourseExFin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textFindCourseExParc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvCourse = (gcnew System::Windows::Forms::DataGridView());
			this->btn_add_course = (gcnew System::Windows::Forms::Button());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// txtFindCourseName
			// 
			this->txtFindCourseName->Location = System::Drawing::Point(183, 144);
			this->txtFindCourseName->Margin = System::Windows::Forms::Padding(4);
			this->txtFindCourseName->Name = L"txtFindCourseName";
			this->txtFindCourseName->Size = System::Drawing::Size(145, 22);
			this->txtFindCourseName->TabIndex = 82;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 144);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 16);
			this->label6->TabIndex = 81;
			this->label6->Text = L"Nombre del curso:";
			// 
			// textFindCourseId
			// 
			this->textFindCourseId->Location = System::Drawing::Point(183, 81);
			this->textFindCourseId->Margin = System::Windows::Forms::Padding(4);
			this->textFindCourseId->Name = L"textFindCourseId";
			this->textFindCourseId->ReadOnly = true;
			this->textFindCourseId->Size = System::Drawing::Size(145, 22);
			this->textFindCourseId->TabIndex = 84;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 81);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 83;
			this->label1->Text = L"Id:";
			// 
			// txtFindCourseProfe
			// 
			this->txtFindCourseProfe->Location = System::Drawing::Point(183, 223);
			this->txtFindCourseProfe->Margin = System::Windows::Forms::Padding(4);
			this->txtFindCourseProfe->Name = L"txtFindCourseProfe";
			this->txtFindCourseProfe->Size = System::Drawing::Size(145, 22);
			this->txtFindCourseProfe->TabIndex = 86;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 223);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 85;
			this->label2->Text = L"Profesor:";
			// 
			// txtFindCourseType
			// 
			this->txtFindCourseType->Location = System::Drawing::Point(183, 283);
			this->txtFindCourseType->Margin = System::Windows::Forms::Padding(4);
			this->txtFindCourseType->Name = L"txtFindCourseType";
			this->txtFindCourseType->Size = System::Drawing::Size(145, 22);
			this->txtFindCourseType->TabIndex = 88;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 283);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 87;
			this->label3->Text = L"Tipo:";
			// 
			// txtFindCourseExFin
			// 
			this->txtFindCourseExFin->Location = System::Drawing::Point(183, 378);
			this->txtFindCourseExFin->Margin = System::Windows::Forms::Padding(4);
			this->txtFindCourseExFin->Name = L"txtFindCourseExFin";
			this->txtFindCourseExFin->Size = System::Drawing::Size(145, 22);
			this->txtFindCourseExFin->TabIndex = 90;
			this->txtFindCourseExFin->TextChanged += gcnew System::EventHandler(this, &FindCourseForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 378);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 16);
			this->label4->TabIndex = 89;
			this->label4->Text = L"Examen Final:";
			this->label4->Click += gcnew System::EventHandler(this, &FindCourseForm::label4_Click);
			// 
			// textFindCourseExParc
			// 
			this->textFindCourseExParc->Location = System::Drawing::Point(183, 332);
			this->textFindCourseExParc->Margin = System::Windows::Forms::Padding(4);
			this->textFindCourseExParc->Name = L"textFindCourseExParc";
			this->textFindCourseExParc->Size = System::Drawing::Size(145, 22);
			this->textFindCourseExParc->TabIndex = 92;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 332);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 16);
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
			this->dgvCourse->Location = System::Drawing::Point(375, 81);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(4);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(653, 400);
			this->dgvCourse->TabIndex = 93;
			this->dgvCourse->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FindCourseForm::dgvCourse_CellClick);
			// 
			// btn_add_course
			// 
			this->btn_add_course->Location = System::Drawing::Point(169, 433);
			this->btn_add_course->Margin = System::Windows::Forms::Padding(4);
			this->btn_add_course->Name = L"btn_add_course";
			this->btn_add_course->Size = System::Drawing::Size(160, 37);
			this->btn_add_course->TabIndex = 94;
			this->btn_add_course->Text = L"Agregar a mi lista";
			this->btn_add_course->UseVisualStyleBackColor = true;
			this->btn_add_course->Click += gcnew System::EventHandler(this, &FindCourseForm::button1_Click_2);
			// 
			// Username
			// 
			this->Username->HeaderText = L"Nombre";
			this->Username->MinimumWidth = 6;
			this->Username->Name = L"Username";
			this->Username->Width = 200;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Profesor";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 150;
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Tipo";
			this->Edad->MinimumWidth = 6;
			this->Edad->Name = L"Edad";
			this->Edad->Width = 125;
			// 
			// FindCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 569);
			this->Controls->Add(this->btn_add_course);
			this->Controls->Add(this->dgvCourse);
			this->Controls->Add(this->textFindCourseExParc);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtFindCourseExFin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtFindCourseType);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtFindCourseProfe);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textFindCourseId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtFindCourseName);
			this->Controls->Add(this->label6);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FindCourseForm";
			this->Text = L"Agregar cursos";
			this->Load += gcnew System::EventHandler(this, &FindCourseForm::FindCourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: void SetUser(Cliente^ c) {
	this->me = c;
}
public: Void RefreshCoursesDGV();

	  //Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void FindCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshCoursesDGV();

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvCourse_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	 
	   
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	int selectedRowIndex = dgvCourse->SelectedCells[0]->RowIndex;
	String^ new_course_id = textFindCourseId->Text;//dgvCourse->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
	//String^ new_course = textFindCourseId->Text;//dgvCourse->Rows[selectedRowIndex]->Cells[1]->Value->ToString();
	Course^ co = gcnew Course();
	co = Controller::QueryCourseById(new_course_id);
	//co = Persistance::QueryCourseById(new_course_id);
	List<String^>^ flist = gcnew List<String^>();
	List<String^>^ slist = gcnew List<String^>();
	if (co->StudentsList == nullptr) {
		//si no tiene la definicion de list se la creo 
		co->StudentsList = gcnew List<String^>();
		Controller::UpdateCourse(co);
		//Persistance::UpdateCourse(co);
	}
	slist = co->StudentsList;
	if (me->CourseList == nullptr) {
		//si no tiene la definicion de list se la creo 
		me->CourseList = gcnew List<String^>();
		slist->Add(me->Username);
		Controller::UpdateClient(me);//Deberia ser updateCourse?, Aunque la lista está en client
		RefreshCoursesDGV();
	}

	//si no tenia ese amigo registrado se lo añado
	flist = me->CourseList;
	if (!(flist->Contains(new_course_id))) {
		int elements = flist->Count;
		flist->Add(new_course_id);
		slist->Add(me->Username);
		me->CourseList = flist;

		Controller::UpdateClient(me);
		RefreshCoursesDGV();
	}
	else MessageBox::Show(" " + new_course_id + " ya te encuentras matriculados en el curso seleccionado. ");

}
};
}
