/**
 * Clase chat que modela el chat(comunicación)
 */
#pragma once
using namespace System;

namespace TinkerdinModel{
    public ref class Chat {
    public:
        property char Chat_type;
        property char Chat_status;
        void getChatType(Char Chat_Type);
        void setChatType();
        void sentErequest(String^ Email);
        void sentMrequest(String^ Phonenumeber);
        void receiveMsg();
    };
}