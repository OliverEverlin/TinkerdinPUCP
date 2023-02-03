/**
 * La clase message modela el mensaje  se transmitirá por el chat de la app
 */
#pragma once 

using namespace System;

namespace TinkerdinModel{
    public ref class Message {
    public: 
        
        //Se hace uso de property para reemplazar al set y get:
        property int Type_Msg;
        property String^ Content;
        property int Type_File;
        property int Type_Image;

        //int getType();
        //void setType();
        void display();
    };
}