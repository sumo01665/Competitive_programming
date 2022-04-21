//? Summary: Messing up with the pointer types

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 1024;
    int* p = &a;
    printf("This is address and the value at the integer pointer a: \n");
    printf("Address: %d, value: %d\n", p, *p);//* Address: (122), value: 1024
    printf("Address: %d, value: %d\n", p + 1, *(p + 1));//* Address: (126), value: (weird number)
    
    char *p0 = (char*) p;
    printf("This is address and the value at the char pointer a: \n");
    printf("Address: %d, value: %d\n", p0, *p0); //*Address: (122), value: 0
    printf("Address: %d, value: %d\n", p0+1, *(p0+1)); //*Address: (123), value: 4
    //? Explain: When it is written as four bytes: the code then extract the value of a into binary form, and then use that value 
    //?             and take the outermost bytes    
}