#include <bits/stdc++.h>
using namespace std; 

struct Node{
    int data; 
    Node* next; 

};

void copyLinkedList(Node* &head){ 
    Node* current = head; 
    Node* temp = nullptr; 
    while(current != nullptr){
        temp ->data = current -> data; 
        
    }

}

void reverse(Node* &head){
    Node* current =  head; 
    Node* previous = nullptr; 
    while (current != nullptr){ 
        Node* nextNode = current -> next; 
        previous -> next -> data  = previous -> data; 
        current = nextNode; 
    }
    head = previous; 
}


int main(){ 
    Node* head; 
    head -> data = 1; 
    head -> next -> data = 2; 
    head -> next -> next -> data = 3; 
    for (int i = 0; i < 5; ++i){
        head -> data = i; 
        head = head -> next; 
    }
    
    for (int i = 0; i < 5; ++i){
        cout << head -> data << "->"; 
        head = head -> next; 
    }
    
}

