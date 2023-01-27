/**
 * Project Untitled
 */


#ifndef _GROUPCHAT_H
#define _GROUPCHAT_H

#include "Chat.h"


class GroupChat: public Chat {
public: 
    String^ GroupID;
    String^ GroupName;
    String^ MsgType;
    
void getMsgType();
    
void setMsgType();
    
void connectSession();
    
void inviteFriend();
    
/**
 * @param Username
 */
void addFriend(void Username);
    
/**
 * @param Username
 */
void removeFriend(void Username);
    
/**
 * @param GroupID
 */
void leaveGroup(void GroupID);
    
/**
 * @param GroupID
 */
void deleteGroup(void GroupID);
};

#endif //_GROUPCHAT_H