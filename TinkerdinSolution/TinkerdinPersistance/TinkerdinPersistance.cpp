#include "pch.h"

#include "TinkerdinPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Globalization;
//para usar el XML y BINARIOS
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;
using namespace System::Xml::Serialization;



void TinkerdinPersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
{
    /*FileStream^ archivo;
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
    }*/
}

Object^ TinkerdinPersistance::Persistance::LoadData(String^ fileName)
{
    //Object^ res;
    //FileStream^ archivo;
    //StreamReader^ lector;
    //try {
    //    if (File::Exists(fileName)) {
    //        archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
    //        lector = gcnew StreamReader(archivo);
    //    }
    //    //if (fileName->Equals("hours.csv")) {
    //    //    res = gcnew List<Hours^>();
    //    //    if (File::Exists(fileName)) {
    //    //        while (true) {
    //    //            String^ linea = lector->ReadLine();
    //    //            if (linea == nullptr) break;
    //    //            array<String^>^ record = linea->Split(',');
    //    //            Hours^ p = gcnew Hours();
    //    //            p->Hour = record[0];
    //    //            p->Monday = record[1];
    //    //            p->Tuesday = record[2];
    //    //            p->Wednesday = record[3];
    //    //            p->Thursday = record[4];
    //    //            /*p->Friday = record[5];
    //    //            p->Saturday = record[6];
    //    //            p->Sunday = record[7];*/
    //    //            ((List<Hours^>^)res)->Add(p);
    //    //        }
    //    //    }
    //    //}
    //}
    //catch (Exception^ ex) {
    //    throw ex;
    //}
    //finally {
    //    if (lector != nullptr) lector->Close();
    //    if (archivo != nullptr) archivo->Close();
    //}
    //return res;
    return 0;
}

//para XML
void TinkerdinPersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject){

    StreamWriter^ output;
    try {
        output = gcnew StreamWriter(fileName);
        /*if (persistObject->GetType() == List<Hours^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Hours^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }*/
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
        /*if (fileName->Equals("hours.xml")) {
            res = gcnew List<Hours^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Hours^>::typeid);
                res = (List<Hours^>^)serializadorXML->Deserialize(sr);
            }
        }*/
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

int TinkerdinPersistance::Persistance::AddEvent(Event^ event)
{
    //event->Status = 'A';
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand("dbo.usp_AddEvent", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;

        comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@relevance", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@type_event", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@date", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@hour", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@minutes", System::Data::SqlDbType::Int);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@name"]->Value = event->Name;
        comm->Parameters["@relevance"]->Value = event->Relevance;
        comm->Parameters["@type_event"]->Value = event->TypeEvent;
        comm->Parameters["@date"]->Value = event->Date;
        comm->Parameters["@hour"]->Value = event->Hour;
        comm->Parameters["@minutes"]->Value = event->minutes;

        /* Paso 3: Se ejecuta la sentencia */
        comm->ExecuteNonQuery();

        /* Paso 4: Si se quiere procesar la salida. */
        output_id = Convert::ToInt32(comm->Parameters["@iid"]->Value);

        //ahora agrego mis miembros de evento
        for (int i = 0; i < event->Members->Count; i++) {
            comm = gcnew SqlCommand("dbo.usp_AddAsistance", conn);
            comm->CommandType = System::Data::CommandType::StoredProcedure;
            comm->Parameters->Add("@event_id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@relevance", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@relevance", System::Data::SqlDbType::VarChar, 100);
            SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
            outputIdParam->Direction = System::Data::ParameterDirection::Output;
            comm->Parameters->Add(outputIdParam);
            comm->Prepare();
            comm->Parameters["@event_id"]->Value = output_id;
            //comm->Parameters["@product_id"]->Value = sale->SaleDetails[i]->Product->Id;


            //Paso 3: Se ejecuta la sentencia
            comm->ExecuteNonQuery();
        }
    }
    catch(Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}

Event^ TinkerdinPersistance::Persistance::QueryEventById(int eventId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Event^ s;
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand("usp_QueryEventById", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);
        comm->Prepare();
        comm->Parameters["@iid"]->Value = eventId;

        /* 3er paso: Se ejecuta la sentencia */
        reader = comm->ExecuteReader();

        /* 4to paso: Se procesan los resultados */
        if (reader->Read()) {
            s = gcnew Event();
            s->Id = Int32::Parse(reader["id"]->ToString());
            s->Name = reader["name"]->ToString();
            s->Relevance = reader["relevance"]->ToString();
            s->TypeEvent = reader["type_event"]->ToString();
            s->Date = reader["date"]->ToString();
            s->Hour = Int32::Parse(reader["hour"]->ToString());
            s->minutes = Int32::Parse(reader["minutes"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return s;
}

List<Event^>^ TinkerdinPersistance::Persistance::QueryAllEvent()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Event^>^ eventList = gcnew List<Event^>();
    try {
        /* Paso 1: Obtener la conexión */
        conn = GetConnection();

        /* Paso 2: Preparar la sentencia */
        comm = gcnew SqlCommand("usp_QueryAllEvent", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;

        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();

        //Paso 4: Se procesan los resultados  
        while (reader->Read()) {
                Event^ c = gcnew Event();
                c->Id = Int32::Parse(reader["id"]->ToString());
                c->Name = reader["name"]->ToString();
                c->Relevance = reader["relevance"]->ToString();
                c->TypeEvent = reader["type_event"]->ToString();
                c->Date = reader["date"]->ToString();
                c->Hour = Int32::Parse(reader["hour"]->ToString());
                c->minutes = Int32::Parse(reader["minutes"]->ToString());

                eventList->Add(c);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return eventList;
}

int TinkerdinPersistance::Persistance::UpdateEvent(Event^ event)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        // Paso 1: Se obtiene la conexión
        conn = GetConnection();

        // Paso 2:  Se prepara la sentencia
        String^ strCmd;
        strCmd = "dbo.usp_UpdateEvent";
        comm = gcnew SqlCommand(strCmd, conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@relevance", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@type_event", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@date", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@hour", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@minutes", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);

        comm->Prepare();

        comm->Parameters["@name"]->Value = event->Name;
        comm->Parameters["@relevance"]->Value = event->Relevance;
        comm->Parameters["@type_event"]->Value = event->TypeEvent;
        comm->Parameters["@date"]->Value = event->Date;
        comm->Parameters["@hour"]->Value = event->Hour;
        comm->Parameters["@minutes"]->Value = event->minutes;
        comm->Parameters["@iid"]->Value = event->Id;

        //Paso 3: Se ejecuta la sentencia
        output_id = comm->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}

int TinkerdinPersistance::Persistance::DeleteEvent(int eventId)
{
    //SqlConnection^ conn;
    //SqlCommand^ comm;
    //int output_id;
    //try {
    //    /* 1er paso: Se obtiene la conexión */
    //    SqlConnection^ conn = GetConnection();

    //    /* 2do paso: Se prepara la sentencia */
    //    SqlCommand^ comm = gcnew SqlCommand();
    //    comm->Connection = conn;
    //    String^ strCmd;
    //    strCmd = "dbo.usp_DeleteEvent";
    //    comm = gcnew SqlCommand(strCmd, conn);
    //    comm->CommandType = System::Data::CommandType::StoredProcedure;
    //    comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);

    //    comm->Prepare();

    //    comm->Parameters["@iid"]->Value = eventId;
    //    /* Paso 3: Se ejecuta la sentencia */
    //    output_id = comm->ExecuteNonQuery();
    //}
    //catch (Exception^ ex) {
    //    throw ex;
    //}
    //finally {
    //    /* Paso 5: Cerramos la conexión con la BD */
    //    if (conn != nullptr) conn->Close();
    //}
    //return output_id;
    return 0;
}

int TinkerdinPersistance::Persistance::UpdateAsistance(Asistance^ a)
{
    //a->confirmation = 'A';
    //SqlConnection^ conn;
    //SqlCommand^ comm;
    //int output_id;
    //try {
    //    // Paso 1: Se obtiene la conexión
    //    conn = GetConnection();

    //    // Paso 2:  Se prepara la sentencia
    //    String^ strCmd;
    //    strCmd = "dbo.usp_UpdateAsistance";
    //    comm = gcnew SqlCommand(strCmd, conn);
    //    comm->CommandType = System::Data::CommandType::StoredProcedure;
    //    comm->Parameters->Add("@event_id", System::Data::SqlDbType::Int);
    //    comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 100);
    //    comm->Parameters->Add("@confirmation", System::Data::SqlDbType::VarChar, 100);
    //    comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);

    //    comm->Prepare();

    //    comm->Parameters["@event_id"]->Value = a->Event->Id;
    //    comm->Parameters["@username"]->Value = a->Username;
    //    comm->Parameters["@confirmation"]->Value = a->confirmation;
    //    comm->Parameters["@iid"]->Value = a->Id;

    //    //Paso 3: Se ejecuta la sentencia
    //    output_id = comm->ExecuteNonQuery();
    //}
    //catch (Exception^ ex) {
    //    throw ex;
    //}
    //finally {
    //    /* Paso 5: Cerramos la conexión con la BD */
    //    if (conn != nullptr) conn->Close();
    //}
    //return output_id;
    return 0;
}

List<Asistance^>^ TinkerdinPersistance::Persistance::QueryAsistancebyEventId(int eventId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int TinkerdinPersistance::Persistance::AddReport(Report^ report)
{
    report->state = 'A';
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand();
        comm->Connection = conn;
        String^ strCmd;
        strCmd = "dbo.usp_AddReport";
        comm = gcnew SqlCommand(strCmd, conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@relevance", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@type_event", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@date", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@hour", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@minutes", System::Data::SqlDbType::Int);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@iid", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@name"]->Value = event->Name;
        comm->Parameters["@relevance"]->Value = event->Relevance;
        comm->Parameters["@type_event"]->Value = event->TypeEvent;
        comm->Parameters["@date"]->Value = event->Date;
        comm->Parameters["@hour"]->Value = event->Hour;
        comm->Parameters["@minutes"]->Value = event->minutes;

        /* Paso 3: Se ejecuta la sentencia */
        comm->ExecuteNonQuery();

        /* Paso 4: Si se quiere procesar la salida. */
        output_id = Convert::ToInt32(comm->Parameters["@iid"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}

Report^ TinkerdinPersistance::Persistance::QueryReportByUsername(String^ reportByUsername)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ dr;
    Report^ r;

    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand("usp_QueryReportByUsername", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar,250);
        comm->Prepare();
        comm->Parameters["@value"]->Value = reportByUsername;

        /* 3er paso: Se ejecuta la sentencia */
        dr = comm->ExecuteReader();

        /* 4to paso: Se procesan los resultados */
        if (dr->Read()) {
                Report^ p = gcnew Report();
                p->Id = Int32::Parse(dr["id"]->ToString());
                p->badUser = safe_cast<String^> (dr["bad_user"]);
                p->reporter = safe_cast<String^> (dr["reporter"]);
                p->Description = safe_cast<String^> (dr["description"]);
                p->state = safe_cast<String^> (dr["state"])[0];
                r = p;
            
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (dr != nullptr) dr->Close();
        if (conn != nullptr) conn->Close();
    }
    return r;
}

List<Report^>^ TinkerdinPersistance::Persistance::QueryAllReportByReportedUser(String^ username)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Report^>^ reportList = gcnew List<Report^>();
    try {
        /* Paso 1: Obtener la conexión */
        conn = GetConnection();

        /* Paso 2: Preparar la sentencia */
        comm = gcnew SqlCommand("usp_QueryAllReportByReportedUser", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
        comm->Prepare();
        comm->Parameters["@value"]->Value = username;

        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();

        //Paso 4: Se procesan los resultados  
        while (reader->Read()) {
            Report^ c = gcnew Report();
            c->Id = Int32::Parse(reader["id"]->ToString());
            c->badUser = reader["bad_user"]->ToString();
            c->reporter = reader["reporter"]->ToString();
            c->Description = reader["description"]->ToString();
            c->state = reader["state"]->ToString()[0];

            reportList->Add(c);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return reportList;
}


