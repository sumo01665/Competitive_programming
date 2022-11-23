#include <bits/stdc++.h>


using namespace std;


static int fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}();

//? Function prototype
bool power_of_two_check(int nums){
    cout << "This is the power of two: "; 
    return ((nums & (nums - 1)) > 0) ? false : true; 
    

}

int power_of_two_check_int(int nums){
    return (nums & (nums - 1)); 
}

int main(){
    int nums = 31;
    cout << (std::bitset<16>) power_of_two_check(nums) << endl;    
    cout << std::boolalpha << power_of_two_check(nums) << endl; 
    


}