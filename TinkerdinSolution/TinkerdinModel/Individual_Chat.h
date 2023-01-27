/**
 * Project Untitled
 */

#pragma once
#include "Chat.h"

using namespace System;

namespace TinkerdinModel {
    class Individual_Chat : public Chat {
    public:
        property String^ PeerID;
        //property String^ PeerID;
    //protected: 
        property String^ Status;
    };
}
