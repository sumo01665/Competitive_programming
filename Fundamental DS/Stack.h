#include <bits/stdc++.h>

using namespace std; 

#ifndef STACK_DS
#define STACK_DS


class Node{
    int data; 
    Node * next;    
public: 
    Node(int x):data(x), next(nullptr){}; 
}; 


//Creating the Node
class Stack{
private: 
    Node* top;
    unsigned int capacity; 
    unsigned int size; 

        
//Copy constructor
    Stack(const Stack& rhs){}; 
    
//Asignment operator
    Stack& operator =(const Stack* rhs){}; 
    


public: 
    //Constructor
    Stack();  
    
    //Destructor
    ~Stack(); 
    
    //Calling function 
    void clear(); 
    void isEmpty(); 
    void push(int el); 
    void pop(); 
    void topEl(); //Return the top elements
     


};


#endif

