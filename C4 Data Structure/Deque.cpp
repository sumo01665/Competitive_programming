//? Summary: Talking about deque
    // - Deque is a dynamic array whose size can be changed at both ends of the array
    //  - It can be provided as push_back and pop_back, but it is also possible to use push_front (which is not available in a vector)
#include <bits/stdc++.h>
using namespace std; 

int main() {
    deque<int> d; 
    
    d.push_back(5); //[5]
    d.push_back(5454); //[5,5454]
    d.push_front(3); //[3,5,5454]
    d.pop_back(); //[3,5]
    
    /* 
    ? A deque is more complex entity than a vector, so it is slower than a vector
    ? Adding and removing elements take O(1) time on average at both ends. 
    
    */
    //Printing the element out of the queue
    for (int i = 0; i < d.size(); i++){
        // cout << d[i] << "|"; 
    }
    
}