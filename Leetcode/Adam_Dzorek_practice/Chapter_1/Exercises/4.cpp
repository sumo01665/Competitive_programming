#include <bits/stdc++.h>

using namespace std; 

int addition_integer_array(int  a[]){ 
    int sum = 0; 
    
    // while(int arr : a){
    //     sum += arr; 
    // }
    return sum;

}

int array_addition(int *a){
    // cout << *a << endl; 
    int sum = 0;
    while(*a){
        sum += *a;
        // cout << "This is a: " << *a << endl; 
        *a++; 
    }
    cout << sum << endl; 
    return 0; 
}

int main(){ 
    int intArray[] = {1,2,3};
    array_addition(intArray); 
    
    // cout << addition_integer_array(intArray); 
    

    
}

