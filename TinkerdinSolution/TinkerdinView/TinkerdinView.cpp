#include "pch.h"
#include "MainForm.h"
#include "PlaceForm.h"
#include "CourseForm.h"
#include "CalendarForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//TinkerdinView::LoginForm form;
	TinkerdinView::MainForm form;
	Application::Run(% form);
	
    return 0;
}
