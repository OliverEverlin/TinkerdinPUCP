#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TinkerdinPersistance;
using namespace TinkerdinModel;

namespace TinkerdinControler {
	public ref class Controller {
	private:
		//la persistencia la pongo en le Tpersistance
		static List<Cliente^>^ clientList = gcnew List<Cliente^>();
		static List<Admin^>^ adminList= gcnew List<Admin^>();
		//static List <Friend^>^ friendList = gcnew List <Friend^>();

		static List<Interest^>^ interestList=gcnew List<Interest^>();
		static List<Course^>^ courseList = gcnew List<Course^>();
		static List<Place^>^ placeList = gcnew List<Place^>();
		static List<Event^>^ eventList = gcnew List<Event^>();
		static List<Hours^>^ hoursList = gcnew List<Hours^>();

		//lista de opciones predeterminadas
		static array<String^>^ InterestArr = {"musica", "deporte", "jobi","academico"};
		static array<String^>^ genderArr = { "masculino", "femenino", "otros" };
		static array<String^>^ courseTypeArr = { "Curricular", "Extracurricular" };

		static List<String^>^ genderList = gcnew List<String^>(genderArr);
		static List <String^>^ courseTypeList = gcnew List<String^>(courseTypeArr);
		//static array<String^>^ courseTypeArr = { "Curricular", "Extracurricular" };


	public:
		// CRUD Cliente
		static int AddClient(Cliente^ client);
		static Cliente^ QueryClientById(String^ clientId);
		static List<Cliente^>^ QueryAllClients();
		static int UpdateClient(Cliente^ client);
		static int DeleteClient(String^ username);
		static List<String^>^ QueryAllGender();
		static Cliente^ QueryClientByCredentials(String^username,String^password);
		static Cliente^ QueryClientByUsername(String^ username);
		static Cliente^ Login(String^ username, String^ password);

		//CRUD Admin
		static int AddAdmin(Admin^ admin);
		static List<Admin^>^ QueryAllAdmins();
		static int UpdateAdmin(Admin^ admin);
		static int DeleteAdmin(String^ username);
		//static List<String^>^ QueryAllGender();
		static Admin^ QueryAdminByCredentials(String^ username, String^ password);
		static Admin^ QueryAdminByUsername(String^ username);
		static Admin^ LoginAdmin(String^ username, String^ password);

		//Métodos CRUD de Course
		static int AddCourse(Course^);
		static int UpdateCourse(Course^);
		static int DeleteCourse(String^ courseId);	//eliminar con codigo del curso	//¿añadimos tambien nombre????
		static List<Course^>^ QueryAllCourse();
		static Course^ QueryCourseById(String^ courseId);
		static List<Course^>^ QueryCourseByName(String^ value);
		static List<String^>^ QueryAllTypeCourse();
		//static Customer^ QueryCustomerById(int customerId);

		//Métodos CRUD de Hours
		static List<Hours^>^ QueryAllHours();
		static int UpdateHour(Course^ course, int row, int column, String^ cour);
		static Hours^ QueryHourById(String^ hourId);

		//Métodos CRUD de Place 
		static int AddPlace(Place^);
		static int UpdatePlace(Place^);
		static int DeletePlace(int placeId);
		static Place^ QueryPlaceById(int placeId);
		static List<Place^>^ QueryAllPlace();
		static String^ QueryPlaceByName(String^ placeLocation);

		//Metodos CRUD de Interest
		static int AddInterest(Interest^ interest);
		static Interest^ QueryInterestById(int^ interestId);
		static List<Interest^>^ QueryAllInterest();
		static int UpdateInterest(Interest^ interest);
		static int DeleteInterest(int interestId);

		//Metodos CRUD de Event
		static int AddEvent(Event^ event);
		static Event^ QueryEventById(int eventId);
		static List<Event^>^ QueryAllEvent();
		static int UpdateEvent(Event^ event);
		static int DeleteEvent(int eventId);

	};
}