/**
 * Clase Settings modela una modificacion de usurio
 */

#pragma once
#include "user.h"
using namespace System;

namespace TinkerdinModel {

    class Settings {
    public:

        void viewProfile();

        void setNotifications();

        void Privacy();

        void changePassword();

        void changeNumber();

        void updateStatus();

        void changeCicle();

        void changeCarrer();

        void help();
    };
}