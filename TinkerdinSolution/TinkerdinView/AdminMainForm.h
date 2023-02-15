//#pragma once
//
//namespace TinkerdinView {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Resumen de AdminAdminMainForm
//	/// </summary>
//	public ref class AdminAdminMainForm : public System::Windows::Forms::Form
//	{
//	public:
//		AdminAdminMainForm(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: agregar c�digo de constructor aqu�
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Limpiar los recursos que se est�n usando.
//		/// </summary>
//		~AdminAdminMainForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//
//	private:
//		/// <summary>
//		/// Variable del dise�ador necesaria.
//		/// </summary>
//		System::ComponentModel::Container ^components;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
//		/// el contenido de este m�todo con el editor de c�digo.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			this->SuspendLayout();
//			// 
//			// AdminAdminMainForm
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(284, 261);
//			this->Name = L"AdminAdminMainForm";
//			this->Text = L"AdminAdminMainForm";
//			this->Load += gcnew System::EventHandler(this, &AdminAdminMainForm::AdminAdminMainForm_Load);
//			this->ResumeLayout(false);
//
//		}
//#pragma endregion
//	private: System::Void AdminAdminMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
//	}
//	};
//}

#pragma once
#include "CalendarForm.h"
#include "CourseForm.h"
#include "PlaceForm.h"
#include "ClientForm.h"
#include "LoginForm.h"
#include "EventForm.h"
#include "CRUDClientsForm.h"
#include "ReportForm.h"

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

	/// <summary>
	/// Resumen de AdminMainForm
	/// </summary>
	public ref class AdminMainForm : public System::Windows::Forms::Form
	{
	public:

		static Cliente^ client; //Variable de clase o miembro u atributo est�tico (global).
		AdminMainForm(void)
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
		~AdminMainForm()
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








	private: System::Windows::Forms::ToolStripMenuItem^ amigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CourseTStripMenu;




	private: System::Windows::Forms::ToolStripMenuItem^ RegisterTStripMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eventosToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::PictureBox^ pbPerfil;


	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarUsuarioToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cRUDLugaresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteClientesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cRUDClientsToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ funcionamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem1;




	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cRUDClientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->pbPerfil = (gcnew System::Windows::Forms::PictureBox());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lugaresToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->funcionamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPerfil))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->adminToolStripMenuItem, this->lugaresToolStripMenuItem1, this->modificarToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(841, 24);
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
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->amigosToolStripMenuItem,
					this->lugaresToolStripMenuItem, this->CourseTStripMenu, this->RegisterTStripMenu, this->loginToolStripMenuItem, this->eventosToolStripMenuItem,
					this->actualizarUsuarioToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
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
			this->lugaresToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::lugaresToolStripMenuItem_Click);
			// 
			// CourseTStripMenu
			// 
			this->CourseTStripMenu->Name = L"CourseTStripMenu";
			this->CourseTStripMenu->Size = System::Drawing::Size(168, 22);
			this->CourseTStripMenu->Text = L"Cursos";
			this->CourseTStripMenu->Click += gcnew System::EventHandler(this, &AdminMainForm::cursosToolStripMenuItem_Click);
			// 
			// RegisterTStripMenu
			// 
			this->RegisterTStripMenu->Name = L"RegisterTStripMenu";
			this->RegisterTStripMenu->Size = System::Drawing::Size(168, 22);
			this->RegisterTStripMenu->Text = L"Registro";
			this->RegisterTStripMenu->Click += gcnew System::EventHandler(this, &AdminMainForm::registroToolStripMenuItem_Click);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::loginToolStripMenuItem_Click);
			// 
			// eventosToolStripMenuItem
			// 
			this->eventosToolStripMenuItem->Name = L"eventosToolStripMenuItem";
			this->eventosToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->eventosToolStripMenuItem->Text = L"Eventos";
			this->eventosToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::eventosToolStripMenuItem_Click);
			// 
			// actualizarUsuarioToolStripMenuItem
			// 
			this->actualizarUsuarioToolStripMenuItem->Name = L"actualizarUsuarioToolStripMenuItem";
			this->actualizarUsuarioToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->actualizarUsuarioToolStripMenuItem->Text = L"Actualizar usuario";
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cRUDClientsToolStripMenuItem,
					this->reportesToolStripMenuItem1
			});
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->adminToolStripMenuItem->Text = L"Modificar";
			// 
			// cRUDClientsToolStripMenuItem
			// 
			this->cRUDClientsToolStripMenuItem->Name = L"cRUDClientsToolStripMenuItem";
			this->cRUDClientsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cRUDClientsToolStripMenuItem->Text = L"Clientes";
			this->cRUDClientsToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMainForm::cRUDClientsToolStripMenuItem_Click);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 70);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Reportar Lugares";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMainForm::button1_Click_2);
			// 
			// lugaresToolStripMenuItem1
			// 
			this->lugaresToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->modificarToolStripMenuItem,
					this->lugaresToolStripMenuItem2, this->funcionamientosToolStripMenuItem
			});
			this->lugaresToolStripMenuItem1->Name = L"lugaresToolStripMenuItem1";
			this->lugaresToolStripMenuItem1->Size = System::Drawing::Size(65, 20);
			this->lugaresToolStripMenuItem1->Text = L"Reportes";
			// 
			// reportesToolStripMenuItem1
			// 
			this->reportesToolStripMenuItem1->Name = L"reportesToolStripMenuItem1";
			this->reportesToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->reportesToolStripMenuItem1->Text = L"Lugares";
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->modificarToolStripMenuItem->Text = L"Clientes";
			// 
			// modificarToolStripMenuItem1
			// 
			this->modificarToolStripMenuItem1->Name = L"modificarToolStripMenuItem1";
			this->modificarToolStripMenuItem1->Size = System::Drawing::Size(70, 20);
			this->modificarToolStripMenuItem1->Text = L"Modificar";
			// 
			// lugaresToolStripMenuItem2
			// 
			this->lugaresToolStripMenuItem2->Name = L"lugaresToolStripMenuItem2";
			this->lugaresToolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->lugaresToolStripMenuItem2->Text = L"Lugares";
			// 
			// funcionamientosToolStripMenuItem
			// 
			this->funcionamientosToolStripMenuItem->Name = L"funcionamientosToolStripMenuItem";
			this->funcionamientosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->funcionamientosToolStripMenuItem->Text = L"Funcionamiento";
			// 
			// AdminMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(841, 502);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbPerfil);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminMainForm";
			this->Text = L"AdminMainForm";
			this->Load += gcnew System::EventHandler(this, &AdminMainForm::AdminMainForm_Load);
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
	private: System::Void AdminMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
	};
}