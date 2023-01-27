/**
 * Project Untitled
 */


#ifndef _PLACE_H
#define _PLACE_H

class Place {
public: 
    bool Availability;
    int Participants;
    int PowerOutlet;
    String^ TypePlace;
    int Location;
    
bool PowerOutletFree();
    
bool QuietPlace();
    
int Wifi();
    
bool StayPlace();
    
void SharePlace();
};

#endif //_PLACE_H