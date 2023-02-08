/**
 * Project Untitled
 */

#pragma once
#include "Chat.h"

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class Individual_Chat : public Chat {
    public:
        property String^ PeerID;
    //protected: 
        property String^ Status;
    };
}
