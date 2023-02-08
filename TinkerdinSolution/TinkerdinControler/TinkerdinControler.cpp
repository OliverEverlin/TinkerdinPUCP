#include "pch.h"

#include "TinkerdinControler.h"
using namespace TinkerdinPersistance;

//CLIENTE WITH PERSIST. BINARIA -----------------------------------------
int TinkerdinControler::Controller::AddClient(Cliente^ client){
	clientList->Add(client);
    Persistance::PersistBinary("clients.bin", clientList);
	return client->code;
}

Cliente^ TinkerdinControler::Controller::QueryClientById(int^ clientId){
	clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    for (int i = 0; i < clientList->Count; i++)
		if (clientList[i]->code == clientId)
			return clientList[i];
	return nullptr;
}

List<Cliente^>^ TinkerdinControler::Controller::QueryAllClients(){
	clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    return clientList;
}

int TinkerdinControler::Controller::UpdateClient(Cliente^ client){
	for (int i = 0; i < clientList->Count; i++){
		if (clientList[i]->code == client->code) {
			clientList[i] = client;
            Persistance::PersistBinary("clients.bin", client);
            return client->code;
		}
	}
	return 0;
}

int TinkerdinControler::Controller::DeleteClient(int ClientId){	
	for (int i = 0; i < clientList->Count; i++){
		if (clientList[i]->code==ClientId){
			clientList->RemoveAt(i);
            Persistance::PersistBinary("clients.bin", clientList);
			return ClientId;
		}
	}
	return 0;
}

//List <String^>^ TinkerdinControler::Controller::QueryAllGender()
//{
//    //storeList=(List)
//    return courseTypeArr;
//}

//INTERES WITH PERSIST. BINARIA -----------------------------------------
int TinkerdinControler::Controller::AddInterest(Interest^ interest){
    interestList->Add(interest);
    Persistance::PersistBinary("interest.bin", interestList);
    return interest->Id;
}

Interest^ TinkerdinControler::Controller::QueryInterestById(int^ interestId){
    interestList = (List<Interest^>^)Persistance::LoadBinaryData("interest.bin");
    for (int i = 0; i < interestList->Count; i++)
        if (interestList[i]->Id == interestId)
            return interestList[i];
    return nullptr;
}

List<Interest^>^ TinkerdinControler::Controller::QueryAllInterest(){
    interestList = (List<Interest^>^)Persistance::LoadBinaryData("interest.bin");
    return interestList;
}

int TinkerdinControler::Controller::UpdateInterest(Interest^ interest){
    for (int i = 0; i < interestList->Count; i++)
        if (interestList[i]->Id == interest->Id) {
            interestList[i] = interest;
            Persistance::PersistBinary("interest.bin", interestList);
            return interest->Id;
    }
    return 0;
}

int TinkerdinControler::Controller::DeleteInterest(int interestId){
    for (int i = 0; i < interestList->Count; i++)
        if (interestList[i]->Id == interestId) {
            interestList->RemoveAt(i);
            Persistance::PersistBinary("interest.bin", interestList);
            return interestId;
        }
    return 0;
}

//INTEREST FIN--------------------------------------------


//COURSE-----------------------------------------------

int TinkerdinControler::Controller::AddCourse(Course^ course)
{
    course->Status = 'A';
    courseList->Add(course);
    Persistance::PersistBinary("course.bin", courseList);
    return course->Id;
}

int TinkerdinControler::Controller::UpdateCourse(Course^ course)
{
    for (int i = 0; i < courseList->Count; i++)
        if (course->Id == courseList[i]->Id) {
            course->Status = 'A';
            courseList[i] = course;
            Persistance::PersistBinary("course.bin", courseList);
            return course->Id;
        }
    return 0;
}

int TinkerdinControler::Controller::DeleteCourse(int courseId)
{
    for (int i = 0; i < courseList->Count; i++)
        if (courseId == courseList[i]->Id) {
            courseList->RemoveAt(i);
            Persistance::PersistBinary("course.bin", courseList);
            return courseId;
        }
    return 0;
}

List<Course^>^ TinkerdinControler::Controller::QueryAllCourse() {
    /*List<Course^>^ activeCourseList = gcnew List<Course^>();
    for (int i = 0; i < courseList->Count; i++) {
        if (courseList[i]->Status == 'A') {
            activeCourseList->Add(courseList[i]);
        }
    }*/

    courseList = (List<Course^>^)Persistance::LoadBinaryData("course.bin");
    
    return courseList;
}

Course^ TinkerdinControler::Controller::QueryCourseById(int courseId)
{
    courseList = (List<Course^>^)Persistance::LoadBinaryData("course.bin");
    for (int i = 0; i < courseList->Count; i++)
        if (courseList[i]->Id == courseId)
            return courseList[i];
    return nullptr;
}

List<String^>^ TinkerdinControler::Controller::QueryAllTypeCourse()
{
    courseTypeList = (List<String^>^)Persistance::LoadBinaryData("typecourse.bin");
    return courseTypeList;
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

