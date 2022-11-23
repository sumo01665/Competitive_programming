#include <bits/stdc++.h>
#include "zeller.h"

using namespace std; 
 
static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false;}();  
 
int main(){
    fast_io; 
    
    Zeller day(12,6,2022); 
    
    Zeller days[3];
    
    days[0] = Zeller(5,7,2003); 
    days[1] = Zeller(2,8,2003); 
    days[2] = Zeller(16,11,2022); 
    
    for (int i = 0; i < 3; ++i){
        cout << days[i].weekday() << endl; 
    }
    
    cout << day.weekday() << endl; 
    
}