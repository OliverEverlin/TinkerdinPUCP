#include "pch.h"

#include "TinkerdinPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace TinkerdinModel;
//para usar el XML y BINARIOS
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;

//para txt
//void TinkerdinPersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
//{
//    FileStream^ archivo;
//    archivo = gcnew FileStream("archivo.txt", FileMode::Create, FileAccess::Write);
//    StreamWriter^ escritor = gcnew StreamWriter(archivo);
//
//    if (persistObject->GetType() == List<Cliente^>::typeid) {
//        for (int i = 0; i < ((List<Cliente^>^)persistObject)->Count; i++)
//        {
//            String^ linea = Console::ReadLine();
//            if (linea == nullptr) break;
//            escritor->WriteLine(linea);
//        }
//    }
//    escritor->Close();
//    archivo->Close();
//}

//Object^ TinkerdinPersistance::Persistance::LoadData(String^ fileName)
//{
//    Object^ res;
//    FileStream^ archivo;
//    StreamReader^ lector;
//    try{
//        if (File::Exists(fileName)) {
//            archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
//            lector = gcnew StreamReader(archivo);
//        }
//        if (fileName->Equals("clients.txt")) {
//            //List<Cliente^>^ clientList = gcnew List<Cliente^>();
//            res = gcnew List<Cliente^>();
//            while (true) {
//                String^ linea = lector->ReadLine();
//                if (linea == nullptr) break;
//                array <String^>^ record = linea->Split(',');
//                Cliente^ c = gcnew Cliente();
//
//                //c->setId(Convert::ToInt32(record[0]));
//                c->Name = record[1];
//                c->Gender = Convert::ToChar(record[2]);
//                c->Age = Convert::ToInt32(record[3]);
//                c->Status = record[4];
//                c->Username = record[5];
//                c->Carrer = record[6];
//                c->Cicle = (Convert::ToInt32(record[7]));
//                c->code = (Convert::ToInt32(record[8]));
//                ((List<Cliente^>^)res)->Add(c);
//            }
//            lector->Close();
//            archivo->Close();
//        }
//
//    }
//    catch (Exception^ ex){
//        throw ex;
//    }
//    finally {
//        if (lector != nullptr) lector->Close();
//        if (archivo != nullptr)archivo->Close();
//    }
//    
//    return res;
//}

//para XML
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

//BINARY Esto es lo que usaremos más 

void TinkerdinPersistance::Persistance::PersistBinary(String^ fileName, Object^ persistObject){
    FileStream^ output;
    try {
        output = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        BinaryFormatter^ formateador = gcnew BinaryFormatter();
        //if (persistObject->GetType() == List<Product^>::typeid) {
        formateador->Serialize(output, persistObject);
        //}
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }
}

Object^ TinkerdinPersistance::Persistance::LoadBinaryData(String^ fileName){
    //retorna una lista de la clase que esté solicitando
    Object^ res;
    FileStream^ input;
    BinaryFormatter^ formateador;
    try {
        if (File::Exists(fileName)) {
            input = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formateador = gcnew BinaryFormatter();
        }
        if (fileName->Equals("clients.bin")) {
            res = gcnew List<Cliente^>();
            if (File::Exists(fileName)) {
                res = (List<Cliente^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("interest.bin")) {
            res = gcnew List<Interest^>();
            if (File::Exists(fileName)) {
                res = (List<Interest^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("courses.bin")) {
            res = gcnew List<Course^>();
            if (File::Exists(fileName)) {
                res = (List<Course^>^)formateador->Deserialize(input);
            }
        }
        //Types podria ser xml o predefinido
        if (fileName->Equals("typecourse.bin")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                res = (List<String^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("events.bin")) {
            res = gcnew List<Event^>();
            if (File::Exists(fileName)) {
                res = (List<Event^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("places.bin")) {
            res = gcnew List<Place^>();
            if (File::Exists(fileName)) {
                res = (List<Place^>^)formateador->Deserialize(input);
            }
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (input != nullptr) input->Close();
    }

    return res;

}


