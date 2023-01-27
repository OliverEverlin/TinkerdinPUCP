/**
 * La clase message modela el mensaje  se transmitirá por el chat de la app
 */
#pragma once 

using namespace System;

namespace TinkerdinModel{
    public ref class Message {
    public: 
        int Type_Msg;
        String^ Content;
        int Type_File;
        int Type_Image;
        //sysdate Time;
        
        //Se hace uso de property para reemplazar al set y get:
        property int Type_Msg;
        property String^ Content;
        property int Type_File;
        property int Type_Image;

        int getType();
        int setType();
        
    };
}