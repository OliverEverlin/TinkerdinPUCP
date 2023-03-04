#include "pch.h"
#include "CourseSearchForm.h"
//#include "CourseForm.h"

System::Void TinkerdinView::CourseSearchForm::dgvCourse_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ courseId = dgvCourses->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Course^ p = Controller::QueryCourseById(courseId);
		/*if (refCform->GetType() == CourseForm::typeid)
			((CourseForm^)refCform)->AddCourseToSchedule(p);
	}*/
	}
	this->Close();
}
