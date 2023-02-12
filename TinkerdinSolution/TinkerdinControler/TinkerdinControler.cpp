#include "pch.h"

#include "TinkerdinControler.h"
using namespace TinkerdinPersistance;

//CLIENTE WITH PERSIST. BINARIA -----------------------------------------
int TinkerdinControler::Controller::AddClient(Cliente^ client){
	clientList->Add(client);
    Persistance::PersistBinary("clients.bin", clientList);
	return client->code;
}

Cliente^ TinkerdinControler::Controller::QueryClientByUsername(String^ username){
    clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    for (int i = 0; i < clientList->Count; i++)
    	if (clientList[i]->Username == username)
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

List<String^>^ TinkerdinControler::Controller::QueryAllGender(){
    return genderList;
}

Cliente^ TinkerdinControler::Controller::QueryClientByCredentials(String^ username, String^ password){
    clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    for (int i = 0; i < clientList->Count; i++) {
        if (clientList[i]->Username == (username) &&
            clientList[i]->Password == (password)) {
            return clientList[i];
        }
    }
    return nullptr;
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
    return 1;// course->Id;
}

int TinkerdinControler::Controller::UpdateCourse(Course^ course)
{
    for (int i = 0; i < courseList->Count; i++)
        if (course->Id == courseList[i]->Id) {
            course->Status = 'A';
            courseList[i] = course;
            Persistance::PersistBinary("course.bin", courseList);
            return 1;// course->Id;
        }
    return 0;
}

int TinkerdinControler::Controller::DeleteCourse(String^ courseId)
{
    for (int i = 0; i < courseList->Count; i++)
        if (courseId == courseList[i]->Id) {
            courseList->RemoveAt(i);
            Persistance::PersistBinary("course.bin", courseList);
            return 1;// courseId;
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
    /*if (courseList == nullptr) {
        courseList = gcnew List<Course^>();
    }*/
    
    return courseList;
}

Course^ TinkerdinControler::Controller::QueryCourseById(String^ courseId)
{
    courseList = (List<Course^>^)Persistance::LoadBinaryData("course.bin");
    for (int i = 0; i < courseList->Count; i++)
        if (courseList[i]->Id == courseId)
            return courseList[i];
    return nullptr;
}

List<String^>^ TinkerdinControler::Controller::QueryAllTypeCourse()
{
    /*courseTypeList = (List<String^>^)Persistance::LoadBinaryData("typecourse.xml");
    if (courseList == nullptr) {
        courseList = gcnew List<Course^>();
    }*/
    return courseTypeList;
}

//COURSE FIN--------------------------------------------
// 
//PLACE------------------------------------
int TinkerdinControler::Controller::AddPlace(Place^ place)
{
    //place->Availability = 'A';
    placeList->Add(place);
    Persistance::PersistBinary("places.bin", placeList);
    return 1;
}

int TinkerdinControler::Controller::UpdatePlace(Place^ place)
{
    for (int i = 0; i < placeList->Count; i++)
        if (place->Id == placeList[i]->Id) {
            //place->Availability = 'A';
            placeList[i] = place;
            Persistance::PersistBinary("places.bin", placeList);
            return 1;
        }
    return 0;
}

int TinkerdinControler::Controller::DeletePlace(int placeId)
{
    for (int i = 0; i < placeList->Count; i++)
        if (placeId == placeList[i]->Id) {
            placeList->RemoveAt(i);
            Persistance::PersistBinary("places.bin", placeList);
            return 1;
        }
    return 0;
}

Place^ TinkerdinControler::Controller::QueryPlaceById(int placeId){
    placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");
    for (int i = 0; i < placeList->Count; i++)
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
    placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");


    return placeList;
}
//PLACE FIN//
//
//EVENT WITH PERSIST. BINARIA//
int TinkerdinControler::Controller::AddEvent(Event^ event)
{
    eventList->Add(event);
    Persistance::PersistBinary("events.bin", interestList);
    return event->Id;
}

Event^ TinkerdinControler::Controller::QueryEventById(int^ eventId)
{
    eventList = (List<Event^>^)Persistance::LoadBinaryData("events.bin");
    for (int i = 0; i < interestList->Count; i++)
        if (eventList[i]->Id == eventId)
            return eventList[i];
    return nullptr;
}

List<Event^>^ TinkerdinControler::Controller::QueryAllEvent()
{
    eventList = (List<Event^>^)Persistance::LoadBinaryData("events.bin");
    return eventList;
}

int TinkerdinControler::Controller::UpdateEvent(Event^ event)
{
    for (int i = 0; i < interestList->Count; i++)
        if (eventList[i]->Id == event->Id) {
            eventList[i] = event;
            Persistance::PersistBinary("events.bin", eventList);
            return event->Id;
        }
    return 0;
}

int TinkerdinControler::Controller::DeleteEvent(int eventId)
{
    for (int i = 0; i < eventList->Count; i++)
        if (eventList[i]->Id == eventId) {
            eventList->RemoveAt(i);
            Persistance::PersistBinary("events.bin", eventList);
            return eventId;
        }
    return 0;
}

//EVENT FIN//

//LoginForm
Cliente^ TinkerdinControler::Controller::Login(String^ username, String^ password)
{
    Cliente^ client;
    /*if (username == "AFlores" && password == "password") {
        client = gcnew Cliente();
        client->code = 1;
        client->Name = "Armando Flores";
    }
    return client;*/
    return QueryClientByCredentials(username, password);
}