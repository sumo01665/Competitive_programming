#include <bits/stdc++.h> 

using namespace std; 

int main(){
    int var[5] = {1,2,4,2,5}; 
    for (int i = 0; i < 5; ++i){
        cout << var[i] << endl; 
        cout << &var + i  << endl; 
        
    }

}