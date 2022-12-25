#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 



//? input file
// vector input_string(fin){
    
    
    
// }; 


//feat: Function prototype
void input_string(ifstream& fin1); 
int  search_enter(ifstream& fin);
void input_string_test(ifstream& fin1);
int max(); 

void input_string_test_part2(ifstream& fin1); 
// ----------------------------------------//
//feat: input string real version 
void input_string(ifstream& fin1){ 
    int num = 0; 
    int count = 0;    
    while(fin1 >> num){ 
        cout << num << endl; 
            
        
        
        
        // getline(fin1, str);
    }
}


//feat: input string string testing

void input_string_test(ifstream& fin1){ 
    int total = 0;
    string str = ""; 
    int max = INT_MIN; 
    
    while (getline(fin1, str, '\n'))
    {
        // std::cout << str << endl; //? Check number output 
            if (str.empty()){ 
                if (total > max) max = total; 
                total = 0; 
            }
            else{ 
                total += atoi(str.c_str()) ; // Change from string to integer 
            }            
    }
          
        cout << max << endl; 
    
}
    
    
//feat: part 2 solution     
void input_string_test_part2(ifstream& fin1){ 
    int total = 0;
    string str = ""; 
    int max = INT_MIN; 
    vector <int> num; 
    //* Part 2 variables 
    int minus_value = 0, old_total = 0;
    
    
    
    while (getline(fin1, str, '\n'))
    {
        // std::cout << str << endl; //? Check number output 
            if (str.empty()){ 
                num.push_back(total); 
                if (total > max){
                    max = total; 
                } 
                total = 0; 
            }
            else{ 
                total += atoi(str.c_str()) ; // Change from string to integer 
            }            
    }
        sort(num.begin(), num.end()); 
        for (auto x : num)
            cout << x << " ";
        // int var = num.back().c; 
        
        // cout << var << endl;
        // cout << max << endl; 
    
}

//? top_three highest vector
vector<int> top_three(int num){ 
    vector <int> array; 
    
    
    array.push_back(INT_MIN);
    array.push_back(69);
    array.push_back(INT_MIN);

    return array; 
} 


//? top_three highest array 
void top_three_array(int number) { 
    int arr[3]; 
    arr[0]= INT_MIN; 
    arr[1]= INT_MIN; 
    arr[2]= INT_MIN; 

}

//? big array 
vector<int> arr(int num){ 
    vector<int> v; 
    
    v.push_back(num);
    
    

    return v; 
}




int main(){ 
    //? Real solution 
    ifstream fin2("input_string.txt"); 
    ifstream fin("input.txt"); 
    
    input_string_test_part2(fin);
    
    // for (int i: top_three(0)){ 
    //     std::cout << i << ' ';
    
    // }
    // cout << top_three(0) << endl; 
    // input_string(fin); 
    // search_enter(fin);
    


}