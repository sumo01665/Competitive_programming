#include <iostream> 

using namespace std; 


int main(){ 
    int score = 92;
    int & rScore = score;
    
    cout << "Accessing value through data variable: " << endl; 
    cout << "score: " << score << endl; 
    
    cout << "Accessing value through reference variable: " << endl; 
    cout << "rScore: " << rScore << endl;
    
    return 0; 

}