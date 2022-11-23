#include <bits/stdc++.h> 

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);  return false;}();

struct Node{
    char * name; 
    int age;
    Node (char * n =  " ", int a = 0){ 
        name = strdup(n); 
        age = a; 
    
    }


};


int main(){ 
    fast_io; 
    Node node1("Trist", 20), node2("Jack"); 
    Node node3(30);
    
    
    cout << node1.age << ", " << node1.name << endl; 
   
    
    
    

}