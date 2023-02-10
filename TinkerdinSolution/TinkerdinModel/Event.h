/**
 * Project event
 * Recerva un espacio de tiempo para reuniones
 */


#pragma once
using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Event {
    public:
        property int Id;
        property String^ Name;
        property String^ Relevance; //Cambiar en el diagrama si
        property String^ Privacy;   //se queda en string o bool
        property int Date;
        property int Hour;

        void Match();
        void UpdateEvent();
        void Delete();
        void AddMember();
    };
}

