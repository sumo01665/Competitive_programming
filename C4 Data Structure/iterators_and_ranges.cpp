//? Summary: This section will discuss C++ standard library operate with iterators

#include <bits/stdc++.h> 

using namespace std; 

//macros
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long LL; 
//function 

//classes


int main() { 
    // feat: Use iterators begin and end define a range that contains all elements i na data structure
    // => So that the begin will point to the first element in the data structure, while the end will point !after! the last element
    //! The iterators is asymmetric: s.begin() points to the first element, while s.end() point to the point after the elements
    //? It is called, off the end (or half-open)
   
    //Making the array
    vector<int> v = {23,43,42,423,32,53,532, 344}; 
    int n = sizeof(v)/sizeof(v[0]);
    
    //? Some function runs using the same ideas are sort, reverse, and random_shuffle
    //*Example:
    random_shuffle(v.begin(),v.end()); //*Output: 32|43|532|42|23|53| (Fun fact: the first shuffle may be different compared to different place, but the answer should be the same)
    
    //feat: set iterators: 
    //? Iterators are used to access elements of a set. 
   
    //? The long way to write the code
    
    set<int> s = {324,342,554,242,34324};
    set<int>::iterator it = s.begin(); 
   
    //? The short way to write the code
    //    auto it = s.begin();  
    // cout << *it << endl;//*Output: 242
                        //? The reason why the answer is 242 is because the number in set is reorder when they put inside the arrays, so the beginning position of the code is the first number
    
    //? Try the .end iterator to see if it works 
    auto end = s.end(); 
    // cout << *end << endl; //?(This is illegal. As explained before, the .end looks at the number that it is not there, so the end actually doesn't look at anything)
                          //*Output: 5
    
    for (auto i = s.begin(); i != s.end(); i++){
        //!err: Do not try to access the element by this: 
        //  cout <<s[i] << endl; //err This will result in an error.
        // cout << *i << "|"; //*Output: 242|324|342|554|34324|
    
    }
    // cout << endl; 
    
    //? Finding the largest element in the set: 
    auto it2 = s.end(); it2--; 
    // printf("%d \n", *it2); //*Output: 34324
    //? Printing out the largest elements in the code
    int x  = 0; 
    cout << "Please enter the number that you want to print: ";
    cin >> x; //*Input: 34324 //*Output: I find this number  
    // cin >> x;
    // scanf("Please enter the number that you want to print out: %d", x); //? Fun facts: The code I write will not be displayed, but will be misunderstand the whole thing it is the input 
                                                                        // So try to input 34324 with the above code, and you will get the "I do not find the number"
    auto it3 = s.find(x); 
    if (it3 == s.end()){
        cout << "I do not find the number" << endl; 
        
    }
    else{
        cout << "I find this number" << endl; 
        
    }
    
    //? Finds the element nearest to x 
    auto it4 = s.lower_bound(x);
    
    if (it4 == s.begin()){
        cout << *it4 << "\n";
    } else if (it4 == s.end()){
        it4--; 
        cout << *it4 << endl; 
        
    }else {
        int a = *it4; it4--; 
        int b = *it4; 
        if (b-x > x-a) cout << b;
        else cout << a << endl; 
    }
    //! The code assumes that the set is not empty, and goes through all possible cases using an iterator
    
    //Printing out the content in the arrays
    for (int i = 0; i < n; i++){
        // cout << v[i] << "|"; 
   
    }
   
    
}