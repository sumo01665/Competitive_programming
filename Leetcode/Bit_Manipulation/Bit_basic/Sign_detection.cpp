#include <bits/stdc++.h>

using namespace std; 


static auto fast_io =  [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}();



string sign_detection(int n){
    
    int testing_number = 24; //? Use to return the number 
    
    if ((testing_number ^ n) < 0) return "negative";
    else return "positive"; 
 
}

int main(){ 
    cout << sign_detection(-23235) << endl; 




}