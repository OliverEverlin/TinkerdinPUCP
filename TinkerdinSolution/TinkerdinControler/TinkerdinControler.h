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
		static List<Cliente^>^ clientList;
		//static List<Admin^>^ adminList;
		static List<Interest^>^ interestList;
		static List<Course^>^ courseList;
		static List<Place^>^ placeList;

	public:
		// TODO: Agregue aquí los métodos de esta clase.
		static int AddClient(Cliente^ client);
		static Cliente^ QueryClientById(int^ clientId);
		static List<Cliente^>^ QueryAllClients();
		static int UpdateClient(Cliente^ client);
		static int DeleteClient(int ClientId);
		//static List<Cliente^>^ QueryClientsByNameOrInterest(String^ name, String^ interest);
		//static int AddCli

		//Métodos CRUD de Course
		static int AddCourse(Course^);
		static int UpdateCourse(Course^);
		static int DeleteCourse(int courseId);	//eliminar con codigo del curso	//¿añadimos tambien nombre????
		static List<Course^>^ QueryAllCourse();
		//static Customer^ QueryCustomerById(int customerId);

	};
}