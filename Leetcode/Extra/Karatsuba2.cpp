#include <bits/stdc++.h>


using namespace std;

//* Static fast_io 
static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

//@return: values of the digit_calculator
int digit_calculator(int num){
     if (!num) return 0;
     return 1 + digit_calculator(num/10); 
}



//@Return the power of the number
int power(int num, int base){
    if (base == 0) return 1;
    //? Base cases:     
    if (base == 1) return num; 
    
    //? Power return the values
    return power(num, base - 1) * num; 
}

//@return the digit whether it is right or left
int digit_half_fix(int a){ 
    
    if (a % 2 == 1) return (a/2)  + 1; 
    else return a/2; 

    
    


}




//? Karatsuba components 


//@return the second half of the numbers
int Karatsuba_second_half_split(int num){
    int digit = digit_calculator(num);
    
    //TODO: Reassign the value for the digit
    digit = digit_half_fix(digit);
    // cout << "This is the digit: " <<  digit << endl; 
    
    int digit_part = 0, half_part = 0;  
    
    for (int i = 0; i < digit; ++i){ 
        //? Setting up the power of the number
        digit_part += (num % 10); 
        // cout << digit_part << endl; 
        num /= 10; 
        
        half_part += power(10, i) * digit_part; 
        // cout << "Half part" << half_part << endl; 
        
        
        
        
        digit_part = 0; 
    }
    
    return half_part; 
}

//@return two halves of the numbers
int Karatsuba_first_half_split(int num){ 
    return  (num - Karatsuba_second_half_split(num))/power(10, digit_half_fix(num));  
}


int karatsuba_function(int num1, int num2){
    //? Express of the two numbers
    // x = 10^(n/2) * a + b
    // y  = 10^(n/2) * c + d
    if (digit_calculator(num1) == 1 && digit_calculator(num2) == 1) return num1 * num2; 
    
    return 0;   
}

int main(){
    
    int n; 
    // cout << Karatsuba_second_half_split(48625) << endl;               
        cout << Karatsuba_first_half_split(235542); 
    cout << "Something" << endl;       
}