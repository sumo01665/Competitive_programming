#include <cmath> 
#include <cassert> 
#include "time.h"


Time::Time(int hr, int mi, int se):
hours(hr),minutes(mi), seconds(se){
    normalize(); 

}

Time::~Time(){



}

void Time::print() const 
{ 
    cout << hours << ":" << minutes << ":" << seconds << endl; 

}


void Time::tick(){ 
    seconds++; 
    normalize(); 

}

void Time::normalize(){ 
    if (hours < 0 || minutes < 0 || seconds < 0){ 
        cout << "Data is not valid. Need to quit!" << endl; 
        assert(false); 
    }
    
    if (seconds > 59){
        int temp = seconds / 60; 
        seconds = seconds % 60; 
        minutes = minutes + temp;    
    }
    
    if (minutes > 59){
        int temp = minutes / 60; 
        minutes = minutes % 60; 
        hours = hours + temp; 
    }
    
    if (hours > 23){
        hours = hours % 24;    
    }
}