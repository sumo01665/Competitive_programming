//*Summary: Sorting is a fundamental algorihtm design problem

//feat: Sorting theory: Given an array that contains n elements, your task is to sort the elements in increasing order 

#include <bits/stdc++.h>
using namespace std; 

//Define macros and typedef
#define REP(i,a,b) for(int i = 0; i < n; i++);
typedef long long LL; 

//Useful function written here
bool comp(string a, string b){
        if (a.size() != b.size()) return a.size() < b.size(); 
        return a < b; 
    }
    
//Useful classes and struct can be used here

//? To print out the input of the sort, the following lines of code can be used throughout the coding
// for (int i = 0; i < n; i++){
//         cout << arr[i] << endl; 
//     }
 

int main() { 
    int arr[] = {23,43,324,3,112,13,12,5};
    int n = sizeof(arr)/ sizeof(arr[0]); 
    
    // cout << n; //*Check for the array size
    //feat: Bubble sort
    // for (int i = 0; i < n; i++){
    //     for( int j = 0; j < n-1; j++){
    //         if (arr[j] > arr[j+1])
    //         {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
        
    // }
    
    //? What is inversions: A pair of array elements. This array element indicates how much works needed to sort the array.  
    //To put it into perspective,the sum of the array should be: (n - 1) + ... + 2 + 1 is the total amount of inversion from each iteration 
    
    //feat: Merge sort O (n log n)
    //* Procedure for merge sort
    // If a = b, do not do anything, then don't change anything
    // 1. Calculate the position of the middle element: k = floor((a + b)/2)
    // 2. Recursively sort the subarray array[a... ]
    // 3. Recursively sort the subarray array[a...k] 
    // 4. Recursively sort the subarray array [k+1 ... b]
    // 5. Merge the sorted subarrays array[a...k] with the subarray[k+1 ... b]
    
    // 1 + 2 + 3 + 4 + ... + (n - 1) = n(n-1)/2 = O(n^2)
    
    //log2(n!) = log2(1) + log2(2) + ... + log2(n)
    //Which is log2(n!) >= (n/2)*log2(n/2)
    //! So that n log n is the minimum possible number of steps in a sorting algorithm
    
    //feat: Sorting lower bound (sort comparing algorithms)
    //feat: Counting sort (This is generally work for number or any list that have been known before)
    //Considering that the array of the integer is known (c = O(n) of numbers between 0 to n):
    //If we have a premade bookeeper data structure (which will be known as hash map), you can store the number it would become inside a bookeeper.

    //? Sorting in C++ (sort function)
    // This is used in the competition 
        //? Benefit
        //1. Saving time implement another sorting algorithm 
        //2. The library implementation is correct and efficient (Impossible to have another sorting algo that is better)
        
    //feat: sort C++ function 
    vector<int> v = { 4,2,3,53,32,123,4,15,3434}; 
    //todo: vector sort in increasing order
    sort(v.begin(), v.end()); 
    //? Finding the size of the vector, you put into the vector the v.size()
    
    // for (int i = 0; i < v.size(); i++){
        
    //     cout << v[i] << "|"; //*Output:2|3|4|4|15|32|53|123|3434|
    // } 
    
    
    //todo: vector sort in decreasing order
    sort(v.rbegin(), v.rend());
    // for (int i = 0; i < v.size(); i++){
        
    //     cout << v[i] << "|"; //*Output: 3434|123|53|32|15|4|4|3|2|
    // } 
    
    //todo: Sorting ordinary arrays 
    // sort(arr, arr + n); //*Output: 3|5|12|13|23|43|112|324|
    //? What if we have a smaller amount of sorting? 
    // sort(arr, arr + (n-1)); //*Output: 3|12|13|23|43|112|324|5|
                            //? The last element of the sort will be ignored, but the others will get sorted
    //! If you have both sort at the same time running, the array is already sorted. Comment the previous sort again is a good practice. 
    //! If you are using VSCode, then the quick way to comment/ uncomment something is to Ctrl + / 
    //? What if we have a smaller amount of sorting? 
    // sort (arr, arr + (n + 1)); //*Output: 3|4|5|12|13|23|43|112| //The random 4 is there, but it's just filling the gap here, the last member (324), is not getting printed
                                  //You can try to change the number in arrays to see if the array becomes different
                               //? This is a finicky order, they will insert the value that being name here
                               
    //todo: Sorting alphabet
    // string s = "TristTruong";
    // sort(s.begin(), s.end()); 
    // for (int i = 0; i < s.length(); i++){
    //     cout << s[i] << "|"; //*Output: T|T|g|i|n|o|r|r|s|t|u|
    // }
    
    //feat: Comparison operators
    //Sorting the value of pair, usually the first. If both are equal, they will sort the second
    //todo: vector 
    vector<pair<int,int>> vec; 
    vec.push_back({10,2}); 
    vec.push_back({2,5});
    vec.push_back({2,3}); 
    sort(vec.begin(), vec.end());
    // for (int i = 0; i < vec.size(); i++){
    //     cout << vec[i].first << "," << vec[i].second << "|"; //*Output:  2,3|2,5|10,2|
        
    // }
    
    //todo: tuple
    vector<tuple<int, int, int>> vec2; 
    vec2.push_back({1,2,232}); 
    vec2.push_back({3,43,22});
    vec2.push_back({1,2,3}); 
    sort(vec2.begin(), vec2.end()); 
    // for (int i = 0; i < vec2.size(); i++){
    //     cout << get<0>(vec2[i]) << "," << get<1>(vec2[i]) << "," << get<2>(vec2[i]) << "|"; //*Output:  1,2,3|1,2,232|3,43,22|
        
    // }
    
    //todo: user-defined structs
    //! Please use the struct outside of main. This is the same as classes in C++, but usually been used in C setting.
    //? So basically, we modify the operator < by using struct.
//     struct P {
//     int x, y; 
//     bool opeartor<(const P &p){
//         if (x != p.x) return x < p.x; 
//         else return y < p.y; 
        
//     }

// };
    //? Structs do not have a comparison operator automatically. The operator should be defined inside th struct as a function operator< 
    
    //todo: comparison functions
    //! Please use the struct outside of main (at the top). This is the same as classes in C++, but usually been used in C setting.
    //! Otherwise, any function inside of main will not be declared in the scope
    // bool comparison(string a, string b){
    //     if (a.size() != b.size()) return a.size() < b.size(); 
    //     return a < b; 
    // }
    
    string a = "jack", b = "troll";
    // cout << comp(a,b); //*Output: 1 (or true)
    //? Reference for the template of the sort function https://www.cplusplus.com/reference/algorithm/sort/
    

    // sort(a,b,comp) ;
    vector<string> vec3; 
    vec3.push_back("jack");
    vec3.push_back("trist");
    vec3.push_back("tommy"); 
    vec3.push_back("fanny"); 
    sort(vec3.begin(), vec3.end(), comp);
    for (string i : vec3){
        cout << i << "|"; //*Output: jack|fanny|tommy|trist|
                          //? With the function comp, it compares whether the letter with the smallest amount of letters, and then goes on and compare with the 
                          //? letter position that they get assigned in ASCII. Hence, uppercase will go first, then lowercase. 
    }
    
    return 0; 
    
    //? Extracting the elements from the arrays
    // for (int i = 0; i < (n); i++){
    //     cout << arr[i] << "|";
    // }
    
}


