/**
 * Project Untitled
 */


#ifndef _EVENT_H
#define _EVENT_H

class Event {
public: 
    String^ Name;
    bool Relevance;
    bool Privacy;
    int Date;
    int hour;
    
void Match();
    
void UpdateEvent();
    
void Delete();
    
void AddMember();
};

#endif //_EVENT_H