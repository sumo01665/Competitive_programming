#include <bits/stdc++.h>


using namespace std; 




string duplicateStr(string & base){ 
    string result  = ""; 
    cout << base.length() << endl; 
    // for (int i = 0; i < 2 * base.length(); i = ( i + 1) % base.length()){
    //     result += base[i]; 
    //     // cout << "A" << endl;    
    //     if (i == base.length()) break; 
    // }
    return result; 


}



int main(){ 
    string a = "Trist"; 
    cout << duplicateStr(a); 
    // cout << "Something" << endl; 

}