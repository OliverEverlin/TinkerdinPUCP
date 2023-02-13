#pragma once

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Hours {
    public:
        property String^ Hour;
        property String^ Monday;
        property String^ Tuesday;
        property String^ Wednesday;
        property String^ Thursday;
        property String^ Friday;
        property String^ Saturday;
        property String^ Sunday;

    };
}