/**
 * Project Untitled
 */


#ifndef _COURSE_H
#define _COURSE_H

#include "Cliente.h"


class Course: public Cliente {
public: 
    String^ Type;
    String^ Name;
    String^ Schedule;
    String^ Status;
    String^ Professor;
    String^ ExamsDates;
    
void Study_course();
};

#endif //_COURSE_H