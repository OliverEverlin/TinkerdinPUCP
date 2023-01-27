/**
 * Clase Cliente modela a un cliente
 */


#pragma once

#include "user.h"

using namespace System;

namespace TinkerdinModel {

    public ref class Cliente : public user {
    public:
        property String^ Carrer;
        property int Cicle;

        Cliente();
        Cliente(String^ name, String^ username, int code, char gender, int age, int phone, String^ email, String^ status, String^ carrer, int cicle);

        void search_people();

        void search_place();

        void date_people();
    };
}