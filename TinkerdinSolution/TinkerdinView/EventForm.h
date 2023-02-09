#pragma once

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EventForm
	/// </summary>
	public ref class EventForm : public System::Windows::Forms::Form
	{
	public:
		EventForm(void)
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
		~EventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventRelevance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventPrivacy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ eventHour;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ txtDelete;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->eventId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventRelevance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventPrivacy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Relevance:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(453, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Privacy:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(453, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(453, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Hour:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(129, 170);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(232, 22);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(543, 43);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(235, 22);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(543, 110);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(235, 22);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(543, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(235, 22);
			this->textBox6->TabIndex = 11;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->eventId,
					this->eventName, this->eventRelevance, this->eventPrivacy, this->eventDate, this->eventHour
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 301);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(892, 198);
			this->dataGridView1->TabIndex = 12;
			// 
			// eventId
			// 
			this->eventId->HeaderText = L"Id";
			this->eventId->MinimumWidth = 6;
			this->eventId->Name = L"eventId";
			this->eventId->Width = 50;
			// 
			// eventName
			// 
			this->eventName->HeaderText = L"Name";
			this->eventName->MinimumWidth = 6;
			this->eventName->Name = L"eventName";
			this->eventName->Width = 200;
			// 
			// eventRelevance
			// 
			this->eventRelevance->HeaderText = L"Relevance";
			this->eventRelevance->MinimumWidth = 6;
			this->eventRelevance->Name = L"eventRelevance";
			this->eventRelevance->Width = 150;
			// 
			// eventPrivacy
			// 
			this->eventPrivacy->HeaderText = L"Privacy";
			this->eventPrivacy->MinimumWidth = 6;
			this->eventPrivacy->Name = L"eventPrivacy";
			this->eventPrivacy->Width = 150;
			// 
			// eventDate
			// 
			this->eventDate->HeaderText = L"Date";
			this->eventDate->MinimumWidth = 6;
			this->eventDate->Name = L"eventDate";
			this->eventDate->Width = 150;
			// 
			// eventHour
			// 
			this->eventHour->HeaderText = L"Hour";
			this->eventHour->MinimumWidth = 6;
			this->eventHour->Name = L"eventHour";
			this->eventHour->Width = 130;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(92, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(342, 247);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// txtDelete
			// 
			this->txtDelete->Location = System::Drawing::Point(592, 247);
			this->txtDelete->Name = L"txtDelete";
			this->txtDelete->Size = System::Drawing::Size(150, 33);
			this->txtDelete->TabIndex = 15;
			this->txtDelete->Text = L"Eliminar";
			this->txtDelete->UseVisualStyleBackColor = true;
			// 
			// EventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 511);
			this->Controls->Add(this->txtDelete);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EventForm";
			this->Text = L"EventForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

};
}
