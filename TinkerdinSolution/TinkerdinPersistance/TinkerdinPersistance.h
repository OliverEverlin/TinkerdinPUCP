#pragma once

using namespace System;

namespace TinkerdinPersistance {
	public ref class Persistance
	{
		//definimos metodos que haran la persistencia del producto
	public:
		static void Persist(String^ fileName, Object^ persistObject);
		static Object^ LoadData(String^ fileName);
		static void PersistXML(String^ fileName, Object^ persistObjet);
		static Object^ LoadDataXML(String^ fileName);
	};
}
