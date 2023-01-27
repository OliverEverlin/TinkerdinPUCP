/**
 * Project Untitled
 */


#ifndef _CALENDAR_H
#define _CALENDAR_H

#include "Interface1.h"


class Calendar: public Interface1 {
public: 
    bool PrivacyDefault;
    bool Mode;
    
void AddEvent();
};

#endif //_CALENDAR_H