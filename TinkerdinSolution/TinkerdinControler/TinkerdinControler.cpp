#include "pch.h"

#include "TinkerdinControler.h"
using namespace TinkerdinPersistance;

//CLIENTE WITH PERSIST. BINARIA -----------------------------------------
int TinkerdinControler::Controller::AddClient(Cliente^ client){
	clientList->Add(client);
    Persistance::PersistBinary("clients.bin", clientList);
	return client->code;
}

Cliente^ TinkerdinControler::Controller::QueryClientById(String^ clientId){
	clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    for (int i = 0; i < clientList->Count; i++)
		if (clientList[i]->Username == clientId)
			return clientList[i];
	return nullptr;
}

List<Cliente^>^ TinkerdinControler::Controller::QueryAllClients(){
	clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    List<Cliente^>^ clientActiveList = gcnew List<Cliente^>();
    for (int i = 0; i < clientList->Count; i++) {
        //pendiente de revisión:
        if (clientList[i]->Username != nullptr) {
            clientActiveList->Add(clientList[i]);
        }
    }
    /*
    eventList = (List<Event^>^)Persistance::LoadBinaryData("events.bin");
    return eventList;
    */
    //courseList = (List<Course^>^)Persistance::LoadBinaryData("course.bin");
    return clientList;
}

int TinkerdinControler::Controller::UpdateClient(Cliente^ client){  
    for (int i = 0; i < clientList->Count; i++) {
        if (client->Username == clientList[i]->Username) {

            //productList[i]->Name->Contains(value)
            clientList[i] = client;
            Persistance::PersistBinary("clients.bin", clientList);
            return 1;
        }
    }
    return 0;
}

int TinkerdinControler::Controller::DeleteClient(String^ username){	
    for (int i = 0; i < clientList->Count; i++)
        if (username == clientList[i]->Username) {
            clientList->RemoveAt(i);
            Persistance::PersistBinary("clients.bin", clientList);
            return 1;
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

Cliente^ TinkerdinControler::Controller::QueryClientByUsername(String^ username){
    clientList = (List<Cliente^>^)Persistance::LoadBinaryData("clients.bin");
    //Client^ myClient= gcnew 
    for (int i = 0; i < clientList->Count; i++)
        if (clientList[i]->Username->Contains(username))
            return clientList[i];
    return nullptr;
}

//ADMIN WITH PERSIST. BINARIA -----------------------------------------


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

List<Course^>^ TinkerdinControler::Controller::QueryCourseByName(String^ value)
{
    courseList = (List<Course^>^)Persistance::LoadBinaryData("course.bin");
    List<Course^>^ newCourseList = gcnew List<Course^>();
    for (int i = 0; i < courseList->Count; i++) {
        if (courseList[i]->Name->Contains(value))
            newCourseList->Add(courseList[i]);
    }
    return newCourseList;
}


Course^ TinkerdinControler::Controller::QueryCourseByName2(String^ username) {
    courseList = (List<Course^>^)Persistance::LoadBinaryData("course.bin");
    //Client^ myClient= gcnew 
    for (int i = 0; i < courseList->Count; i++)
        if (courseList[i]->Name->Contains(username))
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

//HOURS 
List<Hours^>^ TinkerdinControler::Controller::QueryAllHours()
{
    hoursList = (List<Hours^>^)Persistance::LoadData("hours.csv");
    return hoursList;
}
int TinkerdinControler::Controller::UpdateHour(Course^ course, int row, int column, String^ cour)
{
    hoursList = (List<Hours^>^)Persistance::LoadData("hours.csv");
    for (int i = 0; i < hoursList->Count; i++)
        if (hoursList[i]->Hour == hoursList[i]->Hour) {
            switch (column) {
            case 1:
                hoursList[i]->Monday = cour;
                break;
            case 2:
                hoursList[i]->Tuesday = cour;
                break;
            case 3:
                hoursList[i]->Wednesday = cour;
                break;
            case 4:
                hoursList[i]->Thursday = cour;
                break;
            case 5:
                hoursList[i]->Friday = cour;
                break;
            case 6:
                hoursList[i]->Saturday = cour;
                break;
            case 7:
                hoursList[i]->Sunday = cour;
                break;
            }

            //hoursList[i] = sche;
            Persistance::Persist("hours.csv", hoursList);
            return 1;// course->Id;
        }
    return 0;
}
Hours^ TinkerdinControler::Controller::QueryHourById(String^ hourId)
{
    hoursList = (List<Hours^>^)Persistance::LoadData("hours.csv");
    for (int i = 0; i < hoursList->Count; i++)
        if (hoursList[i]->Hour == hourId)
            return hoursList[i];
    return nullptr;
}
// HOURS FIN-----------------------------------------------


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
    placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");
    return placeList;
}
String^ TinkerdinControler::Controller::QueryPlaceByName(String^ placeLocation)
{
    
    placeList = (List<Place^>^)Persistance::LoadBinaryData("places.bin");
    for (int i = 0; i < placeList->Count; i++)
        if (placeList[i]->Location == Convert::ToString(placeLocation))
            return Convert::ToString(placeList[i]->Id);
    return nullptr;

}
//PLACE FIN//
//
//EVENT WITH PERSIST. BINARIA//
int TinkerdinControler::Controller::AddEvent(Event^ event)
{
    eventList->Add(event);
    Persistance::PersistBinary("events.bin", eventList);
    return event->Id;
}

Event^ TinkerdinControler::Controller::QueryEventById(int eventId)
{
    eventList = (List<Event^>^)Persistance::LoadBinaryData("events.bin");
    for (int i = 0; i < eventList->Count; i++) {
        if (eventList[i]->Id==(eventId))
            return eventList[i];
    }  
    return nullptr;
}

List<Event^>^ TinkerdinControler::Controller::QueryAllEvent()
{
    eventList = (List<Event^>^)Persistance::LoadBinaryData("events.bin");
    return eventList;
}

int TinkerdinControler::Controller::UpdateEvent(Event^ event)
{
    for (int i = 0; i < eventList->Count; i++)
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

List<String^>^ TinkerdinControler::Controller::QueryAllRelevance()
{
    return relevanceList;
}

int TinkerdinControler::Controller::QueryLastEventId()
{
    eventList = (List<Event^>^)Persistance::LoadBinaryData("Events.bin");
    if (eventList->Count == 0) return 0;
    else return eventList[eventList->Count - 1]->Id;
}

List<Event^>^ TinkerdinControler::Controller::QueryAllMyEvents(Cliente^c)
{
    //busco los eventos de mis amigos
    List<int>^ flist = gcnew List<int>();
    flist = c->EventList;
    int number;
    for (int i = 0; i < flist->Count; i++){
        number = flist[i];
        eventList->Add(QueryEventById(number));
    }
    Cliente^ temporalclient = gcnew Cliente();
    for (int i = 0; i < c->FriendList->Count; i++){
        temporalclient = QueryClientByUsername(c->FriendList[i]);
        //Busco dentro de todos sus eventos si me tiene 
        List<int>^ flist = gcnew List<int>();
        flist = c->EventList;
        int number;
        for (int i = 0; i < flist->Count; i++) {
            number = flist[i];
            eventList->Add(QueryEventById(number));
        }
    }
    return eventList;

}

int TinkerdinControler::Controller::AddAsistance(Asistance^ as){
    asistanceList->Add(as);
    Persistance::PersistBinary("asistance.bin", asistanceList);
    //return a->EventId;
    return 1;
}

int TinkerdinControler::Controller::UpdateAsistance(Asistance^ as)
{   
    for (int i = 0; i < asistanceList->Count; i++) {
        if (as->EventId == asistanceList[i]->EventId 
            && as->Username ==asistanceList[i]->Username) {

            asistanceList[i] = as;
            Persistance::PersistBinary("asistance.bin", asistanceList);
            return 1;
        }
    }
    return 0;
}

List<Asistance^>^ TinkerdinControler::Controller::QueryAsistancebyEventId(int eventId)
{
    asistanceList = (List<Asistance^>^)Persistance::LoadBinaryData("asistance.bin");
    List<Asistance^>^ eventAsistanceList= gcnew List<Asistance^>();
    for (int i = 0; i < asistanceList->Count; i++)
        if (asistanceList[i]->EventId == eventId)
            eventAsistanceList->Add(asistanceList[i]);
    return eventAsistanceList;
}

int TinkerdinControler::Controller::DeleteAsistance(int eventId)
{
    for (int i = 0; i < asistanceList->Count; i++)
        if (eventId == asistanceList[i]->EventId) {
            asistanceList->RemoveAt(i);
            Persistance::PersistBinary("asistance.bin", asistanceList);
            return 1;
        }
    return 0;
}



//EVENT FIN//

//LoginForm
Cliente^ TinkerdinControler::Controller::Login(String^ username, String^ password)
{
    //Cliente^ client;
    /*if (username == "AFlores" && password == "password") {
        client = gcnew Cliente();
        client->code = 1;
        client->Name = "Armando Flores";
    }
    return client;*/
    return QueryClientByCredentials(username, password);
}


//CRUD ADMIN---------------------------------------------------------

int TinkerdinControler::Controller::AddAdmin(Admin^ admin){
    adminList->Add(admin);
    Persistance::PersistBinary("admins.bin", adminList);
    return admin->code;
}

List<Admin^>^ TinkerdinControler::Controller::QueryAllAdmins(){
    adminList = (List<Admin^>^)Persistance::LoadBinaryData("admins.bin");
    //List<Admin^>^ adminActiveList = gcnew List<Admin^>();
    //for (int i = 0; i < clientList->Count; i++) {
    //    //pendiente de revisión:
    //    if (clientList[i]->Username != nullptr) {
    //        clientActiveList->Add(clientList[i]);
    //    }
    //}
    return adminList;
}

int TinkerdinControler::Controller::UpdateAdmin(Admin^ admin){
    for (int i = 0; i < adminList->Count; i++) {
        if (admin->Username == adminList[i]->Username) {
            adminList[i] = admin;
            Persistance::PersistBinary("admins.bin", adminList);
            return 1;
        }
    }
    return 0;
}

int TinkerdinControler::Controller::DeleteAdmin(String^ username){
    for (int i = 0; i < adminList->Count; i++)
        if (username == adminList[i]->Username) {
            adminList->RemoveAt(i);
            Persistance::PersistBinary("admin.bin", adminList);
            return 1;
        }
    return 0;
}

Admin^ TinkerdinControler::Controller::QueryAdminByCredentials(String^ username, String^ password){
    adminList = (List<Admin^>^)Persistance::LoadBinaryData("admins.bin");
    for (int i = 0; i < adminList->Count; i++) {
        if (adminList[i]->Username == (username) &&
            adminList[i]->Password == (password)) {
            return adminList[i];
        }
    }
    return nullptr;
}

Admin^ TinkerdinControler::Controller::QueryAdminByUsername(String^ username)
{
    adminList = (List<Admin^>^)Persistance::LoadBinaryData("admins.bin");
    for (int i = 0; i < adminList->Count; i++)
        if (adminList[i]->Username->Contains(username))
            return adminList[i];
    return nullptr;
}

Admin^ TinkerdinControler::Controller::LoginAdmin(String^ username, String^ password)
{
    return QueryAdminByCredentials(username, password);
}

//FIN ADMIN

//CRUD REPORT

int TinkerdinControler::Controller::AddReport(Report^ report)
{
    reportList->Add(report);
    Persistance::PersistBinary("reports.bin", reportList);
    return report->Id;
}

Report^ TinkerdinControler::Controller::QueryReportById(int reportId)
{
    reportList = (List<Report^>^)Persistance::LoadBinaryData("reports.bin");
    for (int i = 0; i < reportList->Count; i++) {
        if (reportList[i]->Id == (reportId))
            return reportList[i];
    }
    return nullptr;
}

Report^ TinkerdinControler::Controller::QueryReportByUsername(String^ reportByUsername)
{
    reportList = (List<Report^>^)Persistance::LoadBinaryData("reports.bin");
    for (int i = 0; i < reportList->Count; i++)
        if (reportList[i]->ReportedUsername->Contains(reportByUsername))
            return reportList[i];
    return nullptr;
}

List<Report^>^ TinkerdinControler::Controller::QueryAllReport()
{
    reportList = (List<Report^>^)Persistance::LoadBinaryData("reports.bin");
    return reportList;
}

List<Report^>^ TinkerdinControler::Controller::QueryAllReportByReportingUser(String^ user)
{
    reportList = (List<Report^>^)Persistance::LoadBinaryData("reports.bin");
    List<Report^>^ newReportList = gcnew List<Report^>();
    for (int i = 0; i < reportList->Count; i++) {
        if (reportList[i]->reporter->Contains(user))
            newReportList->Add(reportList[i]);
    }
    return newReportList;
}

List<Report^>^ TinkerdinControler::Controller::QueryAllReportByReportedUser(String^ username)
{
    reportList = (List<Report^>^)Persistance::LoadBinaryData("reports.bin");
    List<Report^>^ newReportList = gcnew List<Report^>();
    for (int i = 0; i < reportList->Count; i++) {
        if (reportList[i]->badUser->Contains(username))
            newReportList->Add(reportList[i]);
    }
    return newReportList;
}

int TinkerdinControler::Controller::UpdateReport(Report^ report)
{
    for (int i = 0; i < reportList->Count; i++)
        if (reportList[i]->Id == report->Id) {
            reportList[i] = report;
            Persistance::PersistBinary("reports.bin", reportList);
            return report->Id;
        }
    return 0;
}

int TinkerdinControler::Controller::DeleteReport(int eventId)
{
    for (int i = 0; i < reportList->Count; i++)
        if (reportList[i]->Id == eventId) {
            reportList->RemoveAt(i);
            Persistance::PersistBinary("reports.bin", reportList);
            return eventId;
        }
    return 0;
}

//FIN REPORT