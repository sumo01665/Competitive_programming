//? Summary: Beginning to the coding interview

//feat: Include header: bits/stdc++.h shows every header files for the code
// Library
#include <bits/stdc++.h>

// Using namespace (bad practice, but with small amount of files, we can gloss over it)
using namespace std; 

int main() {
    //? The cin and cout are insidious, so to overcome the risk of oversimplification, integration of programming should be different
    ios::sync_with_stdio(0); //? 0 = false, so that if printing with cout and printf will be different, IOW, they can intervene each other
                             //TODO: It disabled the synchronization between the C and C++ standard streams
    cin.tie(0); //TODO: It makes the cin goes faster than the cout (as it has not been flushed (or displayed on the screen yet))
    // string name = " ";
    // cout << "Enter name: \n"; //*Output: Then the Enter name: will be printed out later
    // cin >> name; //*Output: (this cin goes first)
    // cout << name << "! What a great name!";
    //? By default, cin is tied into cout, so if the tie is gone, then the cin will perform faster and in facts will get printed out faster
    
    //? The input and the output
    //feat: input (std::cin) and output (std::cout)
    // int a = 123 ,b = 456; 
    string x = "monkey"; 
    // cout << a << ""<< b << "" << x; 
    //? cin and cout are usually the bottleneck of the programming: which is similar to say that they slow the program down 
    
    
    //feat: \n vs endl 
    //? The newline are generally faster than endl, since endl cause a flush operation
    
    //feat: scanf and printf vs cout and cin
    //? scanf and printf are the functions in c functions, and they are performing faster
    // int a, b; 
    // scanf("%d %d", &a, &b); //*Input: two numbers 
    // printf("%d %d \n", a, b);  //*Output: 12 34
    // printf("%d %d \n", &a, &b); //*Output: (The memory location of the data)
       
    // string s; 
    // getline(cin, s); //*Input: Whassup homie 
    // cout << s << "\n"; //*Output: Whassup homie
    // getline(scanf, s); //Err: This doesn't work with the scanf
    // printf("%s \n" , s); //*Output: p¨▀Íß(Random letter) 

    // while(cin >> x){
        //Some code to make it stop here is possible
        //? This loop reads elements from the input one after another, until there i no more data available in the input
    // } 
    
    //feat: file input and file output 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); //*FileOutput: Because I ave the input.txt in the same directory, then the output is coming out
    
    
}