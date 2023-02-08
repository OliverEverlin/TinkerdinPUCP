#pragma once

using namespace System;

namespace TinkerdinPersistance {
	public ref class Persistance
	{
		//definimos metodos que haran la persistencia del producto
	public:
		//persistencia para txt
		//static void Persist(String^ fileName, Object^ persistObject);
		//static Object^ LoadData(String^ fileName);
		//persistencia para XML
		static void PersistXML(String^ fileName, Object^ persistObjet);
		static Object^ LoadDataXML(String^ fileName);
		//persistencia para BINARIOS
		static void PersistBinary(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryData(String^ fileName);
	};
}
