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
	/// Resumen de CourseChangeForm
	/// </summary>
	public ref class CourseChangeForm : public System::Windows::Forms::Form
	{

	public:
		property Form^ RefCourseForm1;

	public:
		CourseChangeForm(Form^ form)
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
		~CourseChangeForm()
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
	private: System::Windows::Forms::Button^ btnSaveCourse;

	private: System::Windows::Forms::Label^ labelCourse;
	private: System::Windows::Forms::Button^ btnDeleteCourse;

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
			this->btnSaveCourse = (gcnew System::Windows::Forms::Button());
			this->labelCourse = (gcnew System::Windows::Forms::Label());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtCourseId
			// 
			this->txtCourseId->Location = System::Drawing::Point(192, 44);
			this->txtCourseId->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseId->Name = L"txtCourseId";
			this->txtCourseId->Size = System::Drawing::Size(495, 22);
			this->txtCourseId->TabIndex = 73;
			// 
			// labelCourseParfcialExam
			// 
			this->labelCourseParfcialExam->AutoSize = true;
			this->labelCourseParfcialExam->Location = System::Drawing::Point(76, 298);
			this->labelCourseParfcialExam->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseParfcialExam->Name = L"labelCourseParfcialExam";
			this->labelCourseParfcialExam->Size = System::Drawing::Size(52, 16);
			this->labelCourseParfcialExam->TabIndex = 86;
			this->labelCourseParfcialExam->Text = L"Parcial:";
			// 
			// dateTimePickerParcial
			// 
			this->dateTimePickerParcial->Location = System::Drawing::Point(175, 298);
			this->dateTimePickerParcial->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerParcial->Name = L"dateTimePickerParcial";
			this->dateTimePickerParcial->Size = System::Drawing::Size(265, 22);
			this->dateTimePickerParcial->TabIndex = 85;
			// 
			// txtCourseName
			// 
			this->txtCourseName->Location = System::Drawing::Point(192, 81);
			this->txtCourseName->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseName->Name = L"txtCourseName";
			this->txtCourseName->Size = System::Drawing::Size(495, 22);
			this->txtCourseName->TabIndex = 74;
			// 
			// labelCourseFinalExam
			// 
			this->labelCourseFinalExam->AutoSize = true;
			this->labelCourseFinalExam->Location = System::Drawing::Point(496, 295);
			this->labelCourseFinalExam->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseFinalExam->Name = L"labelCourseFinalExam";
			this->labelCourseFinalExam->Size = System::Drawing::Size(39, 16);
			this->labelCourseFinalExam->TabIndex = 88;
			this->labelCourseFinalExam->Text = L"Final:";
			// 
			// labelCourseExamDates
			// 
			this->labelCourseExamDates->AutoSize = true;
			this->labelCourseExamDates->Location = System::Drawing::Point(40, 245);
			this->labelCourseExamDates->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseExamDates->Name = L"labelCourseExamDates";
			this->labelCourseExamDates->Size = System::Drawing::Size(123, 16);
			this->labelCourseExamDates->TabIndex = 81;
			this->labelCourseExamDates->Text = L"Días de examenes:";
			// 
			// txtCourseProfesor
			// 
			this->txtCourseProfesor->Location = System::Drawing::Point(191, 187);
			this->txtCourseProfesor->Margin = System::Windows::Forms::Padding(5);
			this->txtCourseProfesor->Name = L"txtCourseProfesor";
			this->txtCourseProfesor->Size = System::Drawing::Size(496, 22);
			this->txtCourseProfesor->TabIndex = 77;
			// 
			// labelCourseType
			// 
			this->labelCourseType->AutoSize = true;
			this->labelCourseType->Location = System::Drawing::Point(40, 138);
			this->labelCourseType->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseType->Name = L"labelCourseType";
			this->labelCourseType->Size = System::Drawing::Size(38, 16);
			this->labelCourseType->TabIndex = 80;
			this->labelCourseType->Text = L"Tipo:";
			// 
			// dateTimePickerFinal
			// 
			this->dateTimePickerFinal->Location = System::Drawing::Point(573, 295);
			this->dateTimePickerFinal->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerFinal->Name = L"dateTimePickerFinal";
			this->dateTimePickerFinal->Size = System::Drawing::Size(265, 22);
			this->dateTimePickerFinal->TabIndex = 87;
			// 
			// labelCourseProfessor
			// 
			this->labelCourseProfessor->AutoSize = true;
			this->labelCourseProfessor->Location = System::Drawing::Point(40, 190);
			this->labelCourseProfessor->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseProfessor->Name = L"labelCourseProfessor";
			this->labelCourseProfessor->Size = System::Drawing::Size(61, 16);
			this->labelCourseProfessor->TabIndex = 75;
			this->labelCourseProfessor->Text = L"Profesor:";
			// 
			// cmbCourseType
			// 
			this->cmbCourseType->FormattingEnabled = true;
			this->cmbCourseType->Location = System::Drawing::Point(191, 133);
			this->cmbCourseType->Margin = System::Windows::Forms::Padding(5);
			this->cmbCourseType->Name = L"cmbCourseType";
			this->cmbCourseType->Size = System::Drawing::Size(496, 24);
			this->cmbCourseType->TabIndex = 79;
			// 
			// labelCourseName
			// 
			this->labelCourseName->AutoSize = true;
			this->labelCourseName->Location = System::Drawing::Point(40, 84);
			this->labelCourseName->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourseName->Name = L"labelCourseName";
			this->labelCourseName->Size = System::Drawing::Size(59, 16);
			this->labelCourseName->TabIndex = 72;
			this->labelCourseName->Text = L"Nombre:";
			// 
			// btnSaveCourse
			// 
			this->btnSaveCourse->Location = System::Drawing::Point(175, 358);
			this->btnSaveCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnSaveCourse->Name = L"btnSaveCourse";
			this->btnSaveCourse->Size = System::Drawing::Size(261, 34);
			this->btnSaveCourse->TabIndex = 83;
			this->btnSaveCourse->Text = L"Guardar";
			this->btnSaveCourse->UseVisualStyleBackColor = true;
			this->btnSaveCourse->Click += gcnew System::EventHandler(this, &CourseChangeForm::btnSaveCourse_Click);
			// 
			// labelCourse
			// 
			this->labelCourse->AutoSize = true;
			this->labelCourse->Location = System::Drawing::Point(40, 47);
			this->labelCourse->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->labelCourse->Name = L"labelCourse";
			this->labelCourse->Size = System::Drawing::Size(59, 16);
			this->labelCourse->TabIndex = 71;
			this->labelCourse->Text = L"Id Curso:";
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(446, 358);
			this->btnDeleteCourse->Margin = System::Windows::Forms::Padding(5);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(263, 34);
			this->btnDeleteCourse->TabIndex = 84;
			this->btnDeleteCourse->Text = L"Cancelar";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			this->btnDeleteCourse->Click += gcnew System::EventHandler(this, &CourseChangeForm::btnDeleteCourse_Click);
			// 
			// CourseChangeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 442);
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
			this->Controls->Add(this->btnSaveCourse);
			this->Controls->Add(this->labelCourse);
			this->Controls->Add(this->btnDeleteCourse);
			this->Name = L"CourseChangeForm";
			this->Text = L"Mantenimiento Curso";
			this->Load += gcnew System::EventHandler(this, &CourseChangeForm::CourseChangeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDeleteCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	void FillCmbCourseType() {
		cmbCourseType->Items->Clear();
		List <String^>^ courseTypeList = Controller::QueryAllTypeCourse();
		for (int i = 0; i < courseTypeList->Count; i++) {
			//cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
			cmbCourseType->Items->Add(courseTypeList[i]);
		}
	}
	private: System::Void btnSaveCourse_Click(System::Object^ sender, System::EventArgs^ e) {
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

			btnSaveCourse->Enabled = true;
			//ShowCourses();

			CleanControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
			return;
		}

	}

	void CleanControls() {
		txtCourseId->Clear();
		txtCourseName->Clear();
		txtCourseProfesor->Clear();
		//txtCourseHorario->Clear();
		FillCmbCourseType();
	}
	private: System::Void CourseChangeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCmbCourseType();
	}
};
}
