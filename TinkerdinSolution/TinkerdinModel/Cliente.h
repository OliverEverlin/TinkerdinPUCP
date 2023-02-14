/**
 * Clase Cliente modela a un cliente
 */


#pragma once

#include "user.h"

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Cliente : public user {
    public:
        property String^ Carrer;
        property int Cicle;
        property int nReports;
        property int nMeettings;

        Cliente();
        Cliente(String^ name, String^ username, int code, char gender, int age, int phone, String^ email, String^ status, String^ carrer, int cicle,String^password, int nReports, int nMeetings);

        void search_people();

        void search_place();

        void date_people();
    };
}