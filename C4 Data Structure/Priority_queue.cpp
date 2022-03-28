//? Summary: Priority Queue
    // - A priority queue maintains a set of elements. 
    // - It is used for insertion, and retrieval and removal of either the minimum or maximum element
    //! Insertion and removal take O(log(n)) time, and retrieval takes O(1) time
    
    //? A priority queue is implemented using a ehap structure that is much simpler than a balanced binary tree in an ordered set
    
#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> q; 
    q.push(3);
    q.push(5);
    q.push(2);
    q.push(14);
    q.push(52);
    q.push(5);
    cout << q.top() << endl; //*Output: 52
    q.pop(); 
    cout << q.top() << endl; //*Output: 14
    q.push(15);
    cout << q.top() << endl; //*Output: 15
    
    //feat: Creating a prior. queue that supports finding and removing the smallest element 
    priority_queue<int, vector<int>, greater<int>> q2; 
    

}