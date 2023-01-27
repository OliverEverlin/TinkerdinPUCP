/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

#include "user.h"


class Admin: public user {
public: 
    int Code;
    int Username;
    String^ Department;
    
void UpdatePlaces();
};

#endif //_ADMIN_H