/**
 * Clase chat que modela el chat(comunicación)
 */
#pragma once
using namespace System;

namespace TinkerdinModel{
    public ref class Chat {
    public: 
        property void Chat_type;
        void getChatType(void Chat_Type); 
        void setChatType();
        void sentErequest(void Email);
        void sentMrequest(void Phonenumeber);   
        void receiveMsg();
    protected: 
        void Chat_status;
    };
}