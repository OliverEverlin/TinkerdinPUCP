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
		static Cliente^ me;
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
			this->DGVCourse->Location = System::Drawing::Point(98, 56);
			this->DGVCourse->Margin = System::Windows::Forms::Padding(4);
			this->DGVCourse->Name = L"DGVCourse";
			this->DGVCourse->RowHeadersWidth = 51;
			this->DGVCourse->Size = System::Drawing::Size(513, 274);
			this->DGVCourse->TabIndex = 4;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// Carrer
			// 
			this->Carrer->HeaderText = L"Tipo";
			this->Carrer->MinimumWidth = 6;
			this->Carrer->Name = L"Carrer";
			this->Carrer->Width = 125;
			// 
			// Cicle
			// 
			this->Cicle->HeaderText = L"Profesor";
			this->Cicle->MinimumWidth = 6;
			this->Cicle->Name = L"Cicle";
			this->Cicle->Width = 125;
			// 
			// VerCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 418);
			this->Controls->Add(this->DGVCourse);
			this->Margin = System::Windows::Forms::Padding(4);
			//this->Name = L"VerCourseForm";
			this->Text = L"Lista de cursos";
			this->Load += gcnew System::EventHandler(this, &VerCourseForm::VerCourseForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVCourse))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: Void SetClient(Cliente^ c) {
		this->me = c;
	}
	private: System::Void VerCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {

		RefreshCourseList();
	}
	public: void RefreshCourseList() {
		List <String^>^ cList = gcnew List <String^>();
		Course^ co = gcnew Course();
		cList = me->CourseList;
		for (int i = 0; i < cList->Count; i++) {
			//electivo2 = Controller::QueryCourseByName2(cList[i]);
			co = Controller::QueryCourseById(cList[i]);
			//co = Persistance::QueryCourseById(cList[i]);
			DGVCourse->Rows->Add(gcnew array<String^>{
				co->Name,
					"" + co->Type,
					"" + co->Professor
			});

		}
	}

	};

}