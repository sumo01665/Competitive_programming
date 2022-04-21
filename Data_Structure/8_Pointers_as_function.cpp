//? Summary: Explaining the difference between the pass by value and pass by reference

#include <bits/stdc++.h>

using namespace std;


//Macros
#define LOG(x) cout << x << endl; 
#define TEXTLOG(x,y) cout  << x << y << endl; 

//Functions 
void increment(int a){
    a++; 
    TEXTLOG("Address of the a value in the increment function is: ", &a); //* (112)  
}

void increment2(int* a){
    (*a)++; 
    TEXTLOG("Address of the a value in the increment function is: ", a); //* (124)  
    
}
int main(){
    int a = 0;
    increment2(&a); 
    TEXTLOG("Address of the a value in the main function is: ", &a); //* (124)
    cout << a << endl; //* 0

}