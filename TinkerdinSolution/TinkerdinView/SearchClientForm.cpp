#include "pch.h"
#include "SearchClientForm.h"

System::Void TinkerdinView::SearchClientForm::dgvClients_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}

/*

int selectedRowIndex = dgvClients->SelectedCells[0]->RowIndex;
	//codicion por si toco una celda vacia
	if (dgvClients->CurrentCell != nullptr &&
		dgvClients->CurrentCell->Value != nullptr &&
		dgvClients->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvClients->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvClients->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		String^ username = a;
		Cliente^ cust = Controller::QueryClientByUsername(username);
		if (cust != nullptr) {
			//chara para ver si lo uso como busqueda de amigos o busco a alguien para reportar
			if (1) {
				//((ReportClientForm^)RefReportForm)->SetClient(cust);
				this->Close();

			}
		}

	}



	//aqui termina lo nuevo que arme

	//int clientUsername = Convert::ToInt32(dgvClients->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	String^ clientUsername = dgvClients->Rows[selectedRowIndex]->Cells[0]->Value->ToString();
	Cliente^ c = Controller::QueryClientByUsername(clientUsername);
	txtUsername->Text = c->Username;
	txtName->Text = c->Name;
	txtAge->Text = "" + c->Age;
	txtEmail->Text = c->Email;
	txtCarrer->Text = c->Carrer;
	txtCicle->Text = "" + c->Cicle;
	txtCode->Text = "" + c->code;
	txtCellPhone->Text = "" + c->code;
	//Conversión de tipos
	if (c->Gender == 'M')	cmbGender->SelectedIndex = 0;
	if (c->Gender == 'F')	cmbGender->SelectedIndex = 1;
	if (c->Gender == 'O')	cmbGender->SelectedIndex = 2;

	if (c->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(c->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}

*/