#include <vector>
#include <iostream>
using namespace std; 



int main(){
    vector <int> test =  {1,2,3}; 
    vector <int> test2; 
    for (auto item: test){
        cout << item << endl; 
    }
    //? Testing assignment 
    test2.assign(5, 20); 
    
    
    
    std::vector<int>::iterator it; 
    it = test.begin()+1; 
    
    // test2.assign(it, test.end() - 1); 
    //  for (auto items : test2){
    //      cout<< items << endl; 
    //  }
    vector <int> test3; 
    int myints[] = {23,432,5353}; 
    test3.assign(myints,myints + 3); 
}