#include "pch.h"

#include "TinkerdinControler.h"
using namespace TinkerdinPersistance;

//CLIENTE-----------------------------------------
int TinkerdinControler::Controller::AddClient(Cliente^ client)
{
	clientList->Add(client);
    Persistance::Persist("clients.txt", clientList);
	return client->code;
}

Cliente^ TinkerdinControler::Controller::QueryClientById(int^ clientId)
{
	//clientList = (List<Cliente^>^)Persistance::LoadBinary;
    //clientList = (List<Cliente^>^)Persistance::LoadData;
    for (int i = 0; i < clientList->Count; i++)
		if (clientList[i]->code == clientId)
			return clientList[i];
	return nullptr;
}

List<Cliente^>^ TinkerdinControler::Controller::QueryAllClients()
{
	//clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    clientList = (List<Cliente^>^)Persistance::LoadData("Clients.txt");
    return clientList;
}

int TinkerdinControler::Controller::UpdateClient(Cliente^ client)
{
	for (int i = 0; i < clientList->Count; i++)
	{
		if (clientList[i]->code == client->code) {
			clientList[i] = client;
			//añadir sus persistencia
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
			//añadir persisrtencia
			return ClientId;

		}

	}
	return 0;
}

//CLIENTE FIN--------------------------------------------
//COURSE-----------------------------------------------

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

//COURSE FIN--------------------------------------------
// 
//PLACE------------------------------------
int TinkerdinControler::Controller::AddPlace(Place^ place)
{
    place->Availability = 'A';
    placeList->Add(place);
    //persis
    return 1;
}

int TinkerdinControler::Controller::UpdatePlace(Place^ place)
{
    for (int i = 0; i < placeList->Count; i++)
        if (place->Id == placeList[i]->Id) {
            place->Availability = 'A';
            placeList[i] = place;
            //persis
            return 1;
        }
    return 0;
}

int TinkerdinControler::Controller::DeletePlace(int placeId)
{
    for (int i = 0; i < placeList->Count; i++)
        if (placeId == placeList[i]->Id) {
            placeList->RemoveAt(i);
            //presis
            return 1;
        }
    return 0;
}

Place^ TinkerdinControler::Controller::QueryPlaceById(int placeId){
    for (int i = 0; i < clientList->Count; i++)
        if (placeList[i]->Id == placeId)
            return placeList[i];
    return nullptr;
}

List<Place^>^ TinkerdinControler::Controller::QueryAllPlace()
{
    //List<Course^>^ placeActiveList = gcnew List<Place^>();
    //for (int i = 0; i < placeList->Count; i++) {
    //    //pendiente de revisión:
    //    if (placeList[i]->Status == 'A') {
    //        placeList->Add(placeList[i]);
    //    }
    //}
    return placeList;
}
//PLACE FIN//

//int tinkerdincontroler::controller::addinterest(interest^ interest)
//{
//	interestlist->add(interest);
//
//	return 1;
//}
//
//interest^ tinkerdincontroler::controller::queryinterestbyid(int^ interestid)
//{
//	//clientlist = (list<cliente^>^)persistance::loadbinary;
//	for (int i = 0; i < interestlist->count; i++)
//		if (interestlist[i]->code == interestid)
//			return interestlist[i];
//	return nullptr;
//}
//
//list<interest^>^ tinkerdincontroler::controller::queryallinterest()
//{
//	return interestlist;
//}
//
//int tinkerdincontroler::controller::updateinterest(interest^ interest)
//{
//	for (int i = 0; i < courselist->count; i++)
//		if (interest->id == interestlist[i]->id) {
//			interest->status = 'a';
//			interestlist[i] = interest;
//			return 1;
//		}
//	return 0;
//}
//
//int tinkerdincontroler::controller::deleteinterest(int interestid)
//{
//	for (int i = 0; i < interestlist->count; i++)
//	{
//		if (interestlist[i]->code == interestid)
//		{
//			interestlist->removeat(i);
//			return interestid;
//
//		}
//
//	}
//	return 0;
//}