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
	/// Resumen de CRUDCourseForm
	/// </summary>
	public ref class CRUDCourseForm : public System::Windows::Forms::Form
	{
	public:
		CRUDCourseForm(void)
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
		~CRUDCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtCourseId;
	protected:
	private: System::Windows::Forms::Label^ labelCourseParfcialExam;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerParcial;
	private: System::Windows::Forms::TextBox^ txtCourseName;
	private: System::Windows::Forms::Label^ labelCourseFinalExam;
	private: System::Windows::Forms::Label^ labelCourseExamDates;
	private: System::Windows::Forms::TextBox^ txtCourseProfesor;
	private: System::Windows::Forms::Label^ labelCourseType;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFinal;
	private: System::Windows::Forms::Label^ labelCourseProfessor;
	private: System::Windows::Forms::ComboBox^ cmbCourseType;
	private: System::Windows::Forms::Label^ labelCourseName;
	private: System::Windows::Forms::Button^ btnUpdateCourse;

	private: System::Windows::Forms::Label^ labelCourse;
	private: System::Windows::Forms::Button^ btnDeleteCourse;
	private: System::Windows::Forms::Button^ btn_AddCourse;

	private: System::Windows::Forms::DataGridView^ dgvCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;

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
			this->txtCourseId = (gcnew System::Windows::Forms::TextBox());
			this->labelCourseParfcialExam = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerParcial = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtCourseName = (gcnew System::Windows::Forms::TextBox());
			this->labelCourseFinalExam = (gcnew System::Windows::Forms::Label());
			this->labelCourseExamDates = (gcnew System::Windows::Forms::Label());
			this->txtCourseProfesor = (gcnew System::Windows::Forms::TextBox());
			this->labelCourseType = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelCourseProfessor = (gcnew System::Windows::Forms::Label());
			this->cmbCourseType = (gcnew System::Windows::Forms::ComboBox());
			this->labelCourseName = (gcnew System::Windows::Forms::Label());
			this->btnUpdateCourse = (gcnew System::Windows::Forms::Button());
			this->labelCourse = (gcnew System::Windows::Forms::Label());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->btn_AddCourse = (gcnew System::Windows::Forms::Button());
			this->dgvCourse = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// txtCourseId
			// 
			this->txtCourseId->Location = System::Drawing::Point(218, 49);
			this->txtCourseId->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseId->Name = L"txtCourseId";
			this->txtCourseId->Size = System::Drawing::Size(495, 22);
			this->txtCourseId->TabIndex = 91;
			// 
			// labelCourseParfcialExam
			// 
			this->labelCourseParfcialExam->AutoSize = true;
			this->labelCourseParfcialExam->Location = System::Drawing::Point(102, 303);
			this->labelCourseParfcialExam->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseParfcialExam->Name = L"labelCourseParfcialExam";
			this->labelCourseParfcialExam->Size = System::Drawing::Size(52, 16);
			this->labelCourseParfcialExam->TabIndex = 101;
			this->labelCourseParfcialExam->Text = L"Parcial:";
			// 
			// dateTimePickerParcial
			// 
			this->dateTimePickerParcial->Location = System::Drawing::Point(201, 303);
			this->dateTimePickerParcial->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerParcial->Name = L"dateTimePickerParcial";
			this->dateTimePickerParcial->Size = System::Drawing::Size(265, 22);
			this->dateTimePickerParcial->TabIndex = 100;
			// 
			// txtCourseName
			// 
			this->txtCourseName->Location = System::Drawing::Point(218, 86);
			this->txtCourseName->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseName->Name = L"txtCourseName";
			this->txtCourseName->Size = System::Drawing::Size(495, 22);
			this->txtCourseName->TabIndex = 92;
			// 
			// labelCourseFinalExam
			// 
			this->labelCourseFinalExam->AutoSize = true;
			this->labelCourseFinalExam->Location = System::Drawing::Point(522, 300);
			this->labelCourseFinalExam->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseFinalExam->Name = L"labelCourseFinalExam";
			this->labelCourseFinalExam->Size = System::Drawing::Size(39, 16);
			this->labelCourseFinalExam->TabIndex = 103;
			this->labelCourseFinalExam->Text = L"Final:";
			// 
			// labelCourseExamDates
			// 
			this->labelCourseExamDates->AutoSize = true;
			this->labelCourseExamDates->Location = System::Drawing::Point(66, 250);
			this->labelCourseExamDates->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseExamDates->Name = L"labelCourseExamDates";
			this->labelCourseExamDates->Size = System::Drawing::Size(123, 16);
			this->labelCourseExamDates->TabIndex = 97;
			this->labelCourseExamDates->Text = L"Días de examenes:";
			// 
			// txtCourseProfesor
			// 
			this->txtCourseProfesor->Location = System::Drawing::Point(217, 192);
			this->txtCourseProfesor->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseProfesor->Name = L"txtCourseProfesor";
			this->txtCourseProfesor->Size = System::Drawing::Size(496, 22);
			this->txtCourseProfesor->TabIndex = 94;
			// 
			// labelCourseType
			// 
			this->labelCourseType->AutoSize = true;
			this->labelCourseType->Location = System::Drawing::Point(66, 143);
			this->labelCourseType->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseType->Name = L"labelCourseType";
			this->labelCourseType->Size = System::Drawing::Size(38, 16);
			this->labelCourseType->TabIndex = 96;
			this->labelCourseType->Text = L"Tipo:";
			// 
			// dateTimePickerFinal
			// 
			this->dateTimePickerFinal->Location = System::Drawing::Point(599, 300);
			this->dateTimePickerFinal->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerFinal->Name = L"dateTimePickerFinal";
			this->dateTimePickerFinal->Size = System::Drawing::Size(265, 22);
			this->dateTimePickerFinal->TabIndex = 102;
			// 
			// labelCourseProfessor
			// 
			this->labelCourseProfessor->AutoSize = true;
			this->labelCourseProfessor->Location = System::Drawing::Point(66, 195);
			this->labelCourseProfessor->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseProfessor->Name = L"labelCourseProfessor";
			this->labelCourseProfessor->Size = System::Drawing::Size(61, 16);
			this->labelCourseProfessor->TabIndex = 93;
			this->labelCourseProfessor->Text = L"Profesor:";
			// 
			// cmbCourseType
			// 
			this->cmbCourseType->FormattingEnabled = true;
			this->cmbCourseType->Location = System::Drawing::Point(217, 138);
			this->cmbCourseType->Margin = System::Windows::Forms::Padding(5);
			this->cmbCourseType->Name = L"cmbCourseType";
			this->cmbCourseType->Size = System::Drawing::Size(496, 24);
			this->cmbCourseType->TabIndex = 95;
			// 
			// labelCourseName
			// 
			this->labelCourseName->AutoSize = true;
			this->labelCourseName->Location = System::Drawing::Point(66, 89);
			this->labelCourseName->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseName->Name = L"labelCourseName";
			this->labelCourseName->Size = System::Drawing::Size(59, 16);
			this->labelCourseName->TabIndex = 90;
			this->labelCourseName->Text = L"Nombre:";
			// 
			// btnUpdateCourse
			// 
			this->btnUpdateCourse->Location = System::Drawing::Point(332, 368);
			this->btnUpdateCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnUpdateCourse->Name = L"btnUpdateCourse";
			this->btnUpdateCourse->Size = System::Drawing::Size(261, 34);
			this->btnUpdateCourse->TabIndex = 98;
			this->btnUpdateCourse->Text = L"Modificar";
			this->btnUpdateCourse->UseVisualStyleBackColor = true;
			this->btnUpdateCourse->Click += gcnew System::EventHandler(this, &CRUDCourseForm::btnUpdateCourse_Click);
			// 
			// labelCourse
			// 
			this->labelCourse->AutoSize = true;
			this->labelCourse->Location = System::Drawing::Point(66, 52);
			this->labelCourse->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourse->Name = L"labelCourse";
			this->labelCourse->Size = System::Drawing::Size(59, 16);
			this->labelCourse->TabIndex = 89;
			this->labelCourse->Text = L"Id Curso:";
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(603, 368);
			this->btnDeleteCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(263, 34);
			this->btnDeleteCourse->TabIndex = 99;
			this->btnDeleteCourse->Text = L"Cancelar";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			this->btnDeleteCourse->Click += gcnew System::EventHandler(this, &CRUDCourseForm::btnDelete_Click);
			// 
			// btn_AddCourse
			// 
			this->btn_AddCourse->Location = System::Drawing::Point(61, 368);
			this->btn_AddCourse->Margin = System::Windows::Forms::Padding(5);
			this->btn_AddCourse->Name = L"btn_AddCourse";
			this->btn_AddCourse->Size = System::Drawing::Size(261, 34);
			this->btn_AddCourse->TabIndex = 104;
			this->btn_AddCourse->Text = L"Añadir";
			this->btn_AddCourse->UseVisualStyleBackColor = true;
			this->btn_AddCourse->Click += gcnew System::EventHandler(this, &CRUDCourseForm::btnAddCourse_Click);
			// 
			// dgvCourse
			// 
			this->dgvCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dgvCourse->Location = System::Drawing::Point(935, 59);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(5);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(528, 208);
			this->dgvCourse->TabIndex = 105;
			this->dgvCourse->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUDCourseForm::dgvCourse_CellClick);
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
			// CRUDCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1514, 468);
			this->Controls->Add(this->dgvCourse);
			this->Controls->Add(this->btn_AddCourse);
			this->Controls->Add(this->txtCourseId);
			this->Controls->Add(this->labelCourseParfcialExam);
			this->Controls->Add(this->dateTimePickerParcial);
			this->Controls->Add(this->txtCourseName);
			this->Controls->Add(this->labelCourseFinalExam);
			this->Controls->Add(this->labelCourseExamDates);
			this->Controls->Add(this->txtCourseProfesor);
			this->Controls->Add(this->labelCourseType);
			this->Controls->Add(this->dateTimePickerFinal);
			this->Controls->Add(this->labelCourseProfessor);
			this->Controls->Add(this->cmbCourseType);
			this->Controls->Add(this->labelCourseName);
			this->Controls->Add(this->btnUpdateCourse);
			this->Controls->Add(this->labelCourse);
			this->Controls->Add(this->btnDeleteCourse);
			this->Name = L"CRUDCourseForm";
			this->Text = L"CRUDCourseForm";
			this->Load += gcnew System::EventHandler(this, &CRUDCourseForm::CRUDCourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CRUDCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCmbCourseType();
		ShowCourses();
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
	void FillCmbCourseType() {
		cmbCourseType->Items->Clear();
		List <String^>^ courseTypeList = Controller::QueryAllTypeCourse();
		for (int i = 0; i < courseTypeList->Count; i++) {
			//cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
			cmbCourseType->Items->Add(courseTypeList[i]);
		}
	}
	void CleanControls() {
		txtCourseId->Clear();
		txtCourseName->Clear();
		txtCourseProfesor->Clear();
		//txtCourseHorario->Clear();
		FillCmbCourseType();
	}
	private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
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

			btn_AddCourse->Enabled = true;
			ShowCourses();
			CleanControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
			return;
		}
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCourseId->Text->Trim() == "") {
			MessageBox::Show("Debe seleccionar un producto");
			return;
		}
		Controller::DeleteCourse(txtCourseId->Text->Trim());
		CleanControls();
		ShowCourses();
	}
	private: System::Void btnUpdateCourse_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void dgvCourse_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvCourse->CurrentCell != nullptr &&
			dgvCourse->CurrentCell->Value != nullptr &&
			dgvCourse->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvCourse->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvCourse->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			String^ courseId = a;
			Course^ course = Controller::QueryCourseById(courseId);
			txtCourseId->Text = "" + course->Id;
			txtCourseName->Text = course->Name;


			for (int i = 0; i < cmbCourseType->Items->Count; i++) {
				//ComboBoxItem^ cmbi = ((ComboBoxItem^)cmbStore->Items[i]);
				//if (cmbi->Value == s->Store->Id) {
				if (cmbCourseType->Items[i]->ToString()->CompareTo(course->Type) == 0) {
					cmbCourseType->SelectedIndex = i;
					break;
				}
			}
			txtCourseProfesor->Text = course->Professor;
			dateTimePickerParcial->Value = DateTime::Parse(course->Parcial);
			dateTimePickerFinal->Value = DateTime::Parse(course->Final);

		}
	}
};
}
