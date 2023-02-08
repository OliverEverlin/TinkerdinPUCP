/**
 * Project Course
 * Tiene relacion con Cliente
 * Un cliente o estudiante puede estar llevando varios cursos 
 * o de ser egresado ninguno
 */


#pragma once
using namespace System;

#include "Cliente.h"

namespace TinkerdinModel {
    [Serializable]
    public ref class Course  {

    public:
        property int Id;
        property String^ Type;
        property String^ Name;
        property String^ Schedule;
        property char Status;
        property String^ Professor;
        property String^ ExamsDates;

        void Study_course();
    };

}


