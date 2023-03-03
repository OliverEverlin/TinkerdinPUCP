#include "pch.h"
#include "RegisterEventForm.h"

System::Void TinkerdinView::RegisterEventForm::btnAddEvent_Click(System::Object^ sender, System::EventArgs^ e)
{
	Event^ nEvent = gcnew Event();
	Cliente^ adviceMember = gcnew Cliente();
	List<Asistance^>^ memb = gcnew List<Asistance^>();
	Asistance^ imember = gcnew Asistance();

	try {
		if (txtEventName->Text == "") {
			MessageBox::Show("Es necesario definir un nombre al evento");
		}

		nEvent->Name = txtEventName->Text;
		nEvent->Hour = Convert::ToInt32(nudHour->Value);
		nEvent->minutes = Convert::ToInt32(nudMinute->Value);
		nEvent->Date = Convert::ToString(dtpEventDate->Value);
		nEvent->Relevance = cmbRelevance->SelectedItem->ToString();
		//provisional
		nEvent->Id = Convert::ToInt32(txtEventId->Text);


		for (int i = 0; i < dvgMembers->RowCount - 1; i++) {
			imember->Username = dvgMembers->Rows[i]->Cells[0]->Value->ToString();
			imember->confirmation = 'S';
			imember->EventId = Convert::ToInt32(txtEventId->Text);
			memb->Add(imember);
			//le agrego el id del evento a todos los miembros para que lo puedan ver
			adviceMember = Controller::QueryClientByUsername(imember->Username);


			if (adviceMember->EventList == nullptr) {
				//si no tiene la definicion de list se la creo 
				adviceMember->EventList = gcnew List<int>();
				Controller::UpdateClient(adviceMember);
			}
			adviceMember->EventList->Add(nEvent->Id);
			Controller::UpdateClient(adviceMember);
			/*
			S:Sin confirmar
			X:Cancelado
			C:Confirmado
			*/
		}
		if (memb->Count != 0) {
			nEvent->Members = memb;
		}
		adviceMember = Controller::QueryClientByUsername(user->Username);
		if (adviceMember->EventList == nullptr) {
			//si no tiene la definicion de list se la creo 
			adviceMember->EventList = gcnew List<int>();
			Controller::UpdateClient(adviceMember);
		}
		adviceMember->EventList->Add(nEvent->Id);
		Controller::UpdateClient(adviceMember);
		Controller::AddEvent(nEvent);


		//tengo que guardar dentro de cada usuario una lista de ids de los eventos
		MessageBox::Show("Evento guardado de manera exitosa");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Env�e el error al �rea de TI.");
		return;
	}
}
