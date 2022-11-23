#include <bits/stdc++.h> 


using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

//? Global variables

void insertion_sort(int nums[], int size){
    for (int index1= 1; index1 < size; ++index1){ 
        int tmp = -10; 
        
        // for (int index2 = 1; size2 < index2; ++size2){
            
        //     /*
        //     ? If the one next to the second one, return the value 
        //     ? 
        //     */
        
            
        //     if (nums[index1 - 1] > nums[index1]){
        //         swap(nums[index1], nums[index2]); 
            
        //     }
        
        
        
        // }  
        
        
        // ? Question about the indexes: while(nums[index1] < nums[index1 - 1])
        // {
            
        //     swap(nums[index1], nums[index1 - 1]);
            
            
        // }
        
        
        for (int index2 = index1;  index2 > 0; --index2){ 
            cout << "This is the second index: " << nums[index2] << endl; 
            if (nums[index2] < nums[index2 - 1])
            {
                // swap(nums[index2], nums[index2 - 1]); 
                tmp = nums[index2 - 1]; 
                // cout << tmp << endl; 
                nums[index2 - 1] = nums[index2]; 
                
                
                nums[index2] = tmp; 
                
            }
            else break; //? not swapping anymore
        
        }
    
    
    }



}

int main(){ 
    int a[] = {2,35,24,64,62,4, 58, -5,20}; 
    int size = sizeof(a)/sizeof(a[0]); 
    insertion_sort(a, size); 
    

    for (int i = 0; i < size; ++i){ 
        cout << "This is the value of the number: " << a[i] << endl; 
        
    }
    
    

}