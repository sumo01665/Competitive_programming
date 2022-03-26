//? Summary: What is Set? 
#include <bits/stdc++.h>

using namespace std; 

//Adding macros here

//Function

//? What is set
/* 
    - Set is a data structure that maintains a collection of elements
        Operation: Insertion, search and removal
    - We have two sets implementation for the C++ standard library: + ordered set that is based on a balanced binary tree with its operations work in O(log(n))
                                                                    + unordered set is based on hashing, and its operation time is O(1)
                                                                    
                                                                    
*/

int main(){
    //feat: Creating the set
    set<int> s; 
    s.insert(3);
    s.insert(2);
    s.insert(5);
    // cout << s.count(3) << endl; //*Output: 1
    // cout << s.count(2) << endl; //*Output: 1
    // cout << s.count(69) << endl; //*Output: 0
    s.erase(3); 
    s.insert(69); 
    // cout << s.count(3) << "\n"; //*Output: 0
    // cout << s.count(69) << "\n"; //*Output: 1
    
    //feat: Making set in one line
    set <int> s2 = {2,343,53,12};
    // cout << s2.size() << "\n"; //*Output: 4
    for (auto x : s2){
        // cout << x << "|"; //*Output: 2|12|53|343|
    }
    // cout << endl; 
    //? Properties: 
    //! An important property of a set is that all elements are distinct
    s.insert(5);
    s.insert(5);
    s.insert(5);
    // cout << s.count(5) << "\n"; //*Output: 1
    
    //feat: Multiset
    //? This is for the unordered_multiset that can provide the multiple similar variables into one set
    multiset <int> s3; 
    s3.insert(5);
    s3.insert(5); 
    s3.insert(5);
    // cout << s.count(5) << endl; //*Output: 3
    
    //feat: erase element in multiset 
    s3.erase(5); 
    // cout << s3.count(5) << "\n"; //*Output: 0 
    
    multiset<int> s4;
    s4.insert(5);
    s4.insert(5);
    s4.insert(5); 
    s4.erase(s4.find(5));
    // cout << s4.count(5) << "\n"; //*Output: 2
    
    

}