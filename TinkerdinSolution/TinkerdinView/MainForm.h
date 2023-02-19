#pragma once
#include "CalendarForm.h"
#include "CourseForm.h"
#include "PlaceForm.h"
#include "ClientForm.h"
#include "LoginForm.h"
#include "EventForm.h"
#include "CRUDClientsForm.h"
#include "ReportForm.h"
#include "FindPlaceForm.h"
#include "TotalClientsForm.h"
#include "ReportClientForm.h"
#include "FriendsForm.h"

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
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		property Form^ RefReportUserForm;
		static Cliente^ client; //Variable de clase o miembro u atributo estático (global).
	private: System::Windows::Forms::ToolStripMenuItem^ reportarUnErrorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listaDeAmigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarCursoToolStripMenuItem;
	public:
		static Admin^ admin;
		MainForm(void)
		{
			//
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
	private: System::Windows::Forms::ToolStripMenuItem^ usersTSMI;











	private: System::Windows::Forms::ToolStripMenuItem^ amigosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ CourseTStripMenu;




	private: System::Windows::Forms::ToolStripMenuItem^ RegisterTStripMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eventosToolStripMenuItem;






	private: System::Windows::Forms::FontDialog^ fontDialog1;
	public: System::Windows::Forms::PictureBox^ pbPerfil;
	private:



	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;


	private: System::Windows::Forms::ToolStripMenuItem^ cRUDLugaresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteClientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportUserTSMI;










	private: System::Windows::Forms::ToolStripMenuItem^ eventsTSM1;

	private: System::Windows::Forms::ToolStripMenuItem^ encontrarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ placesTSM1;


	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AddEventsTSMI;






	private: System::Windows::Forms::ToolStripMenuItem^ misEventosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maintenanceTSM1;
	private: System::Windows::Forms::ToolStripMenuItem^ ModifyTSM1;
	private: System::Windows::Forms::ToolStripMenuItem^ RerportsAdminTSM1;





	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ascenderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem;
	//private: System::Windows::Forms::ToolStripMenuItem^ eventosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ funcionamientoToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtTruco;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->reportarUnErrorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usersTSMI = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CourseTStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportUserTSMI = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encontrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listaDeAmigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->placesTSM1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eventsTSM1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddEventsTSMI = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->misEventosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maintenanceTSM1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ascenderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ModifyTSM1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eventosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RerportsAdminTSM1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->funcionamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->pbPerfil = (gcnew System::Windows::Forms::PictureBox());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->txtTruco = (gcnew System::Windows::Forms::TextBox());
			this->agregarCursoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPerfil))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->archivoToolStripMenuItem,
					this->usersTSMI, this->placesTSM1, this->eventsTSM1, this->maintenanceTSM1, this->ModifyTSM1, this->RerportsAdminTSM1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(841, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->salirToolStripMenuItem,
					this->reportarUnErrorToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::salirToolStripMenuItem_Click);
			// 
			// reportarUnErrorToolStripMenuItem
			// 
			this->reportarUnErrorToolStripMenuItem->Name = L"reportarUnErrorToolStripMenuItem";
			this->reportarUnErrorToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->reportarUnErrorToolStripMenuItem->Text = L"Reportar un error";
			// 
			// usersTSMI
			// 
			this->usersTSMI->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->amigosToolStripMenuItem,
					this->CourseTStripMenu, this->reportUserTSMI, this->encontrarToolStripMenuItem, this->listaDeAmigosToolStripMenuItem, this->agregarCursoToolStripMenuItem
			});
			this->usersTSMI->Name = L"usersTSMI";
			this->usersTSMI->Size = System::Drawing::Size(64, 20);
			this->usersTSMI->Text = L"Usuarios";
			// 
			// amigosToolStripMenuItem
			// 
			this->amigosToolStripMenuItem->Name = L"amigosToolStripMenuItem";
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->amigosToolStripMenuItem->Text = L"Agregar amigos";
			this->amigosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::amigosToolStripMenuItem_Click);
			// 
			// CourseTStripMenu
			// 
			this->CourseTStripMenu->Name = L"CourseTStripMenu";
			this->CourseTStripMenu->Size = System::Drawing::Size(180, 22);
			this->CourseTStripMenu->Text = L"Cursos";
			this->CourseTStripMenu->Click += gcnew System::EventHandler(this, &MainForm::cursosToolStripMenuItem_Click);
			// 
			// reportUserTSMI
			// 
			this->reportUserTSMI->Name = L"reportUserTSMI";
			this->reportUserTSMI->Size = System::Drawing::Size(180, 22);
			this->reportUserTSMI->Text = L"Reportar usuario";
			this->reportUserTSMI->Click += gcnew System::EventHandler(this, &MainForm::reportarUsuarioToolStripMenuItem1_Click);
			// 
			// encontrarToolStripMenuItem
			// 
			this->encontrarToolStripMenuItem->Name = L"encontrarToolStripMenuItem";
			this->encontrarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->encontrarToolStripMenuItem->Text = L"Encontrar";
			// 
			// listaDeAmigosToolStripMenuItem
			// 
			this->listaDeAmigosToolStripMenuItem->Name = L"listaDeAmigosToolStripMenuItem";
			this->listaDeAmigosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->listaDeAmigosToolStripMenuItem->Text = L"Lista de amigos";
			this->listaDeAmigosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::listaDeAmigosToolStripMenuItem_Click);
			// 
			// placesTSM1
			// 
			this->placesTSM1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarToolStripMenuItem,
					this->editarToolStripMenuItem
			});
			this->placesTSM1->Name = L"placesTSM1";
			this->placesTSM1->Size = System::Drawing::Size(60, 20);
			this->placesTSM1->Text = L"Lugares";
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			this->buscarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::buscarToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->editarToolStripMenuItem->Text = L"Reportar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::editarToolStripMenuItem_Click);
			// 
			// eventsTSM1
			// 
			this->eventsTSM1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->AddEventsTSMI,
					this->misEventosToolStripMenuItem
			});
			this->eventsTSM1->Name = L"eventsTSM1";
			this->eventsTSM1->Size = System::Drawing::Size(60, 20);
			this->eventsTSM1->Text = L"Eventos";
			// 
			// AddEventsTSMI
			// 
			this->AddEventsTSMI->Name = L"AddEventsTSMI";
			this->AddEventsTSMI->Size = System::Drawing::Size(137, 22);
			this->AddEventsTSMI->Text = L"Agregar";
			this->AddEventsTSMI->Click += gcnew System::EventHandler(this, &MainForm::AddEventsTSMI_Click);
			// 
			// misEventosToolStripMenuItem
			// 
			this->misEventosToolStripMenuItem->Name = L"misEventosToolStripMenuItem";
			this->misEventosToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->misEventosToolStripMenuItem->Text = L"Mis eventos";
			// 
			// maintenanceTSM1
			// 
			this->maintenanceTSM1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->personalToolStripMenuItem,
					this->ascenderToolStripMenuItem, this->actualizarUsuarioToolStripMenuItem
			});
			this->maintenanceTSM1->Name = L"maintenanceTSM1";
			this->maintenanceTSM1->Size = System::Drawing::Size(101, 20);
			this->maintenanceTSM1->Text = L"Mantenimiento";
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->personalToolStripMenuItem->Text = L"Personal";
			// 
			// ascenderToolStripMenuItem
			// 
			this->ascenderToolStripMenuItem->Name = L"ascenderToolStripMenuItem";
			this->ascenderToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->ascenderToolStripMenuItem->Text = L"Ascender";
			// 
			// actualizarUsuarioToolStripMenuItem
			// 
			this->actualizarUsuarioToolStripMenuItem->Name = L"actualizarUsuarioToolStripMenuItem";
			this->actualizarUsuarioToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->actualizarUsuarioToolStripMenuItem->Text = L"Actualizar usuario";
			// 
			// ModifyTSM1
			// 
			this->ModifyTSM1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->clientesToolStripMenuItem,
					this->lugaresToolStripMenuItem, this->eventosToolStripMenuItem
			});
			this->ModifyTSM1->Name = L"ModifyTSM1";
			this->ModifyTSM1->Size = System::Drawing::Size(70, 20);
			this->ModifyTSM1->Text = L"Modificar";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::clientesToolStripMenuItem_Click);
			// 
			// lugaresToolStripMenuItem
			// 
			this->lugaresToolStripMenuItem->Name = L"lugaresToolStripMenuItem";
			this->lugaresToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->lugaresToolStripMenuItem->Text = L"Lugares";
			this->lugaresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::lugaresToolStripMenuItem_Click_1);
			// 
			// eventosToolStripMenuItem
			// 
			this->eventosToolStripMenuItem->Name = L"eventosToolStripMenuItem";
			this->eventosToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->eventosToolStripMenuItem->Text = L"Eventos";
			// 
			// RerportsAdminTSM1
			// 
			this->RerportsAdminTSM1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->clientesToolStripMenuItem1,
					this->lugaresToolStripMenuItem2, this->funcionamientoToolStripMenuItem
			});
			this->RerportsAdminTSM1->Name = L"RerportsAdminTSM1";
			this->RerportsAdminTSM1->Size = System::Drawing::Size(65, 20);
			this->RerportsAdminTSM1->Text = L"Reportes";
			// 
			// clientesToolStripMenuItem1
			// 
			this->clientesToolStripMenuItem1->Name = L"clientesToolStripMenuItem1";
			this->clientesToolStripMenuItem1->Size = System::Drawing::Size(161, 22);
			this->clientesToolStripMenuItem1->Text = L"Clientes";
			this->clientesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::clientesToolStripMenuItem1_Click);
			// 
			// lugaresToolStripMenuItem2
			// 
			this->lugaresToolStripMenuItem2->Name = L"lugaresToolStripMenuItem2";
			this->lugaresToolStripMenuItem2->Size = System::Drawing::Size(161, 22);
			this->lugaresToolStripMenuItem2->Text = L"Lugares";
			this->lugaresToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::lugaresToolStripMenuItem2_Click);
			// 
			// funcionamientoToolStripMenuItem
			// 
			this->funcionamientoToolStripMenuItem->Name = L"funcionamientoToolStripMenuItem";
			this->funcionamientoToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->funcionamientoToolStripMenuItem->Text = L"Funcionamiento";
			// 
			// pbPerfil
			// 
			this->pbPerfil->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pbPerfil->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPerfil.ErrorImage")));
			this->pbPerfil->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPerfil.InitialImage")));
			this->pbPerfil->Location = System::Drawing::Point(731, 27);
			this->pbPerfil->Name = L"pbPerfil";
			this->pbPerfil->Size = System::Drawing::Size(110, 103);
			this->pbPerfil->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPerfil->TabIndex = 5;
			this->pbPerfil->TabStop = false;
			this->pbPerfil->Click += gcnew System::EventHandler(this, &MainForm::pbPerfil_Click);
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// txtTruco
			// 
			this->txtTruco->Location = System::Drawing::Point(743, 136);
			this->txtTruco->Name = L"txtTruco";
			this->txtTruco->Size = System::Drawing::Size(86, 20);
			this->txtTruco->TabIndex = 11;
			this->txtTruco->TextChanged += gcnew System::EventHandler(this, &MainForm::txtTruco_TextChanged);
			// 
			// agregarCursoToolStripMenuItem
			// 
			this->agregarCursoToolStripMenuItem->Name = L"agregarCursoToolStripMenuItem";
			this->agregarCursoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->agregarCursoToolStripMenuItem->Text = L"Agregar curso";
			this->agregarCursoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::agregarCursoToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(841, 502);
			this->Controls->Add(this->txtTruco);
			this->Controls->Add(this->pbPerfil);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Tinkerdin";
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
		//Cliente^ a = gcnew Cliente();
		if (client != nullptr) {
			maintenanceTSM1->Visible=false;
			ModifyTSM1->Visible = false;
			RerportsAdminTSM1->Visible = false;

			txtTruco->Text = client->Username;
			if (client->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(client->Photo);
				pbPerfil->Image = Image::FromStream(ms);
			}
			else {
				pbPerfil->Image = nullptr;
				pbPerfil->Invalidate();
			}
		}
		if (admin != nullptr) {
			usersTSMI->Visible = false;
			placesTSM1->Visible = false;
			//reportsUserTSM1->Visible = false;

			maintenanceTSM1->Visible = true;
			ModifyTSM1->Visible = true;
			RerportsAdminTSM1->Visible = true;
			txtTruco->Text = admin->Username;
			
			if (admin->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(admin->Photo);
				pbPerfil->Image = Image::FromStream(ms);
			}
			else {
				pbPerfil->Image = nullptr;
				pbPerfil->Invalidate();
			}
		}
		


	}

	private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientForm^ clientForm = gcnew ClientForm();
		clientForm->MdiParent = this;
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
	private: System::Void cRUDClientsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CRUDClientsForm^ crudclients = gcnew CRUDClientsForm;
		crudclients->Show();
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		ReportForm^ reportForm = gcnew ReportForm();
		reportForm->MdiParent = this;
		reportForm->Show();

	}
private: System::Void adminToolStripMenuItem_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void hideAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void buscarLugarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void AddEventsTSMI_Click(System::Object^ sender, System::EventArgs^ e) {
	EventForm^ eventForm = gcnew EventForm();
	eventForm->MdiParent = this;
	eventForm->Show();
}
private: System::Void recervarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lugaresToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PlaceForm^ placeForm = gcnew PlaceForm();
	placeForm->Show();

}
private: System::Void buscarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FindPlaceForm^ findPlaceForm = gcnew FindPlaceForm();
	findPlaceForm->Show();
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportForm^ reportForm = gcnew ReportForm();
	reportForm->Show();
}
private: System::Void lugaresToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportForm^ reportForm = gcnew ReportForm();
	reportForm->Show();
}
private: System::Void clientesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	TotalClientsForm^ reportForm = gcnew TotalClientsForm();
	//reportForm->MdiParent = this;
	reportForm->Show();
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CRUDClientsForm^ crudclients = gcnew CRUDClientsForm;
	crudclients->Show();

}
private: System::Void pbPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtTruco_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
//private: System::Void reportarUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//	ReportClientForm^ report = gcnew ReportClientForm;
//	report->Show();
//}
private: System::Void reportarUsuarioToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportClientForm^ RefReportUserForm = gcnew ReportClientForm;
	//send the client 
	((ReportClientForm^)RefReportUserForm)->SetReporter(client);
	RefReportUserForm->Show();
}

private: System::Void amigosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FindFriendsForm^ findFriendsform = gcnew FindFriendsForm();
	//((FindFriendsForm^)findFriendsform)->SetUser(client);
	findFriendsform->Show();
}
private: System::Void listaDeAmigosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FriendsForm^ friendForm = gcnew FriendsForm();
	((FriendsForm^)friendForm)->SetClient(client);
	friendForm->Show();	
}
private: System::Void agregarCursoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Agregar curso
	FindFriendsForm^ findFriendsform = gcnew FindFriendsForm();
	//((FindFriendsForm^)findFriendsform)->SetUser(client);
	findFriendsform->Show();

}
};
}