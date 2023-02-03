#include "pch.h"

#include "TinkerdinControler.h"

int TinkerdinControler::Controller::AddClient(Cliente^ client)
{
	clientList->Add(client);

	return client->code;
}

Cliente^ TinkerdinControler::Controller::QueryClientById(int^ clientId)
{
	//clientList = (List<Cliente^>^)Persistance::LoadBinary;
	for (int i = 0; i < clientList->Count; i++)
		if (clientList[i]->code == clientId)
			return clientList[i];
	return nullptr;
		// TODO: Insertar una instrucci�n "return" aqu�
}

List<Cliente^>^ TinkerdinControler::Controller::QueryAllClients()
{
	//clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
	return clientList;
}

int TinkerdinControler::Controller::UpdateClient(Cliente^ client)
{
	for (int i = 0; i < clientList->Count; i++)
	{
		if (clientList[i]->code == client->code) {
			clientList[i] = client;
			//a�adir sus persistencia
			return client->code;

		}
	}
	return 0;
}

int TinkerdinControler::Controller::DeleteClient(int ClientId)
{	
	for (int i = 0; i < clientList->Count; i++)
	{
		if (clientList[i]->code==ClientId)
		{
			clientList->RemoveAt(i);
			//a�adir persisrtencia
			return ClientId;

		}

	}
	return 0;
}
int TinkerdinControler::Controller::AddCourse(Course^ course)
{
    course->Status = 'A';
    courseList->Add(course);
    return 1;
}

int TinkerdinControler::Controller::UpdateCourse(Course^ course)
{
    for (int i = 0; i < courseList->Count; i++)
        if (course->Id == courseList[i]->Id) {
            course->Status = 'A';
            courseList[i] = course;
            return 1;
        }
    return 0;
}

int TinkerdinControler::Controller::DeleteCourse(int courseId)
{
    for (int i = 0; i < courseList->Count; i++)
        if (courseId == courseList[i]->Id) {
            courseList[i]->Status = 'I';
            return 1;
        }
    return 0;
}

List<Course^>^ TinkerdinControler::Controller::QueryAllCourse() {
    List<Course^>^ activeCourseList = gcnew List<Course^>();
    for (int i = 0; i < courseList->Count; i++) {
        if (courseList[i]->Status == 'A') {
            activeCourseList->Add(courseList[i]);
        }
    }
    return activeCourseList;
}

int TinkerdinControler::Controller::AddPlace(Place^)
{
    return 0;
}

int TinkerdinControler::Controller::UpdatePlace(Place^)
{
    return 0;
}

int TinkerdinControler::Controller::DeletePlace(int placeId)
{
    return 0;
}

Place^ TinkerdinControler::Controller::QueryPlaceById(int placeId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci�n "return" aqu�
}

List<Place^>^ TinkerdinControler::Controller::QueryAllPlace()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci�n "return" aqu�
}

//int TinkerdinControler::Controller::AddInterest(Interest^ interest)
//{
//	interestList->Add(interest);
//
//	return 1;
//}
//
//Interest^ TinkerdinControler::Controller::QueryInterestById(int^ interestId)
//{
//	//clientList = (List<Cliente^>^)Persistance::LoadBinary;
//	for (int i = 0; i < interestList->Count; i++)
//		if (interestList[i]->code == interestId)
//			return interestList[i];
//	return nullptr;
//}
//
//List<Interest^>^ TinkerdinControler::Controller::QueryAllInterest()
//{
//	return interestList;
//}
//
//int TinkerdinControler::Controller::UpdateInterest(Interest^ interest)
//{
//	for (int i = 0; i < courseList->Count; i++)
//		if (interest->Id == interestList[i]->Id) {
//			interest->Status = 'A';
//			interestList[i] = interest;
//			return 1;
//		}
//	return 0;
//}
//
//int TinkerdinControler::Controller::DeleteInterest(int interestId)
//{
//	for (int i = 0; i < interestList->Count; i++)
//	{
//		if (interestList[i]->code == interestId)
//		{
//			interestList->RemoveAt(i);
//			return interestId;
//
//		}
//
//	}
//	return 0;
//}