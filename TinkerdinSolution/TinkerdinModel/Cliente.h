/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "user.h"


class Cliente: public user {
public: 
    int Code;
    String^ Carrer;
    int Cicle;
    
void Search_people();
    
void Search_place();
    
void date_people();
};

#endif //_CLIENTE_H