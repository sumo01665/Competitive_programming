//? Summary: Finding the longest increasing subsequence in an array of n elements
//? Basically, if from the left to the right, the number is larger than the previous one, then you add them into the list

#include <bits/stdc++.h>
using namespace std; 
//Macros

//Global variables
const int N = 6; 
//Function 

int main() {

    vector <int> arr= {1,3,5,2,5,6,1,3,8,7,5,7,8,9,12};
    int length[] = {}; 
    int n = arr.size();
    cout << arr[3] << endl; 
    for (int k = 0; k < n; k++){
        length[k] = 1;
        cout << k << endl; 
        for (int i = 0; i < k; i++){
            cout << "This is i: " << i << endl; 
            if (arr[i] < arr[k]){
                length[k] = max(length[k], length[i] + 1); 
                cout << "This is the highest value: " << length[k] << endl; 
            }
        }
        /* for (int i = 0; i < k; i++){
        cout << i << endl;
            
        } */
    }

    cout << "what" << endl; 
    
    

}