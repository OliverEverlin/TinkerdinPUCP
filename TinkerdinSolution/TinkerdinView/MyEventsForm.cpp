#include "pch.h"
#include "MyEventsForm.h"

System::Void TinkerdinView::MyEventsForm::MyEventsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	RefreshEventsList();
	//txtActualDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
}