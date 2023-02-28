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
	/// Resumen de VerCourseForm
	/// </summary>
	public ref class VerCourseForm : public System::Windows::Forms::Form
	{
	public:
		VerCourseForm(void)
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
		~VerCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGVCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cicle;
	protected:

	protected:




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
			this->DGVCourse = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cicle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// DGVCourse
			// 
			this->DGVCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Name, this->Carrer,
					this->Cicle
			});
			this->DGVCourse->Location = System::Drawing::Point(27, 63);
			this->DGVCourse->Name = L"DGVCourse";
			this->DGVCourse->Size = System::Drawing::Size(385, 223);
			this->DGVCourse->TabIndex = 4;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			// 
			// Carrer
			// 
			this->Carrer->HeaderText = L"Tipo";
			this->Carrer->Name = L"Carrer";
			// 
			// Cicle
			// 
			this->Cicle->HeaderText = L"Profesor";
			this->Cicle->Name = L"Cicle";
			// 
			// VerCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 340);
			this->Controls->Add(this->DGVCourse);
			//this->Name = L"VerCourseForm";
			this->Text = L"VerCourseForm";
			this->Load += gcnew System::EventHandler(this, &VerCourseForm::VerCourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVCourse))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VerCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {

		RefreshCourseList();
	}
	public: void RefreshCourseList() {
		List <String^>^ electivoList = gcnew List <String^>();
		Cliente^ electivo = gcnew Cliente();
		Course^ electivo2 = gcnew Course();
		electivoList = electivo->CourseList;
		for (int i = 0; i < electivoList->Count; i++) {
			electivo2 = Controller::QueryCourseByName2(electivoList[i]);
			DGVCourse->Rows->Add(gcnew array<String^>{
				electivo2->Name,
					"" + electivo2->Type,
					"" + electivo2->Professor
			});

		}
	}
	

	};

}