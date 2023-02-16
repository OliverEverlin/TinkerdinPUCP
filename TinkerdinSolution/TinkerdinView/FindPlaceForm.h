#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TinkerdinControler;
	using namespace TinkerdinModel;
	using namespace TinkerdinPersistance;

	/// <summary>
	/// Resumen de FindPlaceForm
	/// </summary>
	public ref class FindPlaceForm : public System::Windows::Forms::Form
	{
	public:
		FindPlaceForm(void)
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
		~FindPlaceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;





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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column5, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(2, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(688, 300);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FindPlaceForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Lugar";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Piso ";
			this->Column5->Name = L"Column5";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Disponibilidad";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tomacorrientes";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo de lugar";
			this->Column4->Name = L"Column4";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->chart1->BorderlineColor = System::Drawing::Color::WhiteSmoke;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(696, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series1->Legend = L"Legend1";
			series1->Name = L"Tomacorrientes libres";
			series1->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(587, 329);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &FindPlaceForm::chart1_Click);
			// 
			// FindPlaceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 353);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"FindPlaceForm";
			this->Text = L"FindPlaceForm";
			this->Load += gcnew System::EventHandler(this, &FindPlaceForm::FindPlaceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	


	}
	private: System::Void FindPlaceForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Place^>^ placeList = Controller::QueryAllPlace();
		//Place^ placeList;
		placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");
		dataGridView1->Rows->Clear();
		for (int i = 0; i < placeList->Count; i++) {
			dataGridView1->Rows->Add(gcnew array<String^>{
					placeList[i]->Location,
					"" + placeList[i]->Availability,
					"" + placeList[i]->PowerOutlet,
					"" + placeList[i]->OptimumFloor,
					"" + placeList[i]->TypePlace
						//MODIFICARRRRRRRRRRRR

			});
		}


		//List<Place^>^ placeList = Controller::QueryAllPlace();
		for (int i = 0; i < placeList->Count; i++) {
			chart1->Series["Tomacorrientes libres"]->Points->Add(placeList[i]->PowerOutlet);
			chart1->Series["Tomacorrientes libres"]->Points[i]->AxisLabel = placeList[i]->Location;
			chart1->Series["Tomacorrientes libres"]->Points[i]->Label = Convert::ToString(placeList[i]->PowerOutlet);

		}










	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
