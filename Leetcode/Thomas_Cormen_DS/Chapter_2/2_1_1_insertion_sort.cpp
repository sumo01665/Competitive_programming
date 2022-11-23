#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

//Function prototype
void vector_print(vector <int> vect); 


//Function write-up

void insertion_sort( vector <int> & arr){ 
    int temp; 
    for (int i = 0; i < arr.size(); ++i){ 
        for (int j = 0; j < arr.size(); ++j){ 
            if (arr[j] > arr[i]){
                temp =  arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            
            }
            
        
        }
        
    
    }

}




int main(){ 
    vector <int> arr =  {31,41, 59, 26, 41, 58}; 

    insertion_sort(arr );   
    
    vector_print(arr); 

}

void vector_print(vector <int>  vect){ 
    auto i  = 0; 
    for (;i < vect.size(); ++i){ 
        cout << vect[i] << ", "; 
    
    }

}