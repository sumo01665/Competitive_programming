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

//@Return the amount of digit of a number
int digit_counter(int num){
    int digit_counter1 =  0; 
    
    
    // //? Trying recursive approaches
    // if (num < 10 && num >= 0) return 1; 
    // return 1 + number_digit(num/10) << endl; 
    
    // Return the values of the used cases
    do{
        num /= 10; 
        digit_counter1  += 1; 
        
        // cout << "This is the digit counter: " << digit_counter << endl; 
    } while(num);
    return digit_counter1; 
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
    // cout << digit_counter(num) << endl; 
    int power_number = digit_counter(num); 
    
    //? Setting up the half value fixer: 
    power_number = digit_half_fix(power_number); 
    
    int divisor = power(10, power_number);
    // cout << divisor << endl; 
    // cout << power(10, digit_half_fix(num)) << endl; 
    return  (num - Karatsuba_second_half_split(num))/divisor;  
}


int karatsuba_function(int num1, int num2){
    //? Express of the two numbers
    // x = 10^(n/2) * a + b
    // y  = 10^(n/2) * c + d
    if (digit_calculator(num1) == 1 && digit_calculator(num2) == 1) return num1 * num2; 
       
    /* //? Defination of the Karatsuba_function 
    a, b := first and second halves of x
c, d := first and second halves of y
recursively compute ac := a · c, ad := a · d,
bc := b · c, and bd := b · d
compute 10n · ac + 10n/2 · (ad + bc) + bd using
grade-school addition and return the result
    
    
    */
    //? Core variables
    int a, b, c, d; 
    
    
    //? Final product
    int ac, bd, p, q, pq; 
    a = Karatsuba_first_half_split(num1); 
    b = Karatsuba_second_half_split(num1); 
    c = Karatsuba_first_half_split(num2); 
    d = Karatsuba_second_half_split(num2); 
    
    //? p := a +b, q := c + d; 
    p  = a + b;
    q = c + d; 
    
    //Calculate the values
    
    
    ac = a * c; 
    bd = b * d; 
    pq = p * q; 
    
    int adbc; 
    adbc = pq - ac - bd; 
    int final_solution; 
    final_solution = power(10, digit_calculator(num1)) * ac + power(10, digit_calculator(num1)/2) * adbc + bd; 
    
    return final_solution; 
    
    
    return pq; 
       
}

int main(){
    
    int n; 
    // cout << Karatsuba_second_half_split(48625) << endl; 
    // cout << number_digit(253) << endl; 
    // cout << Karatsuba_first_half_split(235542) << endl; 
    cout << karatsuba_function(78, 54) << endl; 
    cout << "Using real calculator: " << 78 * 54 << endl; 
    
    // cout << "Something" << endl;        
}