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

	using namespace Threading;

	/// <summary>
	/// Resumen de ScheduleForm
	/// </summary>
	public ref class ScheduleForm : public System::Windows::Forms::Form
	{
	public:
		property Form^ RefCourseForm;

	public:
		ScheduleForm()
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
		~ScheduleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvSchedule;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hour;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Monday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tuesday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ wednesday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ thursday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ friday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ saturday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sunday;


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
			this->dgvSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->Hour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Monday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tuesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wednesday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->thursday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->friday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->saturday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sunday = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvSchedule
			// 
			this->dgvSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSchedule->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Hour, this->Monday,
					this->Tuesday, this->wednesday, this->thursday, this->friday, this->saturday, this->sunday
			});
			this->dgvSchedule->Location = System::Drawing::Point(1, -3);
			this->dgvSchedule->Name = L"dgvSchedule";
			this->dgvSchedule->RowHeadersWidth = 51;
			this->dgvSchedule->RowTemplate->Height = 24;
			this->dgvSchedule->Size = System::Drawing::Size(1315, 582);
			this->dgvSchedule->TabIndex = 0;
			this->dgvSchedule->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ScheduleForm::dataGridView1_CellContentClick);
			// 
			// Hour
			// 
			this->Hour->HeaderText = L"Hora";
			this->Hour->MinimumWidth = 6;
			this->Hour->Name = L"Hour";
			this->Hour->ReadOnly = true;
			this->Hour->Width = 125;
			// 
			// Monday
			// 
			this->Monday->HeaderText = L"Lunes";
			this->Monday->MinimumWidth = 6;
			this->Monday->Name = L"Monday";
			this->Monday->Width = 125;
			// 
			// Tuesday
			// 
			this->Tuesday->HeaderText = L"Martes";
			this->Tuesday->MinimumWidth = 6;
			this->Tuesday->Name = L"Tuesday";
			this->Tuesday->Width = 125;
			// 
			// wednesday
			// 
			this->wednesday->HeaderText = L"Miercoles";
			this->wednesday->MinimumWidth = 6;
			this->wednesday->Name = L"wednesday";
			this->wednesday->Width = 125;
			// 
			// thursday
			// 
			this->thursday->HeaderText = L"Jueves";
			this->thursday->MinimumWidth = 6;
			this->thursday->Name = L"thursday";
			this->thursday->Width = 125;
			// 
			// friday
			// 
			this->friday->HeaderText = L"Viernes";
			this->friday->MinimumWidth = 6;
			this->friday->Name = L"friday";
			this->friday->Width = 125;
			// 
			// saturday
			// 
			this->saturday->HeaderText = L"Sábado";
			this->saturday->MinimumWidth = 6;
			this->saturday->Name = L"saturday";
			this->saturday->Width = 125;
			// 
			// sunday
			// 
			this->sunday->HeaderText = L"Domingo";
			this->sunday->MinimumWidth = 6;
			this->sunday->Name = L"sunday";
			this->sunday->Width = 125;
			// 
			// ScheduleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1311, 584);
			this->Controls->Add(this->dgvSchedule);
			this->Name = L"ScheduleForm";
			this->Text = L"Horario";
			this->Load += gcnew System::EventHandler(this, &ScheduleForm::ScheduleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ScheduleForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowHours();
	}

	void ShowHours() {
		List<Hours^>^ myHourList = Controller::QueryAllHours();

		dgvSchedule ->Rows->Clear();
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
	
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
