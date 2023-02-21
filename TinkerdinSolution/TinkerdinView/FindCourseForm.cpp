#include "pch.h"
#include "FindCourseForm.h"
#include "MainForm.h"
#include "ClientForm.h"
using namespace TinkerdinView;
using namespace System::Collections::Generic;


Void TinkerdinView::FindCourseForm::RefreshCoursesDGV() {
	List <Course^>^ courseList = Controller::QueryAllCourse();
	dgvCourse->Rows->Clear();
	for (int i = 0; i < courseList->Count; i++) {
		dgvCourse->Rows->Add(gcnew array<String^> {
			courseList[i]->Name,
				courseList[i]->Professor,
				"" + courseList[i]->Type,
		});
	}
	return Void();
}
Void TinkerdinView::FindCourseForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Agregar CURSO a la lista del cliente
	//Completar
	/*if (e->RowIndex > = 0) {
		String^ courseId = dgvCourse->Rows[e->RowIndex]->Cells[0]->Value->ToString();


	}*/
	Course^course=gcnew Course();
	course->Id = (textFindCourseId->Text);
	course->Name = txtFindCourseName->Text;
	((ClientForm^)refForm)->AddToList(course);
	this->Close();

}