#include <bits/stdc++.h>

using namespace std; 

//Macros
typedef long long LL; 
typedef unsigned long long ULL; 
#define REP(i,a,b) for(int i = a; i < b; i++)

//Global variables
 
//Function 
LL countOdds(LL low, LL high){
    LL count = 0; 
    for (LL i = low; i <= high; i++){
        if(i %2 == 1 || i%2 == -1){
            count += 1; 
            cout << "I'm counting..." << count << endl;
        }
        
    } //But the runtime is O(n) here
    return count;
}

ULL countOdds2(ULL low, ULL high){
    ULL count = 0; 
    //? Even-even case
    if (low %2 == 0 && high %2 == 0){
        ULL sol = (high - low)/2;
        count = sol; 
    }
    //? Odd-odd case
    if (low %2 != 0 && high %2 != 0){
        ULL sol = ((high - low)/2) + 1;
        count = sol; 
    }
    //? Odd-even case
    if ((low+ high) %2 != 0){
        ULL sol = ((high - low)/2);
        count = sol; 
    }
    return count; 
}

int countOdds3(int low, int high) {
        //? Even-even case
        if (low %2 == 0 && high %2 == 0){
            return (high - low)/2;

        }

        //? Odd-odd case
        if (low %2 != 0 || high %2 != 0){
            return ((high - low)/2) + 1;
        }
    return 0; 
}

//Do not work for integer types number
int countOdds4(int low, int high){
    return (ceil((double)high/2)-floor((double)low/2));
    
}
//Class

int main() { 
    // cout << countOdds2(0,100000000000000000) << endl; 
    // cout << countOdds(0,100000000000000000) << endl;
    // cout << countOdds3(0,5) << "\n"; 
    cout << countOdds4(0,5) << "\n"; 
}