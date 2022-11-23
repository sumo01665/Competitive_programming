#include <bits/stdc++.h>

using namespace std; 

static int fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

void selection(int nums[], int size){
    int tmp = 0; 
    int index_rem = 0,index2 = 0; 
    

    for (int i = 0; i < size; ++i){
        tmp = nums[i]; 
         
        index2 = i; 
        // cout << "This is tmp: " << tmp << endl; 
        for (int i2 = 1; i2 < size; ++i2){ 
            tmp = min(tmp, nums[i2]); 
            if (tmp == nums[i2]){ 
                index2 = i2;
                cout << "This is the index that return: " << index2 << endl; 
            }
            // cout << "Temporary tmp here is: " << tmp << endl; 
        }
        cout << "Nums index2 check: " << nums[index2] <<  ", nums temporary index: " << nums[i] << endl; 
        swap(nums[index2], nums[i]);     
        // cout <<  "index 0 at the position of the first array is: " <<  nums[size - 1] << endl; 
    }
}

int main(){ 
    int a[] = {42,53,564,12,535,1,-6}; 
    int size = sizeof(a)/sizeof(a[0]); 
    selection(a, size); 
    
    
    for (int i = 0; i < size; ++i){
        cout << a[i] << endl; 
   
    }
    



}