#include "pch.h"
#include "RegisterEventForm.h"

System::Void TinkerdinView::RegisterEventForm::btnAddEvent_Click(System::Object^ sender, System::EventArgs^ e)
{
	Event^ nEvent = gcnew Event();
	//Cliente^ adviceMember = gcnew Cliente();
	List<Asistance^>^ memb = gcnew List<Asistance^>();
	
	try {
		if (txtEventName->Text == "") {
			MessageBox::Show("Es necesario definir un nombre al evento");
		}
		/*
		Guardo evento
			datos clasicos
			lista de miembros
		Guardo evento para los asistentes y el que lo creo
			modifico en clientes la lista de id de eventos, con eso acceso a los asistentes tbm
			ojo en cada cliente incluyendome

		*/

		//guardo los datos al evento
		nEvent->Name = txtEventName->Text;
		nEvent->Hour = Convert::ToInt32(nudHour->Value);
		nEvent->minutes = Convert::ToInt32(nudMinute->Value);
		nEvent->Date = Convert::ToString(dtpEventDate->Value);
		nEvent->Relevance = cmbRelevance->SelectedItem->ToString();
		//provisional
		nEvent->Id = Convert::ToInt32(txtEventId->Text);
		nEvent->TypeEvent = "ESTUDIO"; //PROVISIONAL
		//AHORA LA LISTA DE MIEMBROS
		
		
		nEvent->Members = gcnew List<Asistance^>();//lo que añadi
		for (int i = 0; i < dvgMembers->RowCount-1; i++){
			Asistance^ imember = gcnew Asistance();
			imember->confirmation = "Por confirmar";
			imember->EventId = Convert::ToInt32(txtEventId->Text);
			imember->Username = dvgMembers->Rows[i]->Cells[0]->Value->ToString();
			nEvent->Members->Add(imember);
		}
		//agrego al mismo usario como miembro
		Asistance^ imember = gcnew Asistance();
		imember->Username = user->Username;
		imember->EventId = nEvent->Id;
		imember->confirmation = "Por confirmar";
		nEvent->Members->Add(imember);
		Controller::AddEvent(nEvent);

		//ahora modifico cada cliente para que tenga el id del evento
		for (int i = 0; i < nEvent->Members->Count; i++)
		{
			Cliente^ adviceMember = gcnew Cliente();
			adviceMember = Controller::QueryClientByUsername(nEvent->Members[i]->Username);
			adviceMember->EventList->Add(nEvent->Id);
			Controller::UpdateClient(adviceMember);

		}
		//tengo que guardar dentro de cada usuario una lista de ids de los eventos
		MessageBox::Show("Evento guardado de manera exitosa");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
		return;
	}
}
