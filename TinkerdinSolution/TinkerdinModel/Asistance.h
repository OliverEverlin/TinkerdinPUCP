//#pragma once
//ref class Asistance
//{
//};

#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace TinkerdinModel {
    [Serializable]
    public ref class Asistance {
    public:
        property int EventId;
        property String^ Username;
        property char confirmation;

    };
}
