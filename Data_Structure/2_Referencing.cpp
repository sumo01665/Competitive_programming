#include <bits/stdc++.h>

using namespace std;
 
//Macros
#define LOG(x) cout << x << endl; 
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long LL; 
//Functions
void Increment(int value1, int& value2){
    value1++;
    value2++; 
    
}
void Increment2(int *value1){
    (*value1)++; 
    
}

int main() {
    //? Summary: Reference are just pointers in disguise, which is a syntax sugar on top of the pointer that is easier to read and easier to follow
    //? It's a way to refer the existing variables
    
    //? You can't refer to itself using References
    //! This is not derefence 
    int var = 9;
    int var2 = 2;
    int& ref = var; //? This one is an alias with the preexisting value
    //? This is not the variables, it is just the reference of the value    
    //? This ref variable does not exist, it just exists in our source code 
    // LOG(ref); //*Output: 9  
    
    ref = 2; 
    // LOG(ref); //*Output: 2
    // cin.get(); 
    Increment(var,var2);
    // cout << var << endl; //*Output: 2 
    // LOG(var2); //*Output: 3
    Increment2(&var); 
    // LOG(var); //*Output: 3    
    
    //? Can you relocate the reference to another?
    //* Example here: 
    int a = 5; 
    int b = 8; 
    int &reference  =a; 
    reference = b; 
    // LOG(a); //*Output: 8
    //*Output: a = 8, b = 8
    
    //How to switch it about what it is pointing toward: 
    int a1 = 5; 
    int b1 = 7;
    int* ref1 = &a1; //*If I output the ref1 here: I will get 5 as the answer
    //? It is pointing toward the memory address of the value a1
    //Dereference it first by assigning the value for the a1 to be 5
    *ref1 = 5; 
    ref1 = &b1; 
    LOG(ref1);  //*Output: 7 (or it is an alias with the b1)
}