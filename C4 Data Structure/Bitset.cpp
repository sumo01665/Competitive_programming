//? Summary: Bitset structure
//  - Bitset is an array whose each value is either 0 or 1
#include <bits/stdc++.h>

using namespace std; 
int main(){
    //feat: bitset
    bitset<10> s; //? The array with 10 numbers
                  //? s[0] is the first number from the right
        
    s[1] = 1; 
    s[3] = 1; 
    s[4] = 1; 
    s[7] = 1;
    s[8] = 0; 
    // cout << s[4] << "\n"; //*Output: 1
    // cout << s[5] << "\n"; //*Output: 0
    // cout << s << endl; //*Output: 0010011010
    /* 
    ? Benefits of the bitsets: 
        - They require less memory than ordinary arrays, because each element in a bitset only uses one bit of memory
        - If n bits are stored in an int array, 32n bits of memory will be used, but a corresponding bitset only requires n bits of memory
        
    */
    bitset<10> s2(string("00100101")); //? The bits read from right to left
    // cout << s2[0] << endl; //*Output: 0
    // cout << s2[1] << endl; //*Output: 1
    // cout << s2 << endl; //*Output: 0000100101 
                        //? When the size of the string is not the same as the size of the one you declare (10 in this case), then extra zeros will be added into the code
                        
    //feat: Number of 1 in a bitset
    // cout << s.count() << endl; //*Output: 4
                                  //? The zero will also be ignored in the code
    //? So to find the number of zero in a bitset, we take the size of the bitset, and minus the count of one in a bitset
    // cout << s.size() << endl; //*Output: 10 
    // cout << s.size() - s.count() << endl; //*Output: 6
    
    //feat: Bit operations
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
        //? logical AND (&): If both bits pair are 1, then the gate gives the result of 1. Otherwise, it is 0. 
        // cout << (a&b) << endl; //*Output: 0010010000
        
        //? logical OR (|): If each bits are 1, then the gate gives the result of 1. Otherwise, it is 0. 
        // cout << (a|b) << endl; //*Output: 1011111110 
        
        //? logical NOT (^): If both of them is the same, return false (0). Otherwise, return 1
        // cout << (a^b) << endl; //*Output: 1001101110
        
        //Bit shift operators 
        //? This one is like moving the digits in the 10-base system to the left, except that it is happening in base-2
        
        //? left shift (<<): It moves every number from the right to the left (The left most number will not be pushed to the last digits)
        // cout << (a<<1) << endl; //*Output: 0101101100
        // cout << (b<<1) << endl; //*Output: 0110110000
        
        //? right shift (<<): It moves every number from the right to the left (The left most number will not be pushed to the last digits)
        cout << (a>>1) << endl;    //*Output: 0001011011
        cout << (b>>1) << endl;    //*Output: 0101101100
        //! If you left shift a number so that the sign bit is affected, the result is undefined 
        short neg1 = -16;
        bitset<16> bn1(neg1); 
        cout << bn1 << endl; //*Output: 1111111111110000
}
