#pragma once

using namespace System;
using namespace TinkerdinModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;
using namespace System::Data::SqlClient;
using namespace TinkerdinModel;
using namespace System::Collections::Generic;

namespace TinkerdinPersistance {
	public ref class Persistance{
		//comentario para subir comit de eliminacion de avances con errores
		// Oliver uu
		// #necesitoaprendergithub
		// 
		// Segundo commit para ver si esto es lo que funciona
		// 
		// 
		//definimos metodos que haran la persistencia del producto
	public:
		//persistencia para txt
		static void Persist(String^ fileName, Object^ persistObject);
		static Object^ LoadData(String^ fileName);
		
		//persistencia para XML
		static void PersistXML(String^ fileName, Object^ persistObjet);
		static Object^ LoadDataXML(String^ fileName);
		//persistencia para BINARIOS
		static void PersistBinary(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryData(String^ fileName);

		//CRUD para Event BD
		static int AddEvent(Event^ event);
		static Event^ QueryEventById(int eventId);
		static List<Event^>^ QueryAllEvent();
		static int UpdateEvent(Event^ event);
		static int DeleteEvent(int eventId);
		//static List<String^>^ QueryAllRelevance();		//FALTA
		//static int QueryLastEventId();					//FALTA
		//static List<Event^>^ QueryAllMyEvents(Cliente^);	//FALTA
		
		//CRUD para Asistance BD
		//static int AddAsistance(Asistance^ a);
		static int UpdateAsistance(Asistance^ a);
		static List<Asistance^>^ QueryAsistancebyEventId(int eventId);
		//static int DeleteAsistance(int eventId);

		//CRUD para Report BD
		static int AddReport(Report^ report);
		static Report^ QueryReportByUsername(String^ reportByUsername);
		static List<Report^>^ QueryAllReportByReportedUser(String^ username);

		//DB place
		static SqlConnection^ GetConnection();
		//Si ya está el sql connection, obviarlo
		static int AddPlace(Place^);
		static int UpdatePlace(Place^);
		static int DeletePlace(int placeId);
		static Place^ QueryPlaceById(int placeId);
		static List<Place^>^ QueryAllPlace();
		static List<Place^>^ QueryPlaceByName(String^ placeLocation);


	};
}
