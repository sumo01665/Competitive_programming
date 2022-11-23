#include <bits/stdc++.h>


using namespace std; 


static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false; }();

//? Function prototype
int find_parity(int nums){ 
 //? Ideas: Count the number for the parity of the numbers
    if (nums == 0) return 0; 
    
    //* How to turn off: (1 >> (k - 1); 
 
}

bool findParity(unsigned n)
{
    bool parity = false;
 
    // run till `n` becomes 0
    while (n)
    {
        // invert the parity flag
        if (n & 1) {
            parity = !parity;
        }
 
        // right shift `n` by 1 (divide by 2)
        n = n >> 1;
    }
 
    return parity;
}
 
string odd_even_correction(int nums){
    if (nums % 2 == 0) return "even"; 
    return "odd"; 

}

int main(){ 
    fast_io; 
    
    //? Declare variables
    int nums = 15; 
    
    
    cout << (bitset<16>) nums << endl; 
    cout << find_parity(nums) << endl; 
    return EXIT_SUCCESS;
    
    


}