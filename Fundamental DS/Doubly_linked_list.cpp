#include "doubly-linked-list.h"
using namespace std;

DoublyLinkedList::Node::Node(DataType data) {
    this->value = data;
    next = nullptr;
    prev = nullptr;

}


DoublyLinkedList::DoublyLinkedList() {
    head_ = nullptr;
    tail_ = nullptr;
}


DoublyLinkedList::~DoublyLinkedList() {

}


unsigned int DoublyLinkedList::size() const {

}


unsigned int DoublyLinkedList::capacity() const {

}


bool DoublyLinkedList::empty() const {
    return head_ == 0;
}


bool DoublyLinkedList::full() const {
    return tail_ != 0;
}


DoublyLinkedList::DataType DoublyLinkedList::select(unsigned int index) const {

}


unsigned int DoublyLinkedList::search(DataType value) const {

}


void DoublyLinkedList::print() const {
    if (head_ == nullptr) {
        return;
    }
    //print all nodes
    Node *temp = head_;
    while (temp != nullptr) {
        cout<< temp-> value << "->";
        temp = temp->next;
    }
    cout<< endl;
}


DoublyLinkedList::Node* DoublyLinkedList::getNode(unsigned int index) const {

}


bool DoublyLinkedList::insert(DataType value, unsigned int index) {

}


bool DoublyLinkedList::insert_front(DataType value) {

}


bool DoublyLinkedList::insert_back(DataType value) {

}


bool DoublyLinkedList::remove(unsigned int index) {

}


bool DoublyLinkedList::remove_front() {

}


bool DoublyLinkedList::remove_back() {

}


bool DoublyLinkedList::replace(unsigned int index, DataType value) {

}


int main(){
    DoublyLinkedList 

}