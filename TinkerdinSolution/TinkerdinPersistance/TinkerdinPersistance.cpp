#include "pch.h"

#include "TinkerdinPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace TinkerdinModel;

void TinkerdinPersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
{
    FileStream^ archivo;
    archivo = gcnew FileStream("archivo.txt", FileMode::Create, FileAccess::Write);
    StreamWriter^ escritor = gcnew StreamWriter(archivo);

    if (persistObject->GetType() == List<Cliente^>::typeid) {
        for (int i = 0; i < ((List<Cliente^>^)persistObject)->Count; i++)
        {
            String^ linea = Console::ReadLine();
            if (linea == nullptr) break;
            escritor->WriteLine(linea);
        }
    }
    escritor->Close();
    archivo->Close();
}

Object^ TinkerdinPersistance::Persistance::LoadData(String^ fileName)
{
    if (fileName->Equals("Clients.txt")) {
        Object^ res;
        List<Cliente^>^ productList = gcnew List<Cliente^>();
        FileStream^ archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        StreamReader^ lector = gcnew StreamReader(archivo);
        while (true) {
            String^ linea = lector->ReadLine();
            if (linea == nullptr) break;
            array <String^>^ record = linea->Split(',');
            Cliente^ c = gcnew Cliente();

            //c->setId(Convert::ToInt32(record[0]));
            c->Name = record[1];
            c->Gender = Convert::ToChar(record[2]);
            c->Age = Convert::ToInt32(record[3]);
            c->Status = record[4];
            c->Username = record[5];
            c->Carrer = record[6];
            c->Cicle = (Convert::ToInt32(record[7]));

            ((List<Cliente^>^)res)->Add(c);
        }
        lector->Close();
        archivo->Close();
    }
    
}

void TinkerdinPersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject){
    FileStream^ archivo = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    StreamWriter^ escritor = gcnew StreamWriter(archivo);

    if (persistObject->GetType() == List<Cliente^>::typeid) {
        for (int i = 0; i < ((List<Cliente^>^)persistObject)->Count; i++) {
            escritor->WriteLine(((List<Cliente^>^)persistObject)[i]->code + ", "+
                ((List<Cliente^>^)persistObject)[i]->Name + ", " +
                ((List<Cliente^>^)persistObject)[i]->Gender + ", " +
                ((List<Cliente^>^)persistObject)[i]->Age + ", " +
                ((List<Cliente^>^)persistObject)[i]->Status + ", " +
                ((List<Cliente^>^)persistObject)[i]->Carrer + ", " +
                ((List<Cliente^>^)persistObject)[i]->Cicle );
            
        }
    }
    escritor->Close();
    archivo->Close();
}

Object^ TinkerdinPersistance::Persistance::LoadDataXML(String^ fileName)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}


