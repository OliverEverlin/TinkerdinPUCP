#pragma once
#include "CalendarForm.h"
#include "CourseForm.h"
#include "PlaceForm.h"
#include "ClientForm.h"
#include "LoginForm.h"
#include "EventForm.h"
#include "PLACE_Form.h"
#include "ReportForm.h"

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

		static Cliente^ client; //Variable de clase o miembro u atributo est�tico (global).
		MainForm(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eventosToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::PictureBox^ pbPerfil;


	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	private: System::Windows::Forms::Button^ btnPlaces;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarUsuarioToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cRUDLugaresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteClientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ extrasToolStripMenuItem;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CourseTStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RegisterTStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eventosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->pbPerfil = (gcnew System::Windows::Forms::PictureBox());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->btnPlaces = (gcnew System::Windows::Forms::Button());
			this->extrasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPerfil))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->operacionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem,
					});
			//this->adminToolStripMenuItem, this->extrasToolStripMenuItem
			
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1121, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->amigosToolStripMenuItem,
					this->lugaresToolStripMenuItem, this->CourseTStripMenu, this->RegisterTStripMenu, this->loginToolStripMenuItem, this->eventosToolStripMenuItem,
					this->actualizarUsuarioToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// amigosToolStripMenuItem
			// 
			this->amigosToolStripMenuItem->Name = L"amigosToolStripMenuItem";
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->amigosToolStripMenuItem->Text = L"Amigos";
			// 
			// lugaresToolStripMenuItem
			// 
			this->lugaresToolStripMenuItem->Name = L"lugaresToolStripMenuItem";
			this->lugaresToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->lugaresToolStripMenuItem->Text = L"Lugares";
			this->lugaresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::lugaresToolStripMenuItem_Click);
			// 
			// CourseTStripMenu
			// 
			this->CourseTStripMenu->Name = L"CourseTStripMenu";
			this->CourseTStripMenu->Size = System::Drawing::Size(168, 22);
			this->CourseTStripMenu->Text = L"Cursos";
			this->CourseTStripMenu->Click += gcnew System::EventHandler(this, &MainForm::cursosToolStripMenuItem_Click);
			// 
			// RegisterTStripMenu
			// 
			this->RegisterTStripMenu->Name = L"RegisterTStripMenu";
			this->RegisterTStripMenu->Size = System::Drawing::Size(168, 22);
			this->RegisterTStripMenu->Text = L"Registro";
			this->RegisterTStripMenu->Click += gcnew System::EventHandler(this, &MainForm::registroToolStripMenuItem_Click);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::loginToolStripMenuItem_Click);
			// 
			// eventosToolStripMenuItem
			// 
			this->eventosToolStripMenuItem->Name = L"eventosToolStripMenuItem";
			this->eventosToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->eventosToolStripMenuItem->Text = L"Eventos";
			this->eventosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::eventosToolStripMenuItem_Click);
			// 
			// actualizarUsuarioToolStripMenuItem
			// 
			this->actualizarUsuarioToolStripMenuItem->Name = L"actualizarUsuarioToolStripMenuItem";
			this->actualizarUsuarioToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->actualizarUsuarioToolStripMenuItem->Text = L"Actualizar usuario";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarLugarToolStripMenuItem,
					this->buscarAmigosToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->operacionesToolStripMenuItem->Text = L"Buscar";
			// 
			// buscarLugarToolStripMenuItem
			// 
			this->buscarLugarToolStripMenuItem->Name = L"buscarLugarToolStripMenuItem";
			this->buscarLugarToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->buscarLugarToolStripMenuItem->Text = L"Llugares";
			// 
			// buscarAmigosToolStripMenuItem
			// 
			this->buscarAmigosToolStripMenuItem->Name = L"buscarAmigosToolStripMenuItem";
			this->buscarAmigosToolStripMenuItem->Size = System::Drawing::Size(147, 26);
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
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// reportarUsuarioToolStripMenuItem
			// 
			this->reportarUsuarioToolStripMenuItem->Name = L"reportarUsuarioToolStripMenuItem";
			this->reportarUsuarioToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->reportarUsuarioToolStripMenuItem->Text = L"Reportar Usuario";
			// 
			// lugarLibreToolStripMenuItem
			// 
			this->lugarLibreToolStripMenuItem->Name = L"lugarLibreToolStripMenuItem";
			this->lugarLibreToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->lugarLibreToolStripMenuItem->Text = L"Lugar Libre";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// Agenda
			// 
			this->Agenda->Location = System::Drawing::Point(103, 70);
			this->Agenda->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Agenda->Name = L"Agenda";
			this->Agenda->Size = System::Drawing::Size(100, 28);
			this->Agenda->TabIndex = 1;
			this->Agenda->Text = L"Agenda";
			this->Agenda->UseVisualStyleBackColor = true;
			this->Agenda->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// Estudiar
			// 
			this->Estudiar->Location = System::Drawing::Point(103, 149);
			this->Estudiar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Estudiar->Name = L"Estudiar";
			this->Estudiar->Size = System::Drawing::Size(100, 28);
			this->Estudiar->TabIndex = 2;
			this->Estudiar->Text = L"Estudiar";
			this->Estudiar->UseVisualStyleBackColor = true;
			this->Estudiar->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// Extrabtn
			// 
			this->Extrabtn->Location = System::Drawing::Point(80, 213);
			this->Extrabtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Extrabtn->Name = L"Extrabtn";
			this->Extrabtn->Size = System::Drawing::Size(160, 28);
			this->Extrabtn->TabIndex = 3;
			this->Extrabtn->Text = L"Otras actividades";
			this->Extrabtn->UseVisualStyleBackColor = true;
			// 
			// pbPerfil
			// 
			this->pbPerfil->Location = System::Drawing::Point(589, 57);
			this->pbPerfil->Name = L"pbPerfil";
			this->pbPerfil->Size = System::Drawing::Size(196, 213);
			this->pbPerfil->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPerfil->TabIndex = 5;
			this->pbPerfil->TabStop = false;
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// btnPlaces
			// 
			this->btnPlaces->Location = System::Drawing::Point(77, 266);
			this->btnPlaces->Name = L"btnPlaces";
			this->btnPlaces->Size = System::Drawing::Size(117, 47);
			this->btnPlaces->TabIndex = 7;
			this->btnPlaces->Text = L"Reportar Lugar";
			this->btnPlaces->UseVisualStyleBackColor = true;
			this->btnPlaces->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_2);
			// 
			// extrasToolStripMenuItem
			// 
			this->extrasToolStripMenuItem->Name = L"extrasToolStripMenuItem";
			this->extrasToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->extrasToolStripMenuItem->Text = L"Extras";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(841, 502);
			this->Controls->Add(this->btnPlaces);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pbPerfil);
			this->Controls->Add(this->Extrabtn);
			this->Controls->Add(this->Estudiar);
			this->Controls->Add(this->Agenda);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPerfil))->EndInit();
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
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();
	Cliente^ a = gcnew Cliente();
	
	if (a->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(a->Photo);
		pbPerfil->Image = Image::FromStream(ms);
	}
	else {
		pbPerfil->Image = nullptr;
		pbPerfil->Invalidate();
	}
	

}

private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientForm^ clientForm = gcnew ClientForm();
	clientForm -> MdiParent = this;
	clientForm->Show();

}
private: System::Void loginToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->MdiParent = this;
	loginForm->Show();
}
private: System::Void eventosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EventForm^ eventForm = gcnew EventForm();
	eventForm->MdiParent = this;
	eventForm->Show();
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	ReportForm^ reportForm = gcnew ReportForm();//Creo instancia
	reportForm->MdiParent = this;
	reportForm->Show();

}
};
}
