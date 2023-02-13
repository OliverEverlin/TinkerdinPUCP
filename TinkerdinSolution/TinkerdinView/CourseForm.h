#pragma once
#include "ScheduleForm.h"

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
	private: System::Windows::Forms::Button^ btt_schedule;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabAgregar;
	private: System::Windows::Forms::TabPage^ tabSchedule;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridView^ dgvSchedule;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hour;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Monday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tuesday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ wednesday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ thursday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ friday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ saturday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sunday;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



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
			this->btt_schedule = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabAgregar = (gcnew System::Windows::Forms::TabPage());
			this->tabSchedule = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->Hour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Monday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tuesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wednesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->thursday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->friday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->saturday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sunday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabAgregar->SuspendLayout();
			this->tabSchedule->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbCourseType
			// 
			this->cmbCourseType->FormattingEnabled = true;
			this->cmbCourseType->Location = System::Drawing::Point(201, 109);
			this->cmbCourseType->Margin = System::Windows::Forms::Padding(5);
			this->cmbCourseType->Name = L"cmbCourseType";
			this->cmbCourseType->Size = System::Drawing::Size(496, 24);
			this->cmbCourseType->TabIndex = 47;
			this->cmbCourseType->SelectedIndexChanged += gcnew System::EventHandler(this, &CourseForm::cmbCourseType_SelectedIndexChanged);
			// 
			// txtCourseHorario
			// 
			this->txtCourseHorario->Location = System::Drawing::Point(201, 226);
			this->txtCourseHorario->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseHorario->Multiline = true;
			this->txtCourseHorario->Name = L"txtCourseHorario";
			this->txtCourseHorario->Size = System::Drawing::Size(496, 52);
			this->txtCourseHorario->TabIndex = 44;
			// 
			// txtCourseProfesor
			// 
			this->txtCourseProfesor->Location = System::Drawing::Point(201, 163);
			this->txtCourseProfesor->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseProfesor->Name = L"txtCourseProfesor";
			this->txtCourseProfesor->Size = System::Drawing::Size(496, 22);
			this->txtCourseProfesor->TabIndex = 43;
			// 
			// labelCouseHours
			// 
			this->labelCouseHours->AutoSize = true;
			this->labelCouseHours->Location = System::Drawing::Point(50, 225);
			this->labelCouseHours->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCouseHours->Name = L"labelCouseHours";
			this->labelCouseHours->Size = System::Drawing::Size(55, 16);
			this->labelCouseHours->TabIndex = 42;
			this->labelCouseHours->Text = L"Horario:";
			// 
			// labelCourseProfessor
			// 
			this->labelCourseProfessor->AutoSize = true;
			this->labelCourseProfessor->Location = System::Drawing::Point(50, 166);
			this->labelCourseProfessor->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseProfessor->Name = L"labelCourseProfessor";
			this->labelCourseProfessor->Size = System::Drawing::Size(61, 16);
			this->labelCourseProfessor->TabIndex = 41;
			this->labelCourseProfessor->Text = L"Profesor:";
			// 
			// txtCourseName
			// 
			this->txtCourseName->Location = System::Drawing::Point(202, 57);
			this->txtCourseName->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseName->Name = L"txtCourseName";
			this->txtCourseName->Size = System::Drawing::Size(495, 22);
			this->txtCourseName->TabIndex = 36;
			// 
			// txtCourseId
			// 
			this->txtCourseId->Location = System::Drawing::Point(202, 20);
			this->txtCourseId->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseId->Name = L"txtCourseId";
			this->txtCourseId->Size = System::Drawing::Size(495, 22);
			this->txtCourseId->TabIndex = 35;
			// 
			// labelCourseName
			// 
			this->labelCourseName->AutoSize = true;
			this->labelCourseName->Location = System::Drawing::Point(50, 60);
			this->labelCourseName->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseName->Name = L"labelCourseName";
			this->labelCourseName->Size = System::Drawing::Size(59, 16);
			this->labelCourseName->TabIndex = 30;
			this->labelCourseName->Text = L"Nombre:";
			// 
			// labelCourse
			// 
			this->labelCourse->AutoSize = true;
			this->labelCourse->Location = System::Drawing::Point(50, 23);
			this->labelCourse->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourse->Name = L"labelCourse";
			this->labelCourse->Size = System::Drawing::Size(59, 16);
			this->labelCourse->TabIndex = 29;
			this->labelCourse->Text = L"Id Curso:";
			// 
			// labelCourseType
			// 
			this->labelCourseType->AutoSize = true;
			this->labelCourseType->Location = System::Drawing::Point(50, 114);
			this->labelCourseType->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseType->Name = L"labelCourseType";
			this->labelCourseType->Size = System::Drawing::Size(38, 16);
			this->labelCourseType->TabIndex = 57;
			this->labelCourseType->Text = L"Tipo:";
			// 
			// labelCourseExamDates
			// 
			this->labelCourseExamDates->AutoSize = true;
			this->labelCourseExamDates->Location = System::Drawing::Point(50, 316);
			this->labelCourseExamDates->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseExamDates->Name = L"labelCourseExamDates";
			this->labelCourseExamDates->Size = System::Drawing::Size(123, 16);
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
			this->dgvCourse->Location = System::Drawing::Point(135, 486);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(5);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(681, 208);
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
			this->btnDeleteCourse->Location = System::Drawing::Point(603, 413);
			this->btnDeleteCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(263, 34);
			this->btnDeleteCourse->TabIndex = 63;
			this->btnDeleteCourse->Text = L"Eliminar";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			this->btnDeleteCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnDelete_Click);
			// 
			// btnUpdateCourse
			// 
			this->btnUpdateCourse->Location = System::Drawing::Point(331, 413);
			this->btnUpdateCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnUpdateCourse->Name = L"btnUpdateCourse";
			this->btnUpdateCourse->Size = System::Drawing::Size(261, 34);
			this->btnUpdateCourse->TabIndex = 62;
			this->btnUpdateCourse->Text = L"Modificar";
			this->btnUpdateCourse->UseVisualStyleBackColor = true;
			this->btnUpdateCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnUpdate_Click);
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Location = System::Drawing::Point(43, 413);
			this->btnAddCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(261, 34);
			this->btnAddCourse->TabIndex = 61;
			this->btnAddCourse->Text = L"Agregar";
			this->btnAddCourse->UseVisualStyleBackColor = true;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnAdd_Click);
			// 
			// dateTimePickerParcial
			// 
			this->dateTimePickerParcial->Location = System::Drawing::Point(185, 369);
			this->dateTimePickerParcial->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerParcial->Name = L"dateTimePickerParcial";
			this->dateTimePickerParcial->Size = System::Drawing::Size(265, 22);
			this->dateTimePickerParcial->TabIndex = 65;
			// 
			// labelCourseParfcialExam
			// 
			this->labelCourseParfcialExam->AutoSize = true;
			this->labelCourseParfcialExam->Location = System::Drawing::Point(86, 369);
			this->labelCourseParfcialExam->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseParfcialExam->Name = L"labelCourseParfcialExam";
			this->labelCourseParfcialExam->Size = System::Drawing::Size(52, 16);
			this->labelCourseParfcialExam->TabIndex = 66;
			this->labelCourseParfcialExam->Text = L"Parcial:";
			// 
			// labelCourseFinalExam
			// 
			this->labelCourseFinalExam->AutoSize = true;
			this->labelCourseFinalExam->Location = System::Drawing::Point(506, 366);
			this->labelCourseFinalExam->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseFinalExam->Name = L"labelCourseFinalExam";
			this->labelCourseFinalExam->Size = System::Drawing::Size(39, 16);
			this->labelCourseFinalExam->TabIndex = 68;
			this->labelCourseFinalExam->Text = L"Final:";
			// 
			// dateTimePickerFinal
			// 
			this->dateTimePickerFinal->Location = System::Drawing::Point(583, 366);
			this->dateTimePickerFinal->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerFinal->Name = L"dateTimePickerFinal";
			this->dateTimePickerFinal->Size = System::Drawing::Size(265, 22);
			this->dateTimePickerFinal->TabIndex = 67;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(912, 28);
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
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::btnDelete_Click);
			// 
			// btt_schedule
			// 
			this->btt_schedule->Location = System::Drawing::Point(768, 239);
			this->btt_schedule->Name = L"btt_schedule";
			this->btt_schedule->Size = System::Drawing::Size(75, 23);
			this->btt_schedule->TabIndex = 70;
			this->btt_schedule->Text = L"Horario";
			this->btt_schedule->UseVisualStyleBackColor = true;
			this->btt_schedule->Click += gcnew System::EventHandler(this, &CourseForm::Schedule_button_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabAgregar);
			this->tabControl1->Controls->Add(this->tabSchedule);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(0, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(912, 657);
			this->tabControl1->TabIndex = 71;
			// 
			// tabAgregar
			// 
			this->tabAgregar->Controls->Add(this->txtCourseId);
			this->tabAgregar->Controls->Add(this->labelCourseParfcialExam);
			this->tabAgregar->Controls->Add(this->btt_schedule);
			this->tabAgregar->Controls->Add(this->dateTimePickerParcial);
			this->tabAgregar->Controls->Add(this->txtCourseName);
			this->tabAgregar->Controls->Add(this->btnAddCourse);
			this->tabAgregar->Controls->Add(this->labelCourseFinalExam);
			this->tabAgregar->Controls->Add(this->labelCourseExamDates);
			this->tabAgregar->Controls->Add(this->txtCourseProfesor);
			this->tabAgregar->Controls->Add(this->labelCourseType);
			this->tabAgregar->Controls->Add(this->dateTimePickerFinal);
			this->tabAgregar->Controls->Add(this->labelCouseHours);
			this->tabAgregar->Controls->Add(this->txtCourseHorario);
			this->tabAgregar->Controls->Add(this->labelCourseProfessor);
			this->tabAgregar->Controls->Add(this->cmbCourseType);
			this->tabAgregar->Controls->Add(this->labelCourseName);
			this->tabAgregar->Controls->Add(this->btnUpdateCourse);
			this->tabAgregar->Controls->Add(this->labelCourse);
			this->tabAgregar->Controls->Add(this->dgvCourse);
			this->tabAgregar->Controls->Add(this->btnDeleteCourse);
			this->tabAgregar->Location = System::Drawing::Point(4, 25);
			this->tabAgregar->Name = L"tabAgregar";
			this->tabAgregar->Padding = System::Windows::Forms::Padding(3);
			this->tabAgregar->Size = System::Drawing::Size(904, 628);
			this->tabAgregar->TabIndex = 0;
			this->tabAgregar->Text = L"Modificar";
			this->tabAgregar->UseVisualStyleBackColor = true;
			// 
			// tabSchedule
			// 
			this->tabSchedule->Controls->Add(this->button1);
			this->tabSchedule->Controls->Add(this->button2);
			this->tabSchedule->Controls->Add(this->button3);
			this->tabSchedule->Controls->Add(this->dgvSchedule);
			this->tabSchedule->Location = System::Drawing::Point(4, 25);
			this->tabSchedule->Name = L"tabSchedule";
			this->tabSchedule->Padding = System::Windows::Forms::Padding(3);
			this->tabSchedule->Size = System::Drawing::Size(904, 628);
			this->tabSchedule->TabIndex = 1;
			this->tabSchedule->Text = L"Horario";
			this->tabSchedule->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(904, 628);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Cursos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 149);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(681, 208);
			this->dataGridView1->TabIndex = 65;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Tipo";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 80;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Profesor";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 80;
			// 
			// dgvSchedule
			// 
			this->dgvSchedule->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSchedule->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Hour, this->Monday,
					this->Tuesday, this->wednesday, this->thursday, this->friday, this->saturday, this->sunday
			});
			this->dgvSchedule->Location = System::Drawing::Point(18, 89);
			this->dgvSchedule->Name = L"dgvSchedule";
			this->dgvSchedule->RowHeadersWidth = 51;
			this->dgvSchedule->RowTemplate->Height = 24;
			this->dgvSchedule->Size = System::Drawing::Size(829, 351);
			this->dgvSchedule->TabIndex = 1;
			// 
			// Hour
			// 
			this->Hour->HeaderText = L"Hora";
			this->Hour->MinimumWidth = 6;
			this->Hour->Name = L"Hour";
			this->Hour->ReadOnly = true;
			// 
			// Monday
			// 
			this->Monday->HeaderText = L"Lunes";
			this->Monday->MinimumWidth = 6;
			this->Monday->Name = L"Monday";
			// 
			// Tuesday
			// 
			this->Tuesday->HeaderText = L"Martes";
			this->Tuesday->MinimumWidth = 6;
			this->Tuesday->Name = L"Tuesday";
			// 
			// wednesday
			// 
			this->wednesday->HeaderText = L"Miercoles";
			this->wednesday->MinimumWidth = 6;
			this->wednesday->Name = L"wednesday";
			// 
			// thursday
			// 
			this->thursday->HeaderText = L"Jueves";
			this->thursday->MinimumWidth = 6;
			this->thursday->Name = L"thursday";
			// 
			// friday
			// 
			this->friday->HeaderText = L"Viernes";
			this->friday->MinimumWidth = 6;
			this->friday->Name = L"friday";
			// 
			// saturday
			// 
			this->saturday->HeaderText = L"Sábado";
			this->saturday->MinimumWidth = 6;
			this->saturday->Name = L"saturday";
			// 
			// sunday
			// 
			this->sunday->HeaderText = L"Domingo";
			this->sunday->MinimumWidth = 6;
			this->sunday->Name = L"sunday";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 466);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 34);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(289, 466);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 34);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(561, 466);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(263, 34);
			this->button3->TabIndex = 66;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(34, 418);
			this->button4->Margin = System::Windows::Forms::Padding(5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(261, 34);
			this->button4->TabIndex = 67;
			this->button4->Text = L"Agregar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(305, 418);
			this->button5->Margin = System::Windows::Forms::Padding(5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(261, 34);
			this->button5->TabIndex = 68;
			this->button5->Text = L"Modificar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(577, 418);
			this->button6->Margin = System::Windows::Forms::Padding(5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(263, 34);
			this->button6->TabIndex = 69;
			this->button6->Text = L"Eliminar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// CourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(912, 795);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"CourseForm";
			this->Text = L"Cursos";
			this->Load += gcnew System::EventHandler(this, &CourseForm::CourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabAgregar->ResumeLayout(false);
			this->tabAgregar->PerformLayout();
			this->tabSchedule->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Schedule_button_Click(System::Object^ sender, System::EventArgs^ e) {
	ScheduleForm^ scheduleForm = gcnew ScheduleForm();
	scheduleForm->RefCourseForm = this;
	scheduleForm->ShowDialog();
}
};
}
