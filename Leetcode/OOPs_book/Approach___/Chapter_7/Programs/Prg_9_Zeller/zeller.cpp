#include "zeller.h"


Zeller::Zeller(int d, int m, int y):day(d), month(m), year(y){


}


void Zeller::print() const{ 
    cout << "day: " << day << ", month: "
         << month << ", year: " << year << endl; 

}

int Zeller::weekday(){
    int weekday; 
    weekday = (day + 26 * (month + 1) / 10 + 
year + year / 4 - year /100 + year /400 ) % 7;


    return weekday;
}