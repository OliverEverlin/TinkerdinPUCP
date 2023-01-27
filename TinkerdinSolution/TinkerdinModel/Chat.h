/**
 * Project Untitled
 */


#ifndef _CHAT_H
#define _CHAT_H

class Chat {
public: 
    void Chat_type;
    
/**
 * @param Chat_Type
 */
void getChatType(void Chat_Type);
    
void setChatType();
    
/**
 * @param Email
 */
void sentErequest(void Email);
    
/**
 * @param Phonenumeber
 */
void sentMrequest(void Phonenumeber);
    
void receiveMsg();
protected: 
    void Chat_status;
};

#endif //_CHAT_H