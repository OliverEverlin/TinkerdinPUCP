#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections::Generic;
	using namespace TinkerdinModel;
	using namespace TinkerdinControler;

	/// <summary>
	/// Resumen de TotalClientsForm
	/// </summary>
	public ref class TotalClientsForm : public System::Windows::Forms::Form
	{
	public:
		TotalClientsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~TotalClientsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ClientsChart;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btnGender;

	private: System::Windows::Forms::Button^ btnAge;
	private: System::Windows::Forms::Button^ btnCicle;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->ClientsChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnCicle = (gcnew System::Windows::Forms::Button());
			this->btnGender = (gcnew System::Windows::Forms::Button());
			this->btnAge = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsChart))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ClientsChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->ClientsChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->ClientsChart->Legends->Add(legend1);
			this->ClientsChart->Location = System::Drawing::Point(12, 2);
			this->ClientsChart->Name = L"ClientsChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->ClientsChart->Series->Add(series1);
			this->ClientsChart->Size = System::Drawing::Size(456, 399);
			this->ClientsChart->TabIndex = 0;
			this->ClientsChart->Text = L"Tipos de usuarios";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->btnCicle);
			this->flowLayoutPanel1->Controls->Add(this->btnGender);
			this->flowLayoutPanel1->Controls->Add(this->btnAge);
			this->flowLayoutPanel1->Location = System::Drawing::Point(484, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(87, 134);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// btnCicle
			// 
			this->btnCicle->Location = System::Drawing::Point(3, 3);
			this->btnCicle->Name = L"btnCicle";
			this->btnCicle->Size = System::Drawing::Size(75, 23);
			this->btnCicle->TabIndex = 3;
			this->btnCicle->Text = L"Ciclo";
			this->btnCicle->UseVisualStyleBackColor = true;
			this->btnCicle->Click += gcnew System::EventHandler(this, &TotalClientsForm::btnCicle_Click);
			// 
			// btnGender
			// 
			this->btnGender->Location = System::Drawing::Point(3, 32);
			this->btnGender->Name = L"btnGender";
			this->btnGender->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->btnGender->Size = System::Drawing::Size(75, 23);
			this->btnGender->TabIndex = 0;
			this->btnGender->Text = L"Genero";
			this->btnGender->UseVisualStyleBackColor = true;
			this->btnGender->Click += gcnew System::EventHandler(this, &TotalClientsForm::btnGender_Click);
			// 
			// btnAge
			// 
			this->btnAge->Location = System::Drawing::Point(3, 61);
			this->btnAge->Name = L"btnAge";
			this->btnAge->Size = System::Drawing::Size(75, 23);
			this->btnAge->TabIndex = 2;
			this->btnAge->Text = L"Edad";
			this->btnAge->UseVisualStyleBackColor = true;
			this->btnAge->Click += gcnew System::EventHandler(this, &TotalClientsForm::btnAge_Click);
			// 
			// TotalClientsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 419);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->ClientsChart);
			this->Name = L"TotalClientsForm";
			this->Text = L"TotalClientsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsChart))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	/*private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}*/
private: System::Void btnGender_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Cliente^>^ clientList = Controller::QueryAllClients();
	ClientsChart->Series["Series1"]->Points->Clear();
	int quantityM = 0, quantityF = 0, quantityO = 0;
	for (int i = 0; i < clientList->Count; i++) {
		//ClientsChart->Series["Series1"]->Points->Add(1);
		if (clientList[i]->Gender == 'F') quantityF++;
		if (clientList[i]->Gender == 'M') quantityM++;
		if (clientList[i]->Gender == 'O') quantityO++;
	}
	
	ClientsChart->Series["Series1"]->Points->Add(quantityF);
	ClientsChart->Series["Series1"]->Points[0]->LegendText = "Mujeres";
	ClientsChart->Series["Series1"]->Points[0]->Label = Convert::ToString(quantityF);
	
	ClientsChart->Series["Series1"]->Points->Add(quantityM);
	ClientsChart->Series["Series1"]->Points[1]->LegendText = "Hombres";
	ClientsChart->Series["Series1"]->Points[1]->Label = Convert::ToString(quantityM);

	ClientsChart->Series["Series1"]->Points->Add(quantityO);
	ClientsChart->Series["Series1"]->Points[2]->LegendText = "Otros";
	ClientsChart->Series["Series1"]->Points[2]->Label = Convert::ToString(quantityO);
	
	}
private: System::Void btnAge_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Cliente^>^ clientList = Controller::QueryAllClients();
	//ClientsChart->Series["Series1"]->Points->RemoveAt(10);
	ClientsChart->Series["Series1"]->Points->Clear();
	List<int> listq;//gcnew List<int>()
	

	int quantity2025 = 0, quantity1520 = 0, quantity2530 = 0, qOthers=0;
	for (int i = 0; i < clientList->Count; i++) {
		if (clientList[i]->Age > 15 && clientList[i]->Age <= 20) quantity1520++;
		if (clientList[i]->Age > 20 && clientList[i]->Age <= 25) quantity2025++;
		if (clientList[i]->Age > 25 && clientList[i]->Age <= 30) quantity2530++;
		else qOthers++;
	}

	ClientsChart->Series["Series1"]->Points->Add(quantity1520);
	ClientsChart->Series["Series1"]->Points[0]->LegendText = "15 a 20 ";
	ClientsChart->Series["Series1"]->Points[0]->Label = Convert::ToString(quantity1520);

	ClientsChart->Series["Series1"]->Points->Add(quantity2025);
	ClientsChart->Series["Series1"]->Points[0]->LegendText = "20 a 25";
	ClientsChart->Series["Series1"]->Points[0]->Label = Convert::ToString(quantity2025);

	ClientsChart->Series["Series1"]->Points->Add(quantity2530);
	ClientsChart->Series["Series1"]->Points[1]->LegendText = "25 a 30";
	ClientsChart->Series["Series1"]->Points[1]->Label = Convert::ToString(quantity2530);

	ClientsChart->Series["Series1"]->Points->Add(qOthers);
	ClientsChart->Series["Series1"]->Points[2]->LegendText = "Mayores de 30";
	ClientsChart->Series["Series1"]->Points[2]->Label = Convert::ToString(qOthers);

	}
	private: System::Void btnCicle_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Cliente^>^ clientList = Controller::QueryAllClients();
		ClientsChart->Series["Series1"]->Points->Clear();
		array<int>^ cicleArr=gcnew array<int>(10);
		for (int u = 0; u < 10; u++) {
			cicleArr[u] = 0;
		}
		for (int i = 0; i < clientList->Count; i++) {
			for (int u = 0; u < 10; u++){
				if (clientList[i]->Cicle == u+1) cicleArr[u]=1 + cicleArr[u];
			}
		}
		int x = 0;
		for (int i = 0; i < 10; i++){
			if (cicleArr[i] != 0) {
				ClientsChart->Series["Series1"]->Points->Add(cicleArr[i]);
				ClientsChart->Series["Series1"]->Points[x]->LegendText = Convert::ToString(i + 1);
				ClientsChart->Series["Series1"]->Points[x]->Label = Convert::ToString(cicleArr[i]);
				x++;
			}
		}
	}
};
}

