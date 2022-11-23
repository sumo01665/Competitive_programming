#include <bits/stdc++.h>


using namespace std;

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 


//* Global variables
const int NUMBER = 10; 

//?Function prototype
void merge_sort(int & array, int size); 


//? Function 
void merge_sort(int & array, int size){
    int first_half_size = 0; 
    int second_half_size = size/2; //? Second_half_size := univesal size of the array
    const int UNIVERSAL_SIZE = second_half_size; 
    int subarray_firsthalf [UNIVERSAL_SIZE], subarray_secondhalf [UNIVERSAL_SIZE]; 

    
    for (int i = 0; i < second_half_size; ++i){
        subarray_firsthalf[i] = array[first_half_size]; 
        
    
    
    }
    
    
    
    
    return; 


}


int main(){  
    int array[] = {2,53,12,42,6,43,7,88}; 
    int size = sizeof(array)/sizeof(array[0]); 
    
    
    
    
    return EXIT_SUCCESS;
}