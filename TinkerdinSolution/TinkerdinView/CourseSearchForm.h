#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TinkerdinControler;
	using namespace TinkerdinView;

	using namespace TinkerdinModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de CourseSearchForm
	/// </summary>
	public ref class CourseSearchForm : public System::Windows::Forms::Form
	{
	public:
		Form^ refCform;//variable de instancia
	public:
		CourseSearchForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refCform = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CourseSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvCourses;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfessorCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseType;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->dgvCourses = (gcnew System::Windows::Forms::DataGridView());
			this->IdCourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfessorCourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourses))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCourses
			// 
			this->dgvCourses->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dgvCourses->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dgvCourses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdCourse,
					this->CourseName, this->ProfessorCourse, this->CourseType
			});
			this->dgvCourses->Location = System::Drawing::Point(9, 163);
			this->dgvCourses->Margin = System::Windows::Forms::Padding(4);
			this->dgvCourses->Name = L"dgvCourses";
			this->dgvCourses->RowHeadersWidth = 51;
			this->dgvCourses->Size = System::Drawing::Size(497, 185);
			this->dgvCourses->TabIndex = 13;
			this->dgvCourses->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CourseSearchForm::dgvCourse_CellClick);
			// 
			// IdCourse
			// 
			this->IdCourse->HeaderText = L"Id";
			this->IdCourse->MinimumWidth = 6;
			this->IdCourse->Name = L"IdCourse";
			this->IdCourse->Width = 47;
			// 
			// CourseName
			// 
			this->CourseName->HeaderText = L"Nombre del curso";
			this->CourseName->MinimumWidth = 6;
			this->CourseName->Name = L"CourseName";
			this->CourseName->Width = 101;
			// 
			// ProfessorCourse
			// 
			this->ProfessorCourse->HeaderText = L"Profesor";
			this->ProfessorCourse->MinimumWidth = 6;
			this->ProfessorCourse->Name = L"ProfessorCourse";
			this->ProfessorCourse->Width = 87;
			// 
			// CourseType
			// 
			this->CourseType->HeaderText = L"Tipo";
			this->CourseType->MinimumWidth = 6;
			this->CourseType->Name = L"CourseType";
			this->CourseType->Width = 64;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(316, 123);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(128, 28);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(97, 123);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(129, 28);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &CourseSearchForm::btnSearch_Click);
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(165, 78);
			this->txtNameDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(340, 22);
			this->txtNameDescription->TabIndex = 10;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(165, 46);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(132, 22);
			this->txtId->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 82);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nombre/Descripción:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Id:";
			// 
			// CourseSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 401);
			this->Controls->Add(this->dgvCourses);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CourseSearchForm";
			this->Text = L"CourseSearchForm";
			this->Load += gcnew System::EventHandler(this, &CourseSearchForm::CourseSearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			Course^ p = Controller::QueryCourseById(txtId->Text->Trim());
			//Se borran los datos del grid.
			dgvCourses->Rows->Clear();
			dgvCourses->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					p->Professor,
					p->Type
			});
		}
		else {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Course^>^ courseList = Controller::QueryCourseByName(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvCourses->Rows->Clear();
			for (int i = 0; i < courseList->Count; i++) {
				dgvCourses->Rows->Add(gcnew array<String^> {
					"" + courseList[i]->Id,
						courseList[i]->Name,
						courseList[i]->Professor,
						courseList[i]->Type
				});
			}
		}

	}
private: System::Void dgvCourse_CellClick(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e);

void ShowCourses() {
	List<Course^>^ myCourseList = Controller::QueryAllCourse();

	dgvCourses->Rows->Clear();
	for (int i = 0; i < myCourseList->Count; i++) {
		dgvCourses->Rows->Add(gcnew array<String^>{
			"" + myCourseList[i]->Id,
				"" + myCourseList[i]->Name,
				"" + myCourseList[i]->Type,
				"" + myCourseList[i]->Professor
		});
	}
}
private: System::Void CourseSearchForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//FillCmbCourseType();
	ShowCourses();
}
};
}
