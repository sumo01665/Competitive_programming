#include <bits/stdc++.h>

using namespace std; 

//Macros
#define TEXTLOG(x,y) cout << x << y << endl; 
#define LOG(x) cout << x << endl; 

void moveZeroes(vector<int>& nums) {
        int* firstPointer = (int*)&nums;
        int* lastPointer  = (int*)(&nums + 1) - 1; 
        LOG(lastPointer);  
        LOG(firstPointer); 
        
        for (int i = 0; i < size(nums); ++i){
            
            if (nums[i] == 0){
                *lastPointer = nums[i];  
                lastPointer -= 1; 
                TEXTLOG("This is last pointer: ", lastPointer); 
            }
            
            else{
                *firstPointer = nums[i]; 
                firstPointer += 1; 
                TEXTLOG("This is the first pointer: ", firstPointer); 
            
            } 
        }
         
}
/* 
Templates: 
void moveZeroes(vector<int>& nums) {
        int *firstPointer = 0;
        vector<int>& solution; 
        
    }
*/

int main() {
    vector <int> nums = {0,24,12,2,0,52,4,0}; 
    cout << "Something is running here!" << endl; 
    moveZeroes(nums);
    
    cout << endl; 
    for (auto i: nums){
        cout << i << "|"; //*
    }

}