/**
 * Project Untitled
 */

#pragma once
#include "Chat.h"

using namespace System;

namespace TinkerdinModel {
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
}
