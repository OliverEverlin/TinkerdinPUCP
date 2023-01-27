/**
 * Project Untitled
 */

#pragma once
#include "Cliente.h"

using namespace System;

namespace TinkerdinModel {
    public ref class Interest : public Cliente {
    public:
        property String^ Music;
        property String^ Sports;
        property String^ SportType;
        property String^ Academic;
        property String^ Others;

        

        void Match_Interests();

        void Learn_Interest();

        void UpdateInterest();
    };
}