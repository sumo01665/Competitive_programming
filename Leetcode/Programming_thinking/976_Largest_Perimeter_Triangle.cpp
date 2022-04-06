// ? Description: 
#include <bits/stdc++.h>

using namespace std;

static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return 0;}(); 
//Function 
//feat: Straight-forward solution 
int largestPerimeter(vector<int>& nums) {
        /* 
        If the sum of the any number is larger or equal to the third number, then it must be the triangle 
        
        */
    sort(nums.rbegin(), nums.rend());
    int a = nums[0];
    int b = nums[1]; 
    int c = nums[2]; 
    for (int i = 0; i < nums.size() + 2; i++){
        if (c == 0){
            return 0; 
            
        }
        a = nums[i];
        b = nums[i + 1]; 
        c = nums[i + 2]; 
        if (a + b > c && a + c> b &&b + c > a ) {
            return a + b + c; 
        }    
    }
    return 0;  
}

//feat: Modification 
int largestPerimeter2(vector<int>& nums) {
    sort(nums.rbegin(), nums.rend()); //Runtime: O(n log n)
    
    for (int i = 0; i < nums.size() + 2; i++){ //Runtime: O(n + 2)
    //? It's obvious that the number at the front will be bigger than the number at the back, so only need to check one case
    //? It's also obvious that if it reaches zero in a sorted array, then the next number after the one that assign jobs (which their sum) will not be bigger. 
    if (nums[i + 1] +nums[i + 2] > nums[i] ) {
            return nums[i] + nums[i + 1] + nums[ i + 2]; 
        }    
    }
    return 0; 
    // O(n log(n) + n) = O(n * log(n))
}

//feat: Loop modification 
int largestPerimeter3(vector<int>& nums) {
    sort(nums.rbegin(), nums.rend()); //Runtime: O(n log n) 
    for (int i = 2; i < nums.size(); i++){
        if (nums[i - 1] +nums[i] > nums[i - 2] ) {
            return nums[i] + nums[i - 1] + nums[ i - 2]; 
        }    
    }
    return 0; 
}

//feat: Smaller thing to think about
int largestPerimeter(vector<int>& nums) {
        //? If the size of the array is smaller than 3, then it is obvious that the array is the best
        if (nums.size() < 3){
            return 0; 
        }
        //? rbegin runtime seems to be longer than rend runtime, so:
        sort(nums.begin(), nums.end()); //Runtime: O(n log n) 
        
        for (int i = nums.size() - 3; i >= 0; i--){
        //? Even it's obvious, the code should have ended if it reaches 0 to optimize the code: 
            if (nums[i] == 0){
                return 0; 
            }
            if (nums[i + 1] +nums[i] > nums[i + 2] ) {
                return nums[i] + nums[i + 1] + nums[ i + 2]; 
        }    
    }
    return 0; 
}
//Template
/* 
int largestPerimeter(vector<int>& nums) {
       
}
*/
int main(){
    vector <int> nums  = {4,0,7, 10};
    cout << largestPerimeter2(nums); 
}