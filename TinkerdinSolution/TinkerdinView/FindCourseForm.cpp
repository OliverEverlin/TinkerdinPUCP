#include "pch.h"
#include "FindCourseForm.h"
#include "MainForm.h"
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