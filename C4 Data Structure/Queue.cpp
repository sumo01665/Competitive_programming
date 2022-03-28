//? Summary: Queue
    //- A queue provides two O(1) time operations: adding an element to the end of the queue, and removing the first element in the queue
    
#include <bits/stdc++.h> 
using namespace std; 
    
int main(){
    queue<int> q; 
    q.push(34);
    q.push(344);
    q.push(53);
    cout << q.front() << endl; //*Output: 34
    q.pop();
    cout << q.front() << endl; //*Output: 344
}