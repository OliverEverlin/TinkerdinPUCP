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
	using namespace TinkerdinView;

	using namespace TinkerdinModel;
	
	

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

	private: System::Windows::Forms::ComboBox^ cmbCourseType;
	private: System::Windows::Forms::TextBox^ txtCourseHorario;

	private: System::Windows::Forms::TextBox^ txtCourseProfesor;
	private: System::Windows::Forms::Label^ labelCouseHours;

	private: System::Windows::Forms::Label^ labelCourseProfessor;

	private: System::Windows::Forms::TextBox^ txtCourseName;
	private: System::Windows::Forms::TextBox^ txtCourseId;
	private: System::Windows::Forms::Label^ labelCourseName;

	private: System::Windows::Forms::Label^ labelCourse;
	private: System::Windows::Forms::Label^ labelCourseType;
	private: System::Windows::Forms::Label^ labelCourseExamDates;


	private: System::Windows::Forms::DataGridView^ dgvCourse;

	private: System::Windows::Forms::Button^ btnDeleteCourse;

	private: System::Windows::Forms::Button^ btnUpdateCourse;

	private: System::Windows::Forms::Button^ btnAddCourse;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerParcial;
	private: System::Windows::Forms::Label^ labelCourseParfcialExam;
	private: System::Windows::Forms::Label^ labelCourseFinalExam;



	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFinal;





	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseIdGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseNameGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseTypeGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseProfessorGrid;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

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
			this->cmbCourseType = (gcnew System::Windows::Forms::ComboBox());
			this->txtCourseHorario = (gcnew System::Windows::Forms::TextBox());
			this->txtCourseProfesor = (gcnew System::Windows::Forms::TextBox());
			this->labelCouseHours = (gcnew System::Windows::Forms::Label());
			this->labelCourseProfessor = (gcnew System::Windows::Forms::Label());
			this->txtCourseName = (gcnew System::Windows::Forms::TextBox());
			this->txtCourseId = (gcnew System::Windows::Forms::TextBox());
			this->labelCourseName = (gcnew System::Windows::Forms::Label());
			this->labelCourse = (gcnew System::Windows::Forms::Label());
			this->labelCourseType = (gcnew System::Windows::Forms::Label());
			this->labelCourseExamDates = (gcnew System::Windows::Forms::Label());
			this->dgvCourse = (gcnew System::Windows::Forms::DataGridView());
			this->CourseIdGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseNameGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseTypeGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseProfessorGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->btnUpdateCourse = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerParcial = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelCourseParfcialExam = (gcnew System::Windows::Forms::Label());
			this->labelCourseFinalExam = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmbCourseType
			// 
			this->cmbCourseType->FormattingEnabled = true;
			this->cmbCourseType->Location = System::Drawing::Point(137, 117);
			this->cmbCourseType->Margin = System::Windows::Forms::Padding(4);
			this->cmbCourseType->Name = L"cmbCourseType";
			this->cmbCourseType->Size = System::Drawing::Size(373, 21);
			this->cmbCourseType->TabIndex = 47;
			this->cmbCourseType->SelectedIndexChanged += gcnew System::EventHandler(this, &CourseForm::cmbCourseType_SelectedIndexChanged);
			// 
			// txtCourseHorario
			// 
			this->txtCourseHorario->Location = System::Drawing::Point(137, 212);
			this->txtCourseHorario->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseHorario->Multiline = true;
			this->txtCourseHorario->Name = L"txtCourseHorario";
			this->txtCourseHorario->Size = System::Drawing::Size(373, 43);
			this->txtCourseHorario->TabIndex = 44;
			// 
			// txtCourseProfesor
			// 
			this->txtCourseProfesor->Location = System::Drawing::Point(137, 161);
			this->txtCourseProfesor->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseProfesor->Name = L"txtCourseProfesor";
			this->txtCourseProfesor->Size = System::Drawing::Size(373, 20);
			this->txtCourseProfesor->TabIndex = 43;
			// 
			// labelCouseHours
			// 
			this->labelCouseHours->AutoSize = true;
			this->labelCouseHours->Location = System::Drawing::Point(37, 209);
			this->labelCouseHours->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCouseHours->Name = L"labelCouseHours";
			this->labelCouseHours->Size = System::Drawing::Size(44, 13);
			this->labelCouseHours->TabIndex = 42;
			this->labelCouseHours->Text = L"Horario:";
			// 
			// labelCourseProfessor
			// 
			this->labelCourseProfessor->AutoSize = true;
			this->labelCourseProfessor->Location = System::Drawing::Point(37, 161);
			this->labelCourseProfessor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseProfessor->Name = L"labelCourseProfessor";
			this->labelCourseProfessor->Size = System::Drawing::Size(49, 13);
			this->labelCourseProfessor->TabIndex = 41;
			this->labelCourseProfessor->Text = L"Profesor:";
			// 
			// txtCourseName
			// 
			this->txtCourseName->Location = System::Drawing::Point(138, 75);
			this->txtCourseName->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseName->Name = L"txtCourseName";
			this->txtCourseName->Size = System::Drawing::Size(372, 20);
			this->txtCourseName->TabIndex = 36;
			// 
			// txtCourseId
			// 
			this->txtCourseId->Location = System::Drawing::Point(138, 45);
			this->txtCourseId->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseId->Name = L"txtCourseId";
			this->txtCourseId->Size = System::Drawing::Size(372, 20);
			this->txtCourseId->TabIndex = 35;
			// 
			// labelCourseName
			// 
			this->labelCourseName->AutoSize = true;
			this->labelCourseName->Location = System::Drawing::Point(37, 75);
			this->labelCourseName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseName->Name = L"labelCourseName";
			this->labelCourseName->Size = System::Drawing::Size(47, 13);
			this->labelCourseName->TabIndex = 30;
			this->labelCourseName->Text = L"Nombre:";
			// 
			// labelCourse
			// 
			this->labelCourse->AutoSize = true;
			this->labelCourse->Location = System::Drawing::Point(37, 45);
			this->labelCourse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourse->Name = L"labelCourse";
			this->labelCourse->Size = System::Drawing::Size(49, 13);
			this->labelCourse->TabIndex = 29;
			this->labelCourse->Text = L"Id Curso:";
			// 
			// labelCourseType
			// 
			this->labelCourseType->AutoSize = true;
			this->labelCourseType->Location = System::Drawing::Point(37, 119);
			this->labelCourseType->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseType->Name = L"labelCourseType";
			this->labelCourseType->Size = System::Drawing::Size(31, 13);
			this->labelCourseType->TabIndex = 57;
			this->labelCourseType->Text = L"Tipo:";
			// 
			// labelCourseExamDates
			// 
			this->labelCourseExamDates->AutoSize = true;
			this->labelCourseExamDates->Location = System::Drawing::Point(37, 283);
			this->labelCourseExamDates->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseExamDates->Name = L"labelCourseExamDates";
			this->labelCourseExamDates->Size = System::Drawing::Size(99, 13);
			this->labelCourseExamDates->TabIndex = 59;
			this->labelCourseExamDates->Text = L"Días de examenes:";
			// 
			// dgvCourse
			// 
			this->dgvCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CourseIdGrid,
					this->CourseNameGrid, this->CourseTypeGrid, this->CourseProfessorGrid
			});
			this->dgvCourse->Location = System::Drawing::Point(88, 423);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(4);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(511, 169);
			this->dgvCourse->TabIndex = 64;
			this->dgvCourse->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CourseForm::dgvCourse_CellContentClick);
			this->dgvCourse->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CourseForm::dgvCourse_CellContentClick);
			// 
			// CourseIdGrid
			// 
			this->CourseIdGrid->HeaderText = L"Id";
			this->CourseIdGrid->MinimumWidth = 6;
			this->CourseIdGrid->Name = L"CourseIdGrid";
			this->CourseIdGrid->Width = 50;
			// 
			// CourseNameGrid
			// 
			this->CourseNameGrid->HeaderText = L"Nombre";
			this->CourseNameGrid->MinimumWidth = 6;
			this->CourseNameGrid->Name = L"CourseNameGrid";
			this->CourseNameGrid->Width = 250;
			// 
			// CourseTypeGrid
			// 
			this->CourseTypeGrid->HeaderText = L"Tipo";
			this->CourseTypeGrid->MinimumWidth = 6;
			this->CourseTypeGrid->Name = L"CourseTypeGrid";
			this->CourseTypeGrid->Width = 80;
			// 
			// CourseProfessorGrid
			// 
			this->CourseProfessorGrid->HeaderText = L"Profesor";
			this->CourseProfessorGrid->MinimumWidth = 6;
			this->CourseProfessorGrid->Name = L"CourseProfessorGrid";
			this->CourseProfessorGrid->Width = 80;
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(439, 364);
			this->btnDeleteCourse->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(197, 28);
			this->btnDeleteCourse->TabIndex = 63;
			this->btnDeleteCourse->Text = L"Eliminar";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			this->btnDeleteCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnDelete_Click);
			// 
			// btnUpdateCourse
			// 
			this->btnUpdateCourse->Location = System::Drawing::Point(235, 364);
			this->btnUpdateCourse->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdateCourse->Name = L"btnUpdateCourse";
			this->btnUpdateCourse->Size = System::Drawing::Size(196, 28);
			this->btnUpdateCourse->TabIndex = 62;
			this->btnUpdateCourse->Text = L"Modificar";
			this->btnUpdateCourse->UseVisualStyleBackColor = true;
			this->btnUpdateCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnUpdate_Click);
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Location = System::Drawing::Point(30, 364);
			this->btnAddCourse->Margin = System::Windows::Forms::Padding(4);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(196, 28);
			this->btnAddCourse->TabIndex = 61;
			this->btnAddCourse->Text = L"Agregar";
			this->btnAddCourse->UseVisualStyleBackColor = true;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnAdd_Click);
			// 
			// dateTimePickerParcial
			// 
			this->dateTimePickerParcial->Location = System::Drawing::Point(138, 326);
			this->dateTimePickerParcial->Name = L"dateTimePickerParcial";
			this->dateTimePickerParcial->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerParcial->TabIndex = 65;
			// 
			// labelCourseParfcialExam
			// 
			this->labelCourseParfcialExam->AutoSize = true;
			this->labelCourseParfcialExam->Location = System::Drawing::Point(64, 326);
			this->labelCourseParfcialExam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseParfcialExam->Name = L"labelCourseParfcialExam";
			this->labelCourseParfcialExam->Size = System::Drawing::Size(42, 13);
			this->labelCourseParfcialExam->TabIndex = 66;
			this->labelCourseParfcialExam->Text = L"Parcial:";
			// 
			// labelCourseFinalExam
			// 
			this->labelCourseFinalExam->AutoSize = true;
			this->labelCourseFinalExam->Location = System::Drawing::Point(366, 326);
			this->labelCourseFinalExam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseFinalExam->Name = L"labelCourseFinalExam";
			this->labelCourseFinalExam->Size = System::Drawing::Size(32, 13);
			this->labelCourseFinalExam->TabIndex = 68;
			this->labelCourseFinalExam->Text = L"Final:";
			// 
			// dateTimePickerFinal
			// 
			this->dateTimePickerFinal->Location = System::Drawing::Point(424, 326);
			this->dateTimePickerFinal->Name = L"dateTimePickerFinal";
			this->dateTimePickerFinal->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerFinal->TabIndex = 67;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(684, 24);
			this->menuStrip1->TabIndex = 69;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::btnDelete_Click);
			// 
			// CourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(684, 646);
			this->Controls->Add(this->labelCourseFinalExam);
			this->Controls->Add(this->dateTimePickerFinal);
			this->Controls->Add(this->labelCourseParfcialExam);
			this->Controls->Add(this->dateTimePickerParcial);
			this->Controls->Add(this->dgvCourse);
			this->Controls->Add(this->btnDeleteCourse);
			this->Controls->Add(this->btnUpdateCourse);
			this->Controls->Add(this->btnAddCourse);
			this->Controls->Add(this->labelCourseExamDates);
			this->Controls->Add(this->labelCourseType);
			this->Controls->Add(this->cmbCourseType);
			this->Controls->Add(this->txtCourseHorario);
			this->Controls->Add(this->txtCourseProfesor);
			this->Controls->Add(this->labelCouseHours);
			this->Controls->Add(this->labelCourseProfessor);
			this->Controls->Add(this->txtCourseName);
			this->Controls->Add(this->txtCourseId);
			this->Controls->Add(this->labelCourseName);
			this->Controls->Add(this->labelCourse);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CourseForm";
			this->Text = L"CourseForm";
			this->Load += gcnew System::EventHandler(this, &CourseForm::CourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Course^ course = gcnew Course();
	try {
		if (txtCourseName->Text->Trim() == "") {
			MessageBox::Show("El nombre del curso no debe estar vacio.");
			return;
		}
		if (txtCourseId->Text->Trim() == "") {
			MessageBox::Show("El ID del curso no debe estar vacío.");
			return;
		}
		if (txtCourseHorario->Text->Trim() == "") {
			MessageBox::Show("El horario del curso no debe estar vacío.");
			return;
		}
		if (cmbCourseType->SelectedIndex < 0) {
			MessageBox::Show("El tipo de curso debe ser seleccionado.");
			return;
		}

		course->Id = txtCourseId->Text;
		course->Name = txtCourseName->Text;
		course->Type = cmbCourseType->SelectedItem->ToString();
		course->Professor = txtCourseProfesor->Text;
		course->Parcial = dateTimePickerParcial->Value.ToString("yyyy-MM-dd");
		course->Final = dateTimePickerFinal->Value.ToString("yyyy-MM-dd");
		course->Status = 'A';
		//falta añadir cursos
		Controller::AddCourse(course);

		btnAddCourse->Enabled = true;
		ShowCourses();
		
		CleanControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
		return;
	}
	
}

	   void ShowCourses() {
		   List<Course^>^ myCourseList = Controller::QueryAllCourse();

		   dgvCourse->Rows->Clear();
		   for (int i = 0; i < myCourseList->Count; i++) {
			   dgvCourse->Rows->Add(gcnew array<String^>{
				   "" + myCourseList[i]->Id,
					   "" + myCourseList[i]->Name,
					   "" + myCourseList[i]->Type,
					   "" + myCourseList[i]->Professor
			   });
		   }
	   }

	   void CleanControls() {
		   txtCourseId->Clear();
		   txtCourseName->Clear();
		   txtCourseProfesor->Clear();
		   txtCourseHorario->Clear();
		   FillCmbCourseType();
	   }

private: System::Void dgvCourse_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCourse->CurrentCell != nullptr &&
		dgvCourse->CurrentCell->Value != nullptr &&
		dgvCourse->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvCourse->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCourse->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		String^ courseId = dgvCourse->Rows[selectedrowindex]->Cells[0]->Value->ToString();
		//int courseId = Convert::ToInt32(dgvCourse->Rows[selectedrowindex]->Cells[0]->Value->ToString());
		Course^ p = Controller::QueryCourseById(courseId);
		txtCourseId->Text = "" + p->Id;
		txtCourseName->Text = p->Name;


		for (int i = 0; i < cmbCourseType->Items->Count; i++) {
			if (cmbCourseType->Items[i]->ToString()->CompareTo(p->Type) == 0) {
				cmbCourseType->SelectedIndex = i;
				break;
			}
		}

		txtCourseProfesor->Text = p->Professor;
		dateTimePickerParcial->Value = DateTime::Parse(p->Parcial);
		dateTimePickerFinal->Value = DateTime::Parse(p->Final);
		
	}
}
	

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvCourse->CurrentCell != nullptr &&
		dgvCourse->CurrentCell->Value != nullptr &&
		dgvCourse->CurrentCell->Value->ToString() != "" &&
		!txtCourseId->Text->Trim()->Equals("")) {

		Course^ course = gcnew Course();
		try {
			if (txtCourseName->Text->Trim() == "") {
				MessageBox::Show("El nombre del curso no debe estar vacio.");
				return;
			}
			if (txtCourseId->Text->Trim() == "") {
				MessageBox::Show("El ID del curso no debe estar vacío.");
				return;
			}
			if (txtCourseHorario->Text->Trim() == "") {
				MessageBox::Show("El horario del curso no debe estar vacío.");
				return;
			}
			if (cmbCourseType->SelectedIndex < 0) {
				MessageBox::Show("El tipo de curso debe ser seleccionado.");
				return;
			}
	
			course->Id = txtCourseId->Text;
			course->Name = txtCourseName->Text;
			course->Type = cmbCourseType->SelectedItem->ToString();
			course->Professor = txtCourseProfesor->Text;
			course->Parcial = dateTimePickerParcial->Value.ToString("yyyy-MM-dd");
			course->Final = dateTimePickerFinal->Value.ToString("yyyy-MM-dd");
			course->Status = 'A';

			Controller::UpdateCourse(course);
			CleanControls();
			ShowCourses();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "No se guardó el tipo por error en los datos.");
			return;
		}
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCourseId->Text->Trim()->Equals(""))
		MessageBox::Show("Debe seleccionar un curso.");
	else
		Controller::DeleteCourse(txtCourseId->Text);
	ShowCourses();
}
private: System::Void CourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
	FillCmbCourseType();
	ShowCourses();
}
	   void FillCmbCourseType() {
		   cmbCourseType->Items->Clear();
		   List <String^>^ courseTypeList = Controller::QueryAllTypeCourse();
		   for (int i = 0; i < courseTypeList->Count; i++) {
			   //cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
			   cmbCourseType->Items->Add(courseTypeList[i]);
		   }
	   }

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnUpdateCourse->Enabled = false;
	btnDeleteCourse->Enabled = false;
	CleanControls();
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAddCourse->Enabled = false;
	btnUpdateCourse->Enabled = true;
	btnDeleteCourse->Enabled = true;
}
	   Void EnableControls() {
		   txtCourseId->ReadOnly = false;
		   txtCourseName->ReadOnly = false;
		   txtCourseProfesor->ReadOnly = false;
		   txtCourseHorario->ReadOnly = false;
		   btnAddCourse->Enabled = true;
		   btnUpdateCourse->Enabled = true;
		   btnDeleteCourse->Enabled = true;
	   }


private: System::Void cmbCourseType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
