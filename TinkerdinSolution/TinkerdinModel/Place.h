﻿/**
 * Project Place
 * Objeto que contiene lugares
 * y sus caracteristicas
 */

 //slņjdabcvaņdslasdv
#pragma once
using namespace System;
namespace TinkerdinModel {
    [Serializable]
    public ref class Place {
        //private:
        //    //La defino como privados la cantidad de personas en un lugar por tema de seguridad

        //    int Participants;
        //    int PowerOutlet;
        //    //void Activate();

    public:
        /* int getParticipants() {
             return Participants;
         }
         void setParticipants(int Participants) {
             this->Participants = Participants;
         }
         int getPowerOutlet() {
             return PowerOutlet;
         }
         void setPowerOutlet(int PowerOutlet) {
             this->PowerOutlet = PowerOutlet;
         }*/



        property char Availability;
        property int Id;
        property int Participants;
        property int PowerOutlet;
        property String^ TypePlace;
        property int Location;

        bool PowerOutletFree();
        bool QuietPlace();
        int Wifi();
        bool StayPlace();
        void SharePlace();

        //void Deactivate();
    };


}