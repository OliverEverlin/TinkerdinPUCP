#pragma once

using namespace System;
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
