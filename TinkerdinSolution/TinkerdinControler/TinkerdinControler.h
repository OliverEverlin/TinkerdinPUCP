//#pragma once
//
//using namespace System;
//
//namespace TinkerdinControler {
//	public ref class Class1
//	{
//		// TODO: Agregue aquí los métodos de esta clase.
//	};
//}
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TinkerdinModel;

namespace TinkerdinControler {
	public ref class Controller {
	private:
		static List<Cliente^>^ clientList=gcnew List<Cliente^>();
		//static List<Admin^>^ adminList;
		static List<Interest^>^ interestList=gcnew List<Interest^>();
		static List<Course^>^ courseList = gcnew List<Course^>();
		static List<Place^>^ placeList = gcnew List<Place^>();

	public:
		// TODO: Agregue aquí los métodos de esta clase.
		static int AddClient(Cliente^ client);
		static Cliente^ QueryClientById(int^ clientId);
		static List<Cliente^>^ QueryAllClients();
		static int UpdateClient(Cliente^ client);
		static int DeleteClient(int ClientId);
		//static List<Cliente^>^ QueryClientsByNameOrInterest(String^ name, String^ interest);
		

		//Métodos CRUD de Course
		static int AddCourse(Course^);
		static int UpdateCourse(Course^);
		static int DeleteCourse(int courseId);	//eliminar con codigo del curso	//¿añadimos tambien nombre????
		static List<Course^>^ QueryAllCourse();
		//static Customer^ QueryCustomerById(int customerId);

		//Métodos CRUD de Place 
		static int AddPlace(Place^);
		static int UpdatePlace(Place^);
		static int DeletePlace(int placeId);
		static Place^ QueryPlaceById(int placeId);
		static List<Place^>^ QueryAllPlace();

		////Metodos CRUD de Interest
		//static int AddInterest(Interest^ interest);
		//static Interest^ QueryInterestById(int^ interestId);
		//static List<Interest^>^ QueryAllInterest();
		//static int UpdateInterest(Interest^ interest);
		//static int DeleteInterest(int interestId);
	};
}