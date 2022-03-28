//? Summary: Stack
    //- Stack is a data structure that provides two O(1) time operations: adding an element to the top, and removing an element from the top
    //? It is only possible to access the top element of a stack (Thinking of this as a bottle, the last element is the one on the top)
    
#include <bits/stdc++.h>
using namespace std; 

int main() {
    stack<int> s; 
    s.push(5);
    s.push(3);
    s.push(43);
    cout << s.top() << endl; //*Output: 43
    s.pop(); 
    cout << s.top() << endl; //*Output: 3
}