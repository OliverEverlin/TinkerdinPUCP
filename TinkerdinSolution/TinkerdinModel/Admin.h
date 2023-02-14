/**
 * Clase Admin modela a un administrador
 */

#pragma once

#include "user.h"

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Admin : public user {
    public:
        //property int Code;
        //property int Username;
        ////La clase usuario ya tiene ambos datos
        property int category;
        property String^ InitDate;
        property String^ EndDate;

        Admin();
        Admin(String^ name, String^ username, int code, char gender, int age, int phone, String^ email, String^ status, int category, String^ InitDate, String^ EndDate);


    protected:
        void update_places();
        void report_user(int code);
        void view_grafic();

    };

}