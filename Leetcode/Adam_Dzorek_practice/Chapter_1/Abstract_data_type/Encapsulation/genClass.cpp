#include <bits/stdc++.h>


using namespace std;


template<class genType, int size = 50>
class genClass { 
    
    genType storage[size]; 

};

genClass<int> intObject1; 
genClass<int, 100> intObject2; 
genClass<float, 123> floatObject3; 


template<class generalType> 
void swap(generalType *el1, generalType *el2){ 
    generalType tmp;
    tmp = el1; el1 = el2; el2 = tmp; 


}

//? Swapping the two functions





int main(){ 
    int a = 2; 
    int b = 3; 
    
    
    swap(a,b); 
    cout << "This is a: " << a << ", "<< "This is b: " << b << endl; 


}