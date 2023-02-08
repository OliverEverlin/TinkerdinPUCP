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
        property String^ Name;
        property bool Relevance;
        property bool Privacy;
        property int Date;
        property int hour;

        void Match();
        void UpdateEvent();
        void Delete();
        void AddMember();
    };
}

