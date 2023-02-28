#pragma once
#include "FindCourseForm.h"

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
	/// Resumen de CourseClientForm
	/// </summary>
	public ref class CourseClientForm : public System::Windows::Forms::Form
	{
	public:
		CourseClientForm(void)
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
		~CourseClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_AddCourse;
	protected:
	private: System::Windows::Forms::Button^ btn_Delete_Course;
	private: System::Windows::Forms::DataGridView^ dgvCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
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
			this->btn_AddCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Delete_Course = (gcnew System::Windows::Forms::Button());
			this->dgvCourse = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_AddCourse
			// 
			this->btn_AddCourse->Location = System::Drawing::Point(55, 301);
			this->btn_AddCourse->Margin = System::Windows::Forms::Padding(5);
			this->btn_AddCourse->Name = L"btn_AddCourse";
			this->btn_AddCourse->Size = System::Drawing::Size(261, 34);
			this->btn_AddCourse->TabIndex = 74;
			this->btn_AddCourse->Text = L"Añadir";
			this->btn_AddCourse->UseVisualStyleBackColor = true;
			// 
			// btn_Delete_Course
			// 
			this->btn_Delete_Course->Location = System::Drawing::Point(395, 301);
			this->btn_Delete_Course->Margin = System::Windows::Forms::Padding(5);
			this->btn_Delete_Course->Name = L"btn_Delete_Course";
			this->btn_Delete_Course->Size = System::Drawing::Size(263, 34);
			this->btn_Delete_Course->TabIndex = 73;
			this->btn_Delete_Course->Text = L"Eliminar";
			this->btn_Delete_Course->UseVisualStyleBackColor = true;
			// 
			// dgvCourse
			// 
			this->dgvCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dgvCourse->Location = System::Drawing::Point(14, 58);
			this->dgvCourse->Margin = System::Windows::Forms::Padding(5);
			this->dgvCourse->Name = L"dgvCourse";
			this->dgvCourse->RowHeadersWidth = 51;
			this->dgvCourse->Size = System::Drawing::Size(681, 208);
			this->dgvCourse->TabIndex = 71;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 75;
			this->label1->Text = L"Mis cursos";
			// 
			// CourseClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 401);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_AddCourse);
			this->Controls->Add(this->btn_Delete_Course);
			this->Controls->Add(this->dgvCourse);
			this->Name = L"CourseClientForm";
			this->Text = L"CourseClientForm";
			this->Load += gcnew System::EventHandler(this, &CourseClientForm::CourseClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CourseClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
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

			btn_AddCourse->Enabled = false;
			btn_Delete_Course->Enabled = true;
		}
	}
	private: System::Void btnAddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (dgvCourse->CurrentCell != nullptr &&
				dgvCourse->CurrentCell->Value != nullptr &&
				dgvCourse->CurrentCell->Value->ToString() != "") {
				//FindCourseForm^ findcourseForm = gcnew FindCourseForm(this);
				//findcourseForm->ShowDialog();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Debe seleccionar un curso.");
			return;
		}
	}
};
}
