//? Summary: Policy-based data structures
        // - supports some data structures that are not part of the C++ standard library
        
#include <bits/stdc++.h>
using namespace std; 
//! To use these structures, the following lines must be added to the code: 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds; 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set; 

int main() {
    //feat: Indexed_set
    indexed_set s; 
    s.insert(3);
    s.insert(5);
    s.insert(23);
    s.insert(6);
    s.insert(6); 
    
    //feat: finding the elements that return the indices of a sorted array
    auto x  = s.find_by_order(2);
    cout << *x << "\n"; //*Output: 6
    auto y = s.find_by_order(3); 
    cout << *y << endl; //*Output: 23 
                        //? Because they will ignore the extra bits in the set
    cout << s.order_of_key(6) << endl; //*Output: 2
    
    //? Printing out the order of key of non-existed key
    cout << s.order_of_key(20) << endl; //*Output: 3
    cout << s.order_of_key(21) << endl; //*Output: 3 
    
}