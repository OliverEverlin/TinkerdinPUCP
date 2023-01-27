/**
 * Project Untitled
 */
#include "pch.h"

#include "Admin.h"

 /**
  * Admin implementation
  */

TinkerdinModel::Admin::Admin()
{

}

TinkerdinModel::Admin::Admin(String^ name, String^ username, int code, char gender, int age, int phone, String^ email, String^ status, String^ departament)
{
    this->Name = name;
    this->Username = username;
    this->code = code;
    this->Gender = gender;
    this->Age = phone;
    this->Email = email;
    this->Status = status;
    this->Department = departament;
}

//Actializar la lista de lugares
void TinkerdinModel::Admin::update_places()
{
    throw gcnew System::NotImplementedException();
}


//report usuario con infracciones puede ser hasta bloqueado
void TinkerdinModel::Admin::report_user(int code)
{
    throw gcnew System::NotImplementedException();
}

//ver graficas de uso
void TinkerdinModel::Admin::view_grafic()
{
    throw gcnew System::NotImplementedException();
}