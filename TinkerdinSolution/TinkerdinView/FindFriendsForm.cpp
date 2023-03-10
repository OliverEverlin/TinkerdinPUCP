#include "pch.h"
#include "FindFriendsForm.h"
#include "ReportClientForm.h"

#include "MainForm.h"
//Void SalesView::CustomerForm::RefreshClientsDGV(){
//	
//}
using namespace TinkerdinView;
using namespace System::Collections::Generic;

Void TinkerdinView::FindFriendsForm::RefreshClientsDGV(){
	List <Cliente^>^ clientList = Controller::QueryAllClients();
	dgvClients->Rows->Clear();
	for (int i = 0; i < clientList->Count; i++) {
		if (UseType == 'S') {
			if (clientList[i]->Username != me->Username) {
				dgvClients->Rows->Add(gcnew array<String^> {
					clientList[i]->Username,
						clientList[i]->Name,
						"" + clientList[i]->Age,
				});
			}
		}
		else {
			dgvClients->Rows->Add(gcnew array<String^> {
				clientList[i]->Username,
					clientList[i]->Name,
					"" + clientList[i]->Age,
			});
		}
		
		
	}
	return Void();
}

Void TinkerdinView::FindFriendsForm::dgvClients_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){
	

	if (dgvClients->CurrentCell != nullptr &&
		dgvClients->CurrentCell->Value != nullptr &&
		dgvClients->CurrentCell->Value->ToString() != "") {

		int selectedrowindex = dgvClients->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvClients->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		
		Cliente^ c = Controller::QueryClientByUsername(a);
		//MessageBox::Show(customer->ToString()); //Polimorfismo
		//if (customer != nullptr && customer->GetType() == Natural::typeid) 
		if (c != nullptr ) {
			if (UseType == 'R') {
				//?C?mo enviamos al formulario de la venta los datos del cliente?
				//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
				((ReportClientForm^)RefReportForm)->SetClient(c);
				this->Close();

			}
			else {
				txtAge->Text = "" + c->Age;
				txtCarrer->Text =  c->Carrer;
				txtCellPhone->Text = "" + c->Phone;
				txtCicle->Text = "" + c->Cicle;
				txtCode->Text = "" + c->Cicle;
				txtEmail->Text = c->Email;
				txtName->Text = c->Name;
				txtGender->Text = Convert::ToString(c->Gender);
				if (c->Photo != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(c->Photo);
					pbPhoto->Image = Image::FromStream(ms);
				}
				else {
					pbPhoto->Image = nullptr;
					pbPhoto->Invalidate();
				}

				/*txtPersonId->Text = "" + c->Id;
				rbtnMasc->Checked = dynamic_cast<Natural^>(customer)->Gender == 'M';
				rbtnFem->Checked = dynamic_cast<Natural^>(customer)->Gender == 'F';
				txtFirstName->Text = dynamic_cast<Natural^>(customer)->Name;
				txtLastName->Text = dynamic_cast<Natural^>(customer)->LastName;
				txtDNI->Text = dynamic_cast<Natural^>(customer)->DocNumber;
				txtEmail->Text = dynamic_cast<Natural^>(customer)->Email;
				txtAddress->Text = customer->Address;
				txtPhoneNumber->Text = customer->PhoneNumber;
				dtpBirthday->Value = DateTime::Parse(dynamic_cast<Natural^>(customer)->Birthday);
				txtPersonPoints->Text = "" + customer->CustomerPoints;*/
			}
		}
	}

}


