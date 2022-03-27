//? Summary: Map structure
// - A map is a generalized array that consists of key-value-pair
// Keys in an ordinary array are always the consecutive integers 0,1,..., n-1, where n is the size of the array, the keys in a map can be any data type

//? C++ standard library contains two map implementations that correspond to the set implementations: the structure map: use the balance binary tree and accessing elemnets takes O(log(n))

#include <bits/stdc++.h> 

using namespace std; 

//macros

//functions
void map_element_check(map<string, int> &map, string x){
//? This function is written for checking if the elements in a map 
    if (map.count(x)){
        cout << "This key exists" << "\n";
    }
    else {
        cout << "Error: No keys found" << "\n";
        
    }
}
//classes

int main() {
    //feat: map features
    map <string, int> m;
    m["monkey"] = 4; 
    m["banana"] = 3;
    m["harpsichord"] = 9; 
    // cout << m["banana"] << "\n" ; //*Output: 3 
    
    //err: can't be used to find these values, since we have set the first value to be string, while the second to be the integer
    // cout << m << "\n"; //*Output: cannot convert 'm' to type...
    // cout << m[1] <<"\n"; //*Output: no known conversion for argument 1 from int to std map 
    
    // cout << m["Jack"] << "\n"; //*Output: 0 (if the value is not there, then the value 0 is added to the map)
    //? However, what if you have the value that is 0, then how would you know if 0 shows that the value is not there
    //*Example 
    m["Trist"] = 0;
    // cout << m["Trist"] << "\n"; //*Output: 0 
    
    //feat: Check if the key exists in a map
    // map_element_check(m, "Trist"); 
    
    //feat: Prints all of the keys and values in a map 
    for (auto x: m){
        cout << x.first << ":" << x.second << endl; 
        
    }
    
    //feat: Prints the key: 
    for (auto keys : m){
        cout << "This is the key: "  << keys.first << endl;
    }
        
    for (auto values: m){
        cout << "This is the value: " << values.second << endl;
    }
}

