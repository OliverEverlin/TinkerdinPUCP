/**
 * Project Untitled
 */

#pragma once
#include "Chat.h"

using namespace System;

namespace TinkerdinModel {
    [Serializable]
    public ref class GroupChat : public Chat {
    public:
        property String^ GroupID;
        property String^ GroupName;
        property String^ MsgType;

        void getMsgType();

        void setMsgType();

        void connectSession();

        void inviteFriend();

        /**
         * @param Username
         */
        void addFriend(String^ Username);

        /**
         * @param Username
         */
        void removeFriend(String^ Username);

        /**
         * @param GroupID
         */
        void leaveGroup(String^ GroupID);

        /**
         * @param GroupID
         */
        void deleteGroup(String^ GroupID);
    };
}
