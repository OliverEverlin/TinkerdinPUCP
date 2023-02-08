/**
 * Project Untitled
 */

#pragma once

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Calendar {
    public:
        property bool PrivacyDefault;
        property bool Mode;

        void AddEvent();
    };
}
