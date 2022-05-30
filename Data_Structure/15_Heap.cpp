#include <stdio.h>
#include <stdlib.h>

int main(){
    int a; //goes on stack
    int (*p); 
    p  = (int*)malloc(sizeof(int)); //? How much memory to allocate in the heap (in bytes(integer is 4 bytes))
                                    //? Malloc will return the void pointers
    printf("This is the memory address of the pointer: %d \n", p); //* (integer address) 
    *p = 10; //? I want to put this value into this memory address
             //? Local variables
    printf("%d \n",*p);          
    //Modification of the heap 
    free(p); 
    p = (int *)malloc(sizeof(int)); //? This will point to another memory address
    *p = 20; 
    printf("%d \n", p); 
    printf("%d \n",*p); 
}