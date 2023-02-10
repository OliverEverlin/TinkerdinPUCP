/**
 * Project Untitled
 */

#include "pch.h"
#include "Course.h"

/**
 * Course implementation
 */


TinkerdinModel::Course::Course()
{
}

TinkerdinModel::Course::Course(String^ id, String^ type, String^ name, String^ schedule, char status, String^ professor, String^ parcial, String^ final)
{
    this->Id = id;
    this->Type = type;
    this->Name = name;
    this->Schedule = schedule;
    this->Status = status;
    this->Professor = professor;
    this->Parcial = parcial;
    this->Final = final;
}

void TinkerdinModel::Course::Study_course() {

}