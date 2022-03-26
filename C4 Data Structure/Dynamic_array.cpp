#include <bits/stdc++.h> 

using namespace std; 

int main() {
    vector <int> v; 
    v.push_back(3); 
    v.push_back(2); 
    v.push_back(5); 
    
    // cout <<  v[0] << endl; //*Output: 3
    // cout << v[1] << endl; //*Output: 2
    //? For-loop to print what is inside the array
    for (int i  = 0; i < v.size(); i++){
        // cout << v[i] << "|"; //* Output: 3|2|5|
        
    }
    
    //? Another way to print out the for-loop
    for (auto x : v) {
        // cout << x << "|"; //*Output: 3|2|5
    }
    
    //feat: back()
    //? Return the last element of the vector 
    // cout << v.back() <<  endl; //*Output: 5
    
    // feat: pop_back()
    //? Removes the last element of the vector 
    v.pop_back(); 
    // cout << v.back() <<  endl; //*Output: 2
    
    //feat: No push/pop way
    vector<int>v2 = {1,2,32,5,34}; 
    for (int i = 0; i < v2.size(); i++)
    {
        // cout << v2[i] << "|"; //*Output: 1|2|32|5|34|
    }   
    
    //feat: Initialize the size of the vector
    //? size 10, initial value 0
    vector<int> v3(10); 
    
    //? size 10, initial value 5
    vector<int> v4(10, 5); 
    
    //feat: String can behave like the array
    string a = "Trist"; 
    string b = a + a;
    cout << b << '\n'; //*Output: TristTrist
    b[5] = '&';
    cout << b << endl; //*Output: Trist&rist
    //feat: substr
    //? Substr have the two parameters, the first one indicates the position where the letter is taken from, the second one indicates how long the letter should be
    string c = b.substr(3,4);
    cout << c << endl; //*Output: st&R
    
}