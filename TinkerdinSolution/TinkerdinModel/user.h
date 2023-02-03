/**
 * Clase User define a un usuario
 */


#pragma once

using namespace System;

namespace TinkerdinModel {

    public ref class user {
    public:
        property String^ Name;
        property String^ Username;
        property int code;
        property char Gender;
        property int Age;
        property int Phone;
        property String^ Email;
        property String^ Status;


        void Buy_Premium();

        /**
         * @param Username
         * @param Password
         */
        bool VerifyLogin(String^ Username, String^ Password);

        void login();

        void updateProfile();

        

        /**
         * @param String
         */
        void search(String^ word);

        /**
         * @param Username
         */
        void blockUser(int code);   //podria ser Username o Code



        void logout();


    private:
        property String^ Password;
    };
}