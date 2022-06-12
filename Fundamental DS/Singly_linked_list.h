#include <iostream> 


#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

using namespace std; 

typedef int Datatype;

class IntSLLNode{
public: 
    int info; 
    IntSLLNode* next;
    IntSLLNode(){
        next = 0; 
    
    }
    IntSLLNode(int el, IntSLLNode *ptr = 0){
        info = el; next = ptr; 
    }
 
    
};

class IntSLLList{
private: 
    IntSLLList *head, *tail; 
public: 
    IntSLLList() {
        head = tail = 0; 
    }
    ~IntSLLList(); 
    int isEmpty(){
        return head == 0; 
    }
    void addToHead(int); 
    void addToTail(int);
    int deleteFromHead();
    int deleteFromTail(); 
    void deleteNode(); 
    bool isInList(int) const; 
    
    
};



#endif