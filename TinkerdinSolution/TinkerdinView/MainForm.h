#pragma once
#include "CalendarForm.h"
#include "CourseForm.h"
#include "PlaceForm.h"
#include "ClientForm.h"

namespace TinkerdinView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		static Cliente^ client; //Variable de clase o miembro u atributo estático (global).
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarLugarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarAmigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportarUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugarLibreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ amigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CourseTStripMenu;

	private: System::Windows::Forms::Button^ Agenda;
	private: System::Windows::Forms::Button^ Estudiar;
	private: System::Windows::Forms::Button^ Extrabtn;
	private: System::Windows::Forms::ToolStripMenuItem^ RegisterTStripMenu;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CourseTStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RegisterTStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarLugarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarAmigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportarUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugarLibreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Agenda = (gcnew System::Windows::Forms::Button());
			this->Estudiar = (gcnew System::Windows::Forms::Button());
			this->Extrabtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->operacionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1323, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->amigosToolStripMenuItem,
					this->lugaresToolStripMenuItem, this->CourseTStripMenu, this->RegisterTStripMenu
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// amigosToolStripMenuItem
			// 
			this->amigosToolStripMenuItem->Name = L"amigosToolStripMenuItem";
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->amigosToolStripMenuItem->Text = L"Amigos";
			// 
			// lugaresToolStripMenuItem
			// 
			this->lugaresToolStripMenuItem->Name = L"lugaresToolStripMenuItem";
			this->lugaresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lugaresToolStripMenuItem->Text = L"Lugares";
			this->lugaresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::lugaresToolStripMenuItem_Click);
			// 
			// CourseTStripMenu
			// 
			this->CourseTStripMenu->Name = L"CourseTStripMenu";
			this->CourseTStripMenu->Size = System::Drawing::Size(180, 22);
			this->CourseTStripMenu->Text = L"Cursos";
			this->CourseTStripMenu->Click += gcnew System::EventHandler(this, &MainForm::cursosToolStripMenuItem_Click);
			// 
			// RegisterTStripMenu
			// 
			this->RegisterTStripMenu->Name = L"RegisterTStripMenu";
			this->RegisterTStripMenu->Size = System::Drawing::Size(180, 22);
			this->RegisterTStripMenu->Text = L"Registro";
			this->RegisterTStripMenu->Click += gcnew System::EventHandler(this, &MainForm::registroToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarLugarToolStripMenuItem,
					this->buscarAmigosToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->operacionesToolStripMenuItem->Text = L"Buscar";
			// 
			// buscarLugarToolStripMenuItem
			// 
			this->buscarLugarToolStripMenuItem->Name = L"buscarLugarToolStripMenuItem";
			this->buscarLugarToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->buscarLugarToolStripMenuItem->Text = L"Llugares";
			// 
			// buscarAmigosToolStripMenuItem
			// 
			this->buscarAmigosToolStripMenuItem->Name = L"buscarAmigosToolStripMenuItem";
			this->buscarAmigosToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->buscarAmigosToolStripMenuItem->Text = L"Amigos";
			this->buscarAmigosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::buscarAmigosToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reportarUsuarioToolStripMenuItem,
					this->lugarLibreToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// reportarUsuarioToolStripMenuItem
			// 
			this->reportarUsuarioToolStripMenuItem->Name = L"reportarUsuarioToolStripMenuItem";
			this->reportarUsuarioToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->reportarUsuarioToolStripMenuItem->Text = L"Reportar Usuario";
			// 
			// lugarLibreToolStripMenuItem
			// 
			this->lugarLibreToolStripMenuItem->Name = L"lugarLibreToolStripMenuItem";
			this->lugarLibreToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->lugarLibreToolStripMenuItem->Text = L"Lugar Libre";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// Agenda
			// 
			this->Agenda->Location = System::Drawing::Point(612, 84);
			this->Agenda->Name = L"Agenda";
			this->Agenda->Size = System::Drawing::Size(75, 23);
			this->Agenda->TabIndex = 1;
			this->Agenda->Text = L"Agenda";
			this->Agenda->UseVisualStyleBackColor = true;
			this->Agenda->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// Estudiar
			// 
			this->Estudiar->Location = System::Drawing::Point(612, 133);
			this->Estudiar->Name = L"Estudiar";
			this->Estudiar->Size = System::Drawing::Size(75, 23);
			this->Estudiar->TabIndex = 2;
			this->Estudiar->Text = L"Estudiar";
			this->Estudiar->UseVisualStyleBackColor = true;
			this->Estudiar->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// Extrabtn
			// 
			this->Extrabtn->Location = System::Drawing::Point(590, 188);
			this->Extrabtn->Name = L"Extrabtn";
			this->Extrabtn->Size = System::Drawing::Size(120, 23);
			this->Extrabtn->TabIndex = 3;
			this->Extrabtn->Text = L"Otras actividades";
			this->Extrabtn->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1323, 502);
			this->Controls->Add(this->Extrabtn);
			this->Controls->Add(this->Estudiar);
			this->Controls->Add(this->Agenda);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buscarAmigosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cursosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CourseForm^ courseForm = gcnew CourseForm();
	courseForm->MdiParent = this;
	courseForm->Show();
}
private: System::Void lugaresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PlaceForm^ placeForm = gcnew PlaceForm();
	placeForm->MdiParent = this;
	placeForm->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientForm^ clientForm = gcnew ClientForm();
	clientForm -> MdiParent = this;
	clientForm->Show();

}
};
}
