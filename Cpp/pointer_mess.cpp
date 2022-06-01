#include <bits/stdc++.h>

using namespace std; 

//? Class initialization 
struct Node{
    char* name; 
    int age; 
    
    Node(char* n = 0, int a = 0){
        name = strdup(n); 
        age = a; 
       
    }; 
    
    Node (const Node& n){ //Copy constructor
        name =  strdup(n.name); 
        age = n.age; 
    }
    //Operation overload (assignment operator)
    Node& operator = (const Node & n) {
        if (this != &n){
            if (name != 0){
                free(name); 
            }
            name = strdup(n.name); 
            age = n.age; 
        }
        
        return *this; 
    }
    
    Node& operator > (const Node & n) {
        
    }
    
    ~Node() {
        if(name != 0){
            free(name); 
        }
    }
};


int main(){
    Node node1("Trist", 20), node2(node1); 
     
    //Here's the messing up part
    // strcpy(node2.name, "Wendy");
    node2.name = "Wendy"; 
    node2.age = 65; 
    
    cout << "Here is the node 1 implementation: " << node1.name << ". And here's his age: " << node1.age << endl; 
    cout << "Here is the node 2 implementation: " << node2.name << ". And here's her age: " << node2.age << endl;
    //! Disappeared 
    
    
    
    
    return 0; 

}