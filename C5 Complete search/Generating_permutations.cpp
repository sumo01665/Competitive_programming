//? Summary: Generating permutations
    // -Two ways to generate the permutations here: Either by recursive or through permutations iteratively 
    
#include <bits/stdc++.h> 

using namespace std; 

//Functions
//feat: Recursive function 
void search(){
    vector <int> permutation;
    int n  = 0; 
    int chosen[] = {}; 
    if (permutation.size() == n){
        //Process permutation
        
    } else {
        for (int i = 0; i < n; i++){
            if (chosen[i]) continue; 
            chosen[i] = true; 
            permutation.push_back(i);
            search(); 
            chosen[i] = false; 
            permutation.pop_back(); 
        }
    }
    
}

int main() {
    //feat: Generating permutations using permutation with C++ standard library:
    vector <int> permutation = {1,2,3}; 
    sort(permutation.begin(), permutation.end()); //? Please sort the function, otherwise, the code will act weirdly
    int n = permutation.size();
    for (int i = 0; i < n; i++){
        permutation.push_back(i);
    }
    do {
        //Something here
        cout << permutation[0] << " " <<  permutation[1] << " " << permutation[2] << endl; 
        /* 
        *   Output: 
        
        */
    } while (next_permutation(permutation.begin(), permutation.end())); 
    
    return EXIT_SUCCESS; 
}