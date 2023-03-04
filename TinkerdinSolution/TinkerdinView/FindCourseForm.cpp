#include "pch.h"
#include "FindCourseForm.h"
#include "MainForm.h"
#include "ClientForm.h"
using namespace TinkerdinView;
using namespace System::Collections::Generic;


Void TinkerdinView::FindCourseForm::RefreshCoursesDGV() {
	List <Course^>^ courseList = Controller::QueryAllCourse();
	//List <Course^>^ courseList = Persistance::QueryAllCourse();
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

Void TinkerdinView::FindCourseForm::dgvCourse_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){

//aeaeae

if (dgvCourse->CurrentCell != nullptr &&
	dgvCourse->CurrentCell->Value != nullptr &&
	dgvCourse->CurrentCell->Value->ToString() != "") {

	int selectedrowindex = dgvCourse->SelectedCells[0]->RowIndex;
	DataGridViewRow^ selectedRow = dgvCourse->Rows[selectedrowindex];
	String^ a = selectedRow->Cells[0]->Value->ToString();


	Course^ c = Controller::QueryCourseByName2(a);
	//Course^ c = Persistance::QueryCourseByName2(a);
	//MessageBox::Show(customer->ToString()); //Polimorfismo
	//if (customer != nullptr && customer->GetType() == Natural::typeid) 
	if (c != nullptr) {
		if (/*UseType == 'R'*/0) {
			//¿Cómo enviamos al formulario de la venta los datos del cliente?
			//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
			//((ReportClientForm^)RefReportForm)->SetClient(c);
			//this->Close();

		}
		else {
			textFindCourseId->Text = "" + c->Id;//para convertirlo a string
			txtFindCourseName->Text = "" + c->Name;
			txtFindCourseProfe->Text = "" + c->Professor;
			txtFindCourseType->Text = "" + c->Type;
			textFindCourseExParc->Text = "" + c->Parcial;
			txtFindCourseExFin->Text = "" + c->Final;
		
	}
}

//aeaeae



		/*int selectedRowIndex = dgvCourse->SelectedCells[0]->RowIndex;
		if (e->RowIndex < 0)return;//Para que no retorne error ULTIMATE No sirve xd
		String^ courseId = dgvCourse->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
		Course^ p = Controller::QueryCourseById(courseId);
		//txtPlaceId->Text = "" + p->getId();
		textFindCourseId->Text = "" + p->Id;//para convertirlo a string
		txtFindCourseName->Text = "" + p->Name;
		txtFindCourseProfe->Text = "" + p->Professor;
		txtFindCourseType->Text = "" + p->Type;
		textFindCourseExParc->Text = "" + p->Parcial;
		txtFindCourseExFin->Text = "" + p->Final;
		//Una opcion es cambiar id a int, pero costará modificarlo
		*/
/*Void TinkerdinView::FindCourseForm::button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	//Agregar CURSO a la lista del cliente
	//Completar
	/*if (e->RowIndex > = 0) {
		String^ courseId = dgvCourse->Rows[e->RowIndex]->Cells[0]->Value->ToString();


	}
	Course^course=gcnew Course();
	course->Id = (textFindCourseId->Text);
	course->Name = txtFindCourseName->Text;
	((ClientForm^)refFindCourseForm)->AddToList(course);
	this->Close();

}*/
}
}