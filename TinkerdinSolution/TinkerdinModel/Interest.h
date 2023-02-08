/**
 * Project Untitled
 */

#pragma once
#include "Cliente.h"

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Interest : public Cliente {
    public:
        property String^ Name;
        property int Id;
        property String^ Type;
        property int Frecuency;

        void Match_Interests();

        void Learn_Interest();

        void UpdateInterest();
    };
}