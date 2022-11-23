#include <bits/stdc++.h>
using namespace std; 


static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 


//* p  <= q  < r 

void merge_sort(vector <int> & arr, int p, int q, int r){
// A[p ... q] => p <= q < r
//? A[p ... q] and A[q + 1 ... r] are in sorted order
    
    //? let n1 = size of array 1, n2 = size of array 2
    int n1 = q - p  + 1; 
    int n2 = r - q; 
    vector <int> L(n1); 
    vector <int> R(n2);
}



int main(){ 
    vector <int> a = {2,3,45}; 
    int p  = 3, q = 5, r = 1; 
    merge_sort(a, p ,q, r); 
    return 0; 


}