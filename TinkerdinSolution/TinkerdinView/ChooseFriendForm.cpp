#include "pch.h"
#include "ChooseFriendForm.h"
#include "RegisterEventForm.h"

System::Void TinkerdinView::ChooseFriendForm::dgvFriends_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*
	if (dgvFriends->CurrentCell != nullptr &&
		dgvFriends->CurrentCell->Value != nullptr &&
		dgvFriends->CurrentCell->Value->ToString() != "") {

		int selectedrowindex = dgvFriends->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvFriends->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		Cliente^ c = Controller::QueryClientByUsername(a);
		//MessageBox::Show(customer->ToString()); //Polimorfismo
		//if (customer != nullptr && customer->GetType() == Natural::typeid) 
		if (c != nullptr) {
			if (c->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(c->Photo);
				pbPhoto->Image = Image::FromStream(ms);
			}
			else {
				pbPhoto->Image = nullptr;
				pbPhoto->Invalidate();
			}

		}
	}*/

	//cuando le doy click se cierra y se muestra en la dgv friens de register event

	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ p = dgvFriends->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		if (refForm->GetType() == RegisterEventForm::typeid)
			//crear una funcion que agregue a mi lista de amigos
			((RegisterEventForm^)refForm)->AddMembersToList(p);
	}
	this->Close();
}

System::Void TinkerdinView::ChooseFriendForm::dgvFriends_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dgvFriends->CurrentCell != nullptr &&
		dgvFriends->CurrentCell->Value != nullptr &&
		dgvFriends->CurrentCell->Value->ToString() != "") {

		int selectedrowindex = dgvFriends->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvFriends->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		Cliente^ c = Controller::QueryClientByUsername(a);
		if (c->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(c->Photo);
			pbPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
		}
	}
	//return System::Void();
	//if (e->RowIndex < 0) return;
	//if (e->RowIndex >= 0) {
	//	String^ p = dgvFriends->Rows[e->RowIndex]->Cells[0]->Value->ToString();
	//	if (refForm->GetType() == RegisterEventForm::typeid)
	//		//crear una funcion que agregue a mi lista de amigos
	//		((RegisterEventForm^)refForm)->AddMembersToList(p);
	//}
	//this->Close();
	
}

System::Void TinkerdinView::ChooseFriendForm::AddtoEvent_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dgvFriends->CurrentCell != nullptr &&
		dgvFriends->CurrentCell->Value != nullptr &&
		dgvFriends->CurrentCell->Value->ToString() != "") {

		int selectedrowindex = dgvFriends->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvFriends->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		//aqui le seteo a mi form referenciado
		((RegisterEventForm^)refForm)->AddMembersToList(a);
		this->Close();
	}
	else
		MessageBox::Show("Debe seleccionar un amigo.");
}
