#pragma once
#include "ScheduleForm.h"
#include "CourseChangeForm.h"
#include "CourseSearchForm.h"

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


	private: System::Windows::Forms::FontDialog^ fontDialog1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Button^ btt_schedule;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabSchedule;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dgvCourse;

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
	private: System::Windows::Forms::Button^ btn_AddSchedule;
	private: System::Windows::Forms::Button^ btn_UpdateSchedule;
	private: System::Windows::Forms::Button^ btn_DeleteSchedule;



	private: System::Windows::Forms::Button^ btn_UpdateCourse;
	private: System::Windows::Forms::Button^ btn_Delete_Course;
	private: System::Windows::Forms::Button^ btn_AddCourse;







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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btt_schedule = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabSchedule = (gcnew System::Windows::Forms::TabPage());
			this->btn_AddSchedule = (gcnew System::Windows::Forms::Button());
			this->btn_UpdateSchedule = (gcnew System::Windows::Forms::Button());
			this->btn_DeleteSchedule = (gcnew System::Windows::Forms::Button());
			this->dgvSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->Hour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Monday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tuesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wednesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->thursday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->friday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->saturday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sunday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btn_AddCourse = (gcnew System::Windows::Forms::Button());
			this->btn_UpdateCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Delete_Course = (gcnew System::Windows::Forms::Button());
			this->dgvCourse = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabSchedule->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(866, 28);
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
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CourseForm::salirToolStripMenuItem_Click);
			// 
			// btt_schedule
			// 
			this->btt_schedule->Location = System::Drawing::Point(741, 0);
			this->btt_schedule->Name = L"btt_schedule";
			this->btt_schedule->Size = System::Drawing::Size(75, 23);
			this->btt_schedule->TabIndex = 70;
			this->btt_schedule->Text = L"Horario";
			this->btt_schedule->UseVisualStyleBackColor = true;
			this->btt_schedule->Click += gcnew System::EventHandler(this, &CourseForm::Schedule_button_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabSchedule);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(0, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(870, 657);
			this->tabControl1->TabIndex = 71;
			// 
			// tabSchedule
			// 
			this->tabSchedule->Controls->Add(this->btn_AddSchedule);
			this->tabSchedule->Controls->Add(this->btn_UpdateSchedule);
			this->tabSchedule->Controls->Add(this->btn_DeleteSchedule);
			this->tabSchedule->Controls->Add(this->dgvSchedule);
			this->tabSchedule->Location = System::Drawing::Point(4, 25);
			this->tabSchedule->Name = L"tabSchedule";
			this->tabSchedule->Padding = System::Windows::Forms::Padding(3);
			this->tabSchedule->Size = System::Drawing::Size(862, 628);
			this->tabSchedule->TabIndex = 1;
			this->tabSchedule->Text = L"Horario";
			this->tabSchedule->UseVisualStyleBackColor = true;
			// 
			// btn_AddSchedule
			// 
			this->btn_AddSchedule->Location = System::Drawing::Point(18, 466);
			this->btn_AddSchedule->Margin = System::Windows::Forms::Padding(5);
			this->btn_AddSchedule->Name = L"btn_AddSchedule";
			this->btn_AddSchedule->Size = System::Drawing::Size(261, 34);
			this->btn_AddSchedule->TabIndex = 64;
			this->btn_AddSchedule->Text = L"Agregar";
			this->btn_AddSchedule->UseVisualStyleBackColor = true;
			this->btn_AddSchedule->Click += gcnew System::EventHandler(this, &CourseForm::btnAddSchedule_Click);
			// 
			// btn_UpdateSchedule
			// 
			this->btn_UpdateSchedule->Location = System::Drawing::Point(289, 466);
			this->btn_UpdateSchedule->Margin = System::Windows::Forms::Padding(5);
			this->btn_UpdateSchedule->Name = L"btn_UpdateSchedule";
			this->btn_UpdateSchedule->Size = System::Drawing::Size(261, 34);
			this->btn_UpdateSchedule->TabIndex = 65;
			this->btn_UpdateSchedule->Text = L"Modificar";
			this->btn_UpdateSchedule->UseVisualStyleBackColor = true;
			this->btn_UpdateSchedule->Click += gcnew System::EventHandler(this, &CourseForm::btnUpdateCourse_Click);
			// 
			// btn_DeleteSchedule
			// 
			this->btn_DeleteSchedule->Location = System::Drawing::Point(561, 466);
			this->btn_DeleteSchedule->Margin = System::Windows::Forms::Padding(5);
			this->btn_DeleteSchedule->Name = L"btn_DeleteSchedule";
			this->btn_DeleteSchedule->Size = System::Drawing::Size(263, 34);
			this->btn_DeleteSchedule->TabIndex = 66;
			this->btn_DeleteSchedule->Text = L"Eliminar";
			this->btn_DeleteSchedule->UseVisualStyleBackColor = true;
			this->btn_DeleteSchedule->Click += gcnew System::EventHandler(this, &CourseForm::btnDeleteCourse_Click);
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
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btn_AddCourse);
			this->tabPage1->Controls->Add(this->btn_UpdateCourse);
			this->tabPage1->Controls->Add(this->btn_Delete_Course);
			this->tabPage1->Controls->Add(this->dgvCourse);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(862, 628);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Cursos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btn_AddCourse
			// 
			this->btn_AddCourse->Location = System::Drawing::Point(10, 405);
			this->btn_AddCourse->Margin = System::Windows::Forms::Padding(5);
			this->btn_AddCourse->Name = L"btn_AddCourse";
			this->btn_AddCourse->Size = System::Drawing::Size(261, 34);
			this->btn_AddCourse->TabIndex = 70;
			this->btn_AddCourse->Text = L"Añadir";
			this->btn_AddCourse->UseVisualStyleBackColor = true;
			this->btn_AddCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnAddCourse_Click);
			// 
			// btn_UpdateCourse
			// 
			this->btn_UpdateCourse->Location = System::Drawing::Point(281, 405);
			this->btn_UpdateCourse->Margin = System::Windows::Forms::Padding(5);
			this->btn_UpdateCourse->Name = L"btn_UpdateCourse";
			this->btn_UpdateCourse->Size = System::Drawing::Size(261, 34);
			this->btn_UpdateCourse->TabIndex = 68;
			this->btn_UpdateCourse->Text = L"Modificar";
			this->btn_UpdateCourse->UseVisualStyleBackColor = true;
			this->btn_UpdateCourse->Click += gcnew System::EventHandler(this, &CourseForm::btnUpdateCourse_Click);
			// 
			// btn_Delete_Course
			// 
			this->btn_Delete_Course->Location = System::Drawing::Point(553, 405);
			this->btn_Delete_Course->Margin = System::Windows::Forms::Padding(5);
			this->btn_Delete_Course->Name = L"btn_Delete_Course";
			this->btn_Delete_Course->Size = System::Drawing::Size(263, 34);
			this->btn_Delete_Course->TabIndex = 69;
			this->btn_Delete_Course->Text = L"Eliminar";
			this->btn_Delete_Course->UseVisualStyleBackColor = true;
			this->btn_Delete_Course->Click += gcnew System::EventHandler(this, &CourseForm::btnDeleteCourse_Click);
			// 
			// dgvCourse
			// 
			this->dgvCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dgvCourse->Location = System::Drawing::Point(93, 162);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(5);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(681, 208);
			this->dgvCourse->TabIndex = 65;
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
			// CourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(866, 795);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btt_schedule);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"CourseForm";
			this->Text = L"Cursos";
			this->Load += gcnew System::EventHandler(this, &CourseForm::CourseForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabSchedule->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
//	Course^ course = gcnew Course();
//	try {
//		if (txtCourseName->Text->Trim() == "") {
//			MessageBox::Show("El nombre del curso no debe estar vacio.");
//			return;
//		}
//		if (txtCourseId->Text->Trim() == "") {
//			MessageBox::Show("El ID del curso no debe estar vacío.");
//			return;
//		}
//		if (txtCourseHorario->Text->Trim() == "") {
//			MessageBox::Show("El horario del curso no debe estar vacío.");
//			return;
//		}
//		if (cmbCourseType->SelectedIndex < 0) {
//			MessageBox::Show("El tipo de curso debe ser seleccionado.");
//			return;
//		}
//
//		course->Id = txtCourseId->Text;
//		course->Name = txtCourseName->Text;
//		course->Type = cmbCourseType->SelectedItem->ToString();
//		course->Professor = txtCourseProfesor->Text;
//		course->Parcial = dateTimePickerParcial->Value.ToString("yyyy-MM-dd");
//		course->Final = dateTimePickerFinal->Value.ToString("yyyy-MM-dd");
//		course->Status = 'A';
//		//falta añadir cursos
//		Controller::AddCourse(course);
//
//		btnAddCourse->Enabled = true;
//		ShowCourses();
//		
//		CleanControls();
//	}
//	catch (Exception^ ex) {
//		MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
//		return;
//	}
//	
//}

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

//	   void CleanControls() {
//		   txtCourseId->Clear();
//		   txtCourseName->Clear();
//		   txtCourseProfesor->Clear();
//		   txtCourseHorario->Clear();
//		   FillCmbCourseType();
//	   }
//
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
		
		btn_UpdateCourse->Enabled = true;
		btn_Delete_Course->Enabled = true;
	}
}
	
private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dgvCourse->CurrentCell != nullptr &&
			dgvCourse->CurrentCell->Value != nullptr &&
			dgvCourse->CurrentCell->Value->ToString() != "") {
			CourseChangeForm^ coursechangeForm = gcnew CourseChangeForm(this);
			coursechangeForm->ShowDialog();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Debe seleccionar un curso.");
		return;
	}
}
private: System::Void btnUpdateCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (dgvCourse->CurrentCell != nullptr &&
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
	}*/

	try {
		if (dgvCourse->CurrentCell != nullptr &&
			dgvCourse->CurrentCell->Value != nullptr &&
			dgvCourse->CurrentCell->Value->ToString() != "") {
			CourseChangeForm^ coursechangeForm = gcnew CourseChangeForm(this);
			coursechangeForm->ShowDialog();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Debe seleccionar un curso.");
		return;
	}
}
private: System::Void btnDeleteCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvCourse->CurrentCell != nullptr &&
		dgvCourse->CurrentCell->Value != nullptr &&
		dgvCourse->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvCourse->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCourse->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		String^ courseId = dgvCourse->Rows[selectedrowindex]->Cells[0]->Value->ToString();
		Controller::DeleteCourse(courseId);
	}
	else {
		MessageBox::Show("Debe seleccionar un curso.");
	}
	ShowCourses();
}
private: System::Void btnAddSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dgvSchedule->CurrentCell != nullptr &&
			dgvSchedule->CurrentCell->Value != nullptr &&
			dgvSchedule->CurrentCell->Value->ToString() != "" ) {
			MessageBox::Show("Debe seleccionar un curso.");
		}
		else {
			//falta agregar string de horario
			CourseSearchForm^ coursesearchForm = gcnew CourseSearchForm(this);
			coursesearchForm->ShowDialog();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Debe seleccionar un las horas del curso");
		return;
	}
}
private: System::Void btnUpdateSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dgvSchedule->CurrentCell != nullptr &&
			dgvSchedule->CurrentCell->Value != nullptr &&
			dgvSchedule->CurrentCell->Value->ToString() != "" ) {
			//falta agregar string de horario
			CourseSearchForm^ coursesearchForm = gcnew CourseSearchForm(this);
			coursesearchForm->ShowDialog();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Debe seleccionar un curso.");
		return;
	}
}
private: System::Void btnDeleteSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvSchedule->CurrentCell != nullptr &&
		dgvSchedule->CurrentCell->Value != nullptr &&
		dgvSchedule->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvSchedule->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvSchedule->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		String^ courseId = dgvSchedule->Rows[selectedrowindex]->Cells[0]->Value->ToString();
		Controller::DeleteCourse(courseId);
	}
	else {
		MessageBox::Show("Debe seleccionar un curso.");
	}
	ShowCourses();
}
private: System::Void CourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//FillCmbCourseType();
	ShowCourses();
	ShowHours();
}


private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btn_UpdateSchedule->Enabled = false;
	btn_DeleteSchedule->Enabled = false;
	btn_UpdateCourse->Enabled = false;
	btn_Delete_Course->Enabled = false;
	//CleanControls();*/
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btn_AddSchedule->Enabled = false;
	btn_Delete_Course->Enabled = false;
	btn_DeleteSchedule->Enabled = false;
}
	   Void EnableControls() {
		   btn_AddSchedule->Enabled = true;
		   btn_UpdateSchedule->Enabled = true;
		   btn_DeleteSchedule->Enabled = true;
		   btn_UpdateCourse->Enabled = true;
		   btn_Delete_Course->Enabled = true;
	   }

//creo que ya no es necesario
private: System::Void Schedule_button_Click(System::Object^ sender, System::EventArgs^ e) {
	ScheduleForm^ scheduleForm = gcnew ScheduleForm();
	scheduleForm->RefCourseForm = this;
	scheduleForm->ShowDialog();
}
void ShowHours() {
	List<Hours^>^ myHourList = Controller::QueryAllHours();

	dgvSchedule->Rows->Clear();
	for (int i = 0; i < myHourList->Count; i++) {
		dgvSchedule->Rows->Add(gcnew array<String^>{
			myHourList[i]->Hour,
				myHourList[i]->Monday,
				myHourList[i]->Tuesday,
				myHourList[i]->Wednesday,
				myHourList[i]->Thursday,
				myHourList[i]->Friday,
				myHourList[i]->Saturday,
				myHourList[i]->Sunday
		});
	}
}
public: Void AddCourseToSchedule(Course^ p) {
	int selectedRowIndex = dgvSchedule->SelectedCells[0]->RowIndex;
	int selectedColumnIndex = dgvSchedule->SelectedCells[0]->ColumnIndex;
	String^ hourId = dgvSchedule->Rows[selectedRowIndex]->Cells[0]->Value->ToString();

	//Course^ p = Controller::QueryHourById(hourId);

	Controller::UpdateHour(p, selectedRowIndex, selectedColumnIndex, p->Name);

	//dgvSchedule->Rows[selectedRowIndex]->Cells[0] = p->Name;
	
	//for (int i = 0; i < dgvSchedule->RowCount - 1; i++) {
		//String^ hora = dgvSchedule->Rows[i]->Cells[0]->Value->ToString();
		//if (p->Id == productId) {
		//	//RefreshTotalAmounts();
		//	ShowHours();
		//	return;
		//}
	//}
	//dgvSchedule->Rows->Add(gcnew array<String^> {p->getId()),
	//		p->Name,
	//		Convert::ToString(p->PriceMin),
	//		"1",
	//		Convert::ToString(p->PriceMin)
	//});
	////RefreshTotalAmounts();
	ShowHours();
}

};
}


