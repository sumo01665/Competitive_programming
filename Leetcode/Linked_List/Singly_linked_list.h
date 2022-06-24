
#include <bits/stdc++.h> 
using namespace std; 


#define SINGlY_LINKED_LIST
#ifndef SINGLY_LINKED_LIST


// Definition for singly-linked list.
struct ListNode {
     //Public access
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
     ~ListNode(); 
     
     
     
};

class SinglyLinkedList{
private: 
   ListNode l1; 
   int *head; 
   int *tail; 
   
public: 
    void print(); 
    bool insert(auto var, int index); 
    bool remove(auto var, int index); 
    bool replace(auto var, int index); 


};

#endif 