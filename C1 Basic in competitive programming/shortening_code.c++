//? Summary: A systematic system of code 

#include <bits/stdc++.h>

using namespace std; 

//? Define zone here, in here we will define typedef or any kinds to make your code faster
//? How it works? 
//! Syntax: (what kinds of thing you define here) (what is being defined) (what is used to define)

//feat: Type Name
typedef long long ll;
//err: Dangerous here
//? What if we define something that is really wrong? 
// typedef float long long; //*Output: error: declaration does not declare anything [-fpermissive]
                         //? It will not work, as this is the error you get in the compiler screen
//? Lesson: However, it is still doable if you define float to something like longlong, don't trick yourself into these booby trap, it's not fun at the end of the day
//*More advance stuffs: 
typedef vector<int> vi; 
typedef vector<int, int> pi; 
//? The previous two lines of code givesthe name vi for a vector of integers and the name pi for a pair that contains two integers 

//feat: Macros
//? What is a macros: A macro means that a certain type of string in the code will be changed before the compilation
//*Example: 
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

//feat: Not all macros define is correct 
#define SQ(a) a*a
//? Better define keyword: 
// #define SQ(a) (a)*(a) //ERR: DO not uncomment this line of code. This one is problematic since I redefine the macros (and the compiler will talk to you about this)
#define SQ2(a) (a)*(a)
int main(){
    
    //feat: Type Name
    // ll x = 2; 
    // cout << x <<"\n"; //*Output: 2 
               //? This should not work if we didn't define. Hence, this is saving a lot of time for competitive programming
    //? Can we use the same thing that is already defined? => Yes
    // long long a1 = 123; 
    // long long b1 = 234; 
    // cout << a1 * b1 << "\n"; //*Output: 28782
    // ll a2  = 123; 
    // ll b2 = 234; 
    // cout << a2 * b2 << "\n"; //*Output: 28782
     
    //TODO: Short lesson about code memory, and not initialize consequence
    //TODO: it doesn't matter much, other than the memory and the position of the stack that they are on 
    // int v; //? I do the bad code practice here, which is not defined the variables that I am using. This is what is called as BSS segment 
    //        //? The problem with this is the position that it is located, which is behind the data segment(initialized data)
    //        //? The .bss section is guaranteed to be all zeros when the program is loaded into memory. 
    //        //? .bss on the other hand is marked NOBITS
    // cout << &v << "this is v\n"; 
    
    //feat: Macros 
    vector<pair<int, int>> v; 
    // int y1 = 1; 
    // int x1 = 1; 
    // v.push_back(make_pair(y1, x1)); //? This is a vector type, a bit advance if you're new to C++. The way to go around this is to initialize a vector on the previous line 
    // v.push_back(make_pair(2,3));
    // for(int i=0; i < v.size(); i++)
    //     cout << v[i].first << ':' << v[i].second << endl;
    // int d  = v[1].first + v[1].second; 
    // cout << d;
    
    // for (int i = 1; i <= n; i++){
    //     search(i); //? This one is not the same as the search for Iterator class, it's just a bare minimum code for what you intend to do for the coding
    //      cout << i << endl; 
    // }
    
    
    
    //todo: It is the same as the commented code before 
    // int y1 = 1;
    // int x1 = 1; 
    // v.PB(MP(y1, x1)); 
    // v.PB(MP(2,3));
    // int d = v[0].F + v[0].S; 
    // cout << d << "\n";
    
    // int n = 10; 
    // REP(i, 1, n) {
    //     // search(i); //? This one is not the same as the search for Iterator class, it's just a bare minimum code for what you intend to do for the coding
    //     cout << i << endl ;
    // // }
    
    //feat: Macros for number
    //* A generic example
    // cout << SQ(3) << '\n'; //*Output: 9
    
    //Todo: This is certainly a weird example: 
    //*This looks fine
    // cout << SQ(6) << '\n';//*Output: 36
    //*This is not
    // cout << SQ(3 + 3) << '\n'; //*Output: 15
    //? Why? Because the code is understanding as this: 3 + 3 * 3 + 3, not (3 + 3) * (3 + 3)
    //*After modification with the SQ (which is SQ2 in this case)
    cout << SQ2(3 + 3) << '\n'; //*Output: 36
        
}

