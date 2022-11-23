#include <bits/stdc++.h>


using namespace std; 

const int TESTING_NUMBER = 24; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false; }(); 

//? Checking for the number if positive or negative
//@Return 0 for negative, return 1 for positive
bool sign_detection(int number ){
    

    return ((number ^ TESTING_NUMBER) > 0) ? true : false;     
    

}



//? Adding one to the previous
int add_1_unnormal_style(int number){
    // if (!sign_detection(number) /*equal to negative */)  
    return -(~number);  
    // else    
    
    
    // return -~number + 2; 
    
    


}

int main(){
    //? Setting up the bit set
    bitset<32> n = -60; 
    bitset<32> m = 60; 
    
    cout << "Bitset for the number n: " << n << endl;
    cout <<"Bitset for the number m: " << m << endl; 
    cout << ~m << endl; 
    cout << add_1_unnormal_style(10) << endl; 
  
    // 010 -> 101
    


  

}           
