//? Summary: Working with arrays and pointers
#include <bits/stdc++.h>
using namespace std; 

#define TEXTLOG(x,y) cout << x << y << endl;
#define LOG(x) cout << x << endl;

void print(char* c){
    
    while(*c != '\0'){
        printf("%c", *c); 
        c++;
        
    }
    printf("\n"); 
}

int main(){
    char C[20] = "Tristan"; 
    print(C); 

}