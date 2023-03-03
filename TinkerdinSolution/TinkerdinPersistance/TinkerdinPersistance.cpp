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
        if (fileName->Equals("asistance.bin")) {
            res = gcnew List<Asistance^>();
            if (File::Exists(fileName)) {
                res = (List<Place^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("reports.bin")) {
            res = gcnew List<Report^>();
            if (File::Exists(fileName)) {
                res = (List<Report^>^)formateador->Deserialize(input);
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
//PLACE

SqlConnection^ TinkerdinPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "DT465YN";
    conn->ConnectionString = "Server=200.16.7.140;Database=a20196445;User ID=a20196445;Password=" + password + ";";
    conn->Open();
    return conn;
}

int TinkerdinPersistance::Persistance::AddPlace(Place^p)
{

    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddPlace", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@location", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@availability", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@participants", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@poweroutlet", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@typeplace", System::Data::SqlDbType::VarChar,250);
        comm->Parameters->Add("@optimumplace", System::Data::SqlDbType::VarChar, 250);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@location"]->Value = Convert::ToString (p->Location);
        comm->Parameters["@availability"]->Value = Convert::ToString (p->Availability);
        comm->Parameters["@participants"]->Value = p->Participants;
        comm->Parameters["@poweroutlet"]->Value = p->PowerOutlet;
        comm->Parameters["@typeplace"]->Value = Convert::ToString(p->TypePlace);
        comm->Parameters["@optimumplace"]->Value = Convert::ToString(p->OptimumFloor);
        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return output_id;





}

int TinkerdinPersistance::Persistance::UpdatePlace(Place^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_UpdatePlace", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@location", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@availability", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@participants", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@poweroutlet", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@typeplace", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@optimumplace", System::Data::SqlDbType::VarChar, 250);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@location"]->Value = Convert::ToString(p->Location);
        comm->Parameters["@availability"]->Value = Convert::ToString(p->Availability);
        comm->Parameters["@participants"]->Value = p->Participants;
        comm->Parameters["@poweroutlet"]->Value = p->PowerOutlet;
        comm->Parameters["@typeplace"]->Value = Convert::ToString(p->TypePlace);
        comm->Parameters["@optimumplace"]->Value = Convert::ToString(p->OptimumFloor);
        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados (no aplica)       
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

int TinkerdinPersistance::Persistance::DeletePlace(int placeId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("UPDATE PLACE "
            + "SET availability = 'No_Disponible' "
            + "WHERE id = " + placeId, conn);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

Place^ TinkerdinPersistance::Persistance::QueryPlaceById(int placeId)
{
    
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Place^ activeProduct;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE id =" + placeId +
            " AND status != 'No_disponible'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Place^ p = gcnew Place();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Location = reader["location"]->ToString();
            p->Availability = reader["availability"]->ToString();
            p->Participants = Convert::ToInt32(reader["participants"]->ToString());
            p->PowerOutlet = Convert::ToInt32(reader["poweroutlet"]->ToString());
            p->TypePlace = reader["typeplace"]->ToString();
            p->OptimumFloor = reader["stock"]->ToString();
            
            activeProduct = p;
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProduct;

}

List<Place^>^ TinkerdinPersistance::Persistance::QueryAllPlace()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Place^>^ activeProductsList = gcnew List<Place^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE status!='No_disponible'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Place^ p = gcnew Place();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Location = reader["location"]->ToString();
            p->Availability = reader["availability"]->ToString();
            p->Participants = Convert::ToInt32(reader["participants"]->ToString());
            p->PowerOutlet = Convert::ToInt32(reader["poweroutlet"]->ToString());
            p->TypePlace = reader["typeplace"]->ToString();
            p->OptimumFloor = reader["optimumfloor"]->ToString();
       
            activeProductsList->Add(p);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProductsList;



}

List<Place^>^ TinkerdinPersistance::Persistance::QueryPlaceByName(String^ placeLocation)
{
    
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Place^>^ activeProductsList = gcnew List<Place^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE " +
            "(name LIKE '%" + placeLocation + "%' OR " +
            "description LIKE '%" + placeLocation + "%') AND " +
            "status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Place^ p = gcnew Place();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Location = reader["location"]->ToString();
            p->Availability = reader["availability"]->ToString();
            p->Participants = Convert::ToInt32(reader["participants"]->ToString());
            p->PowerOutlet = Convert::ToInt32(reader["poweroutlet"]->ToString());
            p->TypePlace = reader["typeplace"]->ToString();
            p->OptimumFloor = reader["optimumfloor"]->ToString();
            activeProductsList->Add(p);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProductsList;








}


