/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

class user {
public: 
    String^ Name;
    char Gender;
    int Age;
    int Phone;
    String^ Email;
    String^ Status;
    String^ Username;
    String^ Password;
    String^ code;
    
void Buy_Premium();
    
/**
 * @param Username
 * @param Password
 */
bool VerifyLogin(void Username, void Password);
    
void register();
    
void updateProfile();
    
void Operation1();
    
/**
 * @param String
 */
void search(void String);
    
/**
 * @param Username
 */
void blockUser(void Username);
    
void Operation2();
    
void chat();
    
void logout();
    
void chat();
};

#endif //_USER_H