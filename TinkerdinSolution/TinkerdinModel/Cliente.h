/**
 * Clase Cliente modela a un cliente
 */


#pragma once

#include "user.h"

using namespace System;
using namespace System::Collections::Generic;
namespace TinkerdinModel {
    [Serializable]
    public ref class Cliente : public user {
    public:
        property String^ Carrer;
        property int Cicle;
        property int nReports;
        property int nMeettings;
        property List <String^>^ FriendList;
        property List <String^>^ CourseList;
        property List <int>^ EventList;


        /*Cliente();
        Cliente(String^ name, String^ username, int code, char gender, int age,
            int phone, String^ email, String^ status, String^ carrer, int cicle,
            String^password, int nReports, int nMeetings, List <String^> FriendList);*/

        void search_people();

        void search_place();

        void date_people();
    };
}