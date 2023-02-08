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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductIdGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductNameGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPriceMinGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductPriceMajGrid;
	private: System::Windows::Forms::FontDialog^ fontDialog1;

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
			this->ProductIdGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductNameGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPriceMinGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductPriceMajGrid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->btnUpdateCourse = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerParcial = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelCourseParfcialExam = (gcnew System::Windows::Forms::Label());
			this->labelCourseFinalExam = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFinal = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbCourseType
			// 
			this->cmbCourseType->FormattingEnabled = true;
			this->cmbCourseType->Location = System::Drawing::Point(137, 99);
			this->cmbCourseType->Margin = System::Windows::Forms::Padding(4);
			this->cmbCourseType->Name = L"cmbCourseType";
			this->cmbCourseType->Size = System::Drawing::Size(373, 24);
			this->cmbCourseType->TabIndex = 47;
			// 
			// txtCourseHorario
			// 
			this->txtCourseHorario->Location = System::Drawing::Point(137, 194);
			this->txtCourseHorario->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseHorario->Multiline = true;
			this->txtCourseHorario->Name = L"txtCourseHorario";
			this->txtCourseHorario->Size = System::Drawing::Size(373, 43);
			this->txtCourseHorario->TabIndex = 44;
			// 
			// txtCourseProfesor
			// 
			this->txtCourseProfesor->Location = System::Drawing::Point(137, 143);
			this->txtCourseProfesor->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseProfesor->Name = L"txtCourseProfesor";
			this->txtCourseProfesor->Size = System::Drawing::Size(373, 22);
			this->txtCourseProfesor->TabIndex = 43;
			// 
			// labelCouseHours
			// 
			this->labelCouseHours->AutoSize = true;
			this->labelCouseHours->Location = System::Drawing::Point(37, 191);
			this->labelCouseHours->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCouseHours->Name = L"labelCouseHours";
			this->labelCouseHours->Size = System::Drawing::Size(55, 16);
			this->labelCouseHours->TabIndex = 42;
			this->labelCouseHours->Text = L"Horario:";
			// 
			// labelCourseProfessor
			// 
			this->labelCourseProfessor->AutoSize = true;
			this->labelCourseProfessor->Location = System::Drawing::Point(37, 143);
			this->labelCourseProfessor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseProfessor->Name = L"labelCourseProfessor";
			this->labelCourseProfessor->Size = System::Drawing::Size(61, 16);
			this->labelCourseProfessor->TabIndex = 41;
			this->labelCourseProfessor->Text = L"Profesor:";
			// 
			// txtCourseName
			// 
			this->txtCourseName->Location = System::Drawing::Point(138, 57);
			this->txtCourseName->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseName->Name = L"txtCourseName";
			this->txtCourseName->Size = System::Drawing::Size(372, 22);
			this->txtCourseName->TabIndex = 36;
			// 
			// txtCourseId
			// 
			this->txtCourseId->Location = System::Drawing::Point(138, 27);
			this->txtCourseId->Margin = System::Windows::Forms::Padding(4);
			this->txtCourseId->Name = L"txtCourseId";
			this->txtCourseId->Size = System::Drawing::Size(372, 22);
			this->txtCourseId->TabIndex = 35;
			// 
			// labelCourseName
			// 
			this->labelCourseName->AutoSize = true;
			this->labelCourseName->Location = System::Drawing::Point(37, 57);
			this->labelCourseName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseName->Name = L"labelCourseName";
			this->labelCourseName->Size = System::Drawing::Size(59, 16);
			this->labelCourseName->TabIndex = 30;
			this->labelCourseName->Text = L"Nombre:";
			// 
			// labelCourse
			// 
			this->labelCourse->AutoSize = true;
			this->labelCourse->Location = System::Drawing::Point(37, 27);
			this->labelCourse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourse->Name = L"labelCourse";
			this->labelCourse->Size = System::Drawing::Size(59, 16);
			this->labelCourse->TabIndex = 29;
			this->labelCourse->Text = L"Id Curso:";
			// 
			// labelCourseType
			// 
			this->labelCourseType->AutoSize = true;
			this->labelCourseType->Location = System::Drawing::Point(37, 101);
			this->labelCourseType->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseType->Name = L"labelCourseType";
			this->labelCourseType->Size = System::Drawing::Size(38, 16);
			this->labelCourseType->TabIndex = 57;
			this->labelCourseType->Text = L"Tipo:";
			// 
			// labelCourseExamDates
			// 
			this->labelCourseExamDates->AutoSize = true;
			this->labelCourseExamDates->Location = System::Drawing::Point(37, 265);
			this->labelCourseExamDates->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseExamDates->Name = L"labelCourseExamDates";
			this->labelCourseExamDates->Size = System::Drawing::Size(123, 16);
			this->labelCourseExamDates->TabIndex = 59;
			this->labelCourseExamDates->Text = L"Días de examenes:";
			// 
			// dgvCourse
			// 
			this->dgvCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ProductIdGrid,
					this->ProductNameGrid, this->ProductPriceMinGrid, this->ProductPriceMajGrid
			});
			this->dgvCourse->Location = System::Drawing::Point(40, 419);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(4);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(596, 162);
			this->dgvCourse->TabIndex = 64;
			this->dgvCourse->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CourseForm::dgvCourse_CellContentClick);
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
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(439, 364);
			this->btnDeleteCourse->Margin = System::Windows::Forms::Padding(4);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(197, 28);
			this->btnDeleteCourse->TabIndex = 63;
			this->btnDeleteCourse->Text = L"Eliminar";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
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
			// 
			// dateTimePickerParcial
			// 
			this->dateTimePickerParcial->Location = System::Drawing::Point(138, 308);
			this->dateTimePickerParcial->Name = L"dateTimePickerParcial";
			this->dateTimePickerParcial->Size = System::Drawing::Size(200, 22);
			this->dateTimePickerParcial->TabIndex = 65;
			// 
			// labelCourseParfcialExam
			// 
			this->labelCourseParfcialExam->AutoSize = true;
			this->labelCourseParfcialExam->Location = System::Drawing::Point(64, 308);
			this->labelCourseParfcialExam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseParfcialExam->Name = L"labelCourseParfcialExam";
			this->labelCourseParfcialExam->Size = System::Drawing::Size(52, 16);
			this->labelCourseParfcialExam->TabIndex = 66;
			this->labelCourseParfcialExam->Text = L"Parcial:";
			// 
			// labelCourseFinalExam
			// 
			this->labelCourseFinalExam->AutoSize = true;
			this->labelCourseFinalExam->Location = System::Drawing::Point(399, 308);
			this->labelCourseFinalExam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCourseFinalExam->Name = L"labelCourseFinalExam";
			this->labelCourseFinalExam->Size = System::Drawing::Size(39, 16);
			this->labelCourseFinalExam->TabIndex = 68;
			this->labelCourseFinalExam->Text = L"Final:";
			// 
			// dateTimePickerFinal
			// 
			this->dateTimePickerFinal->Location = System::Drawing::Point(457, 308);
			this->dateTimePickerFinal->Name = L"dateTimePickerFinal";
			this->dateTimePickerFinal->Size = System::Drawing::Size(200, 22);
			this->dateTimePickerFinal->TabIndex = 67;
			// 
			// CourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CourseForm";
			this->Text = L"CourseForm";
			this->Load += gcnew System::EventHandler(this, &CourseForm::CourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dgvCourse_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
