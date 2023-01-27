/**
 * Clase Chat_History que modela el historial de chat
 */
#pragma once
#include "GroupChat.h"
#include "Individual_Chat.h"
using namespace System;

namespace TinkerdinModel{
    public ref class Chat_History {
    public:
       
        property String^ sender;
        property GroupChat^ Groupchat;
        property Individual_Chat^ Individual_Chat;

    };
}

