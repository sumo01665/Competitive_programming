#include <bits/stdc++.h>
using namespace std;


static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

struct Node{
    char *name; 
    int age; 
    Node(char *n = "", int a = 0){
        name = strdup(n);
        age = a; 
    }
    
    //? Copy constructor
    Node(const Node& n){
        name = strdup(n.name); 
        age = n.age; 
        
    }; 
    
    //? Assignment constructor
   Node& operator = (const Node& n){
    if (this != &n){ //No assignment to itself
        if (name != 0)
            free(name); 
        name =  strdup(n.name); 
        age =  n.age; 
        
        
        
    }
    return *this; 
   }
};



int main(){
    Node node1("Roger", 20);
    Node node2(node1); 
    
    strcpy(node2.name, "Wendy"); 
    node2.age = 30; 
    
    string node2_name = node2.name; 
    cout << "Name & age 1st per: " << node1.name << ", " << node1.age << endl; 
    cout << "Name & age 2nd per: " << node2.name << ", " << node2.age << endl; 
    //err: Not having the copy constructor
            
            
    Node node3; 
    
    node3.name = "Jack"; 
    node3.age = 14; 
    node1 = node3; 
    node1.name = "Trist"; 
    
    cout << "Name & age 3rd per: " << node3.name << ", " << node3.age << endl; 
    cout << "Name & age 1st per: " << node1.name << ", " << node1.age << endl; 
     

    
    
    
    
    
}