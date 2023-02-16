#include "pch.h"
#include "CancelEventForm.h"

System::Void TinkerdinView::CancelEventForm::CancelEventForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	txtActualDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
}