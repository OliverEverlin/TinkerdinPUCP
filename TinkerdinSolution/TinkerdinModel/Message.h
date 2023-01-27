/**
 * Project Untitled
 */


#ifndef _MESSAGE_H
#define _MESSAGE_H

class Message {
public: 
    int Type_Msg;
    String^ Content;
    int Type_File;
    int Type_Image;
    sysdate Time;
    
int getType();
    
void setType();
    
Abstract display();
};

#endif //_MESSAGE_H