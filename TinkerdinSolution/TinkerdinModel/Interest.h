/**
 * Project Untitled
 */


#ifndef _INTEREST_H
#define _INTEREST_H

#include "Cliente.h"


class Interest: public Cliente {
public: 
    String^ Music;
    String^ Sports;
    String^ SportType;
    String^ Academic;
    String^ Others;
    void Port1;
    
void Match_Interests();
    
void Learn_Interest();
    
void UpdateInterest();
};

#endif //_INTEREST_H