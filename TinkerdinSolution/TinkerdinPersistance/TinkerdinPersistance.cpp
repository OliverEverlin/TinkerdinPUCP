#include "pch.h"

#include "TinkerdinPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace TinkerdinModel;
//para usar el XML y BINARIOS
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;
using namespace System::Xml::Serialization;


void TinkerdinPersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
{
    FileStream^ archivo;
    StreamWriter^ escritor;
    try {
        archivo = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        escritor = gcnew StreamWriter(archivo);
        if (persistObject->GetType() == List<Hours^>::typeid) {
            for (int i = 0; i < ((List<Hours^>^)persistObject)->Count; i++) {
                escritor->WriteLine(
                    ((List<Hours^>^)persistObject)[i]->Hour + "," +
                    ((List<Hours^>^)persistObject)[i]->Monday + "," +
                    ((List<Hours^>^)persistObject)[i]->Tuesday + "," +
                    ((List<Hours^>^)persistObject)[i]->Wednesday + "," +
                    ((List<Hours^>^)persistObject)[i]->Thursday + "," +
                    ((List<Hours^>^)persistObject)[i]->Friday + "," +
                    ((List<Hours^>^)persistObject)[i]->Saturday + "," +
                    ((List<Hours^>^)persistObject)[i]->Sunday);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (escritor != nullptr) escritor->Close();
        if (archivo != nullptr) archivo->Close();
    }
}

Object^ TinkerdinPersistance::Persistance::LoadData(String^ fileName)
{
    Object^ res;
    FileStream^ archivo;
    StreamReader^ lector;
    try {
        if (File::Exists(fileName)) {
            archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            lector = gcnew StreamReader(archivo);
        }
        if (fileName->Equals("hours.csv")) {
            res = gcnew List<Hours^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Hours^ p = gcnew Hours();
                    p->Hour = record[0];
                    p->Monday = record[1];
                    p->Tuesday = record[2];
                    p->Wednesday = record[3];
                    p->Thursday = record[4];
                    /*p->Friday = record[5];
                    p->Saturday = record[6];
                    p->Sunday = record[7];*/
                    ((List<Hours^>^)res)->Add(p);
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (lector != nullptr) lector->Close();
        if (archivo != nullptr) archivo->Close();
    }
    return res;
}

//para XML
void TinkerdinPersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject){

    StreamWriter^ output;
    try {
        output = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Hours^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Hours^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<String^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }

    /*FileStream^ archivo = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
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
    archivo->Close();*/
}

Object^ TinkerdinPersistance::Persistance::LoadDataXML(String^ fileName)
{
    Object^ res;
    StreamReader^ sr;
    XmlSerializer^ serializadorXML;
    try {
        if (File::Exists(fileName)) {
            sr = gcnew StreamReader(fileName);
        }
        if (fileName->Equals("hours.xml")) {
            res = gcnew List<Hours^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Hours^>::typeid);
                res = (List<Hours^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("stores.xml")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
                res = (List<String^>^)serializadorXML->Deserialize(sr);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
    return res;
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
        if (fileName->Equals("admins.bin")) {
            res = gcnew List<Admin^>();
            if (File::Exists(fileName)) {
                res = (List<Admin^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("interest.bin")) {
            res = gcnew List<Interest^>();
            if (File::Exists(fileName)) {
                res = (List<Interest^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("course.bin")) {
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
    catch (NullReferenceException^ ex) {
        //Mandar un mensaje por correo
        throw ex;
    }
    catch (Exception^ ex) {
        //Guardo en el log de errores lo ocurrido y envío mails a todos los de sistemas.
        throw ex;
    }
    finally {
        if (input != nullptr) input->Close();
    }

    return res;

}


