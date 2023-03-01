/**
 * Project event
 * Recerva un espacio de tiempo para reuniones
 */


#pragma once
#include "Asistance.h"
using namespace System;
using namespace System::Collections::Generic;

namespace TinkerdinModel {
    [Serializable]
    public ref class Event {
    public:
        property int Id;
        property String^ Name;
        property String^ Relevance; //Cambiar en el diagrama 
        property String^ TypeEvent;   //Tipo relax, estudio, 
        property String^ Date;
        //property List<String^>^ guest;
        //property List<String^>^ Asistance;
        property int Hour;
        property int minutes;
        property List<Asistance^>^ Members;

        void Match();
        void UpdateEvent();
        void Delete();
        void AddMember();
    };
}

