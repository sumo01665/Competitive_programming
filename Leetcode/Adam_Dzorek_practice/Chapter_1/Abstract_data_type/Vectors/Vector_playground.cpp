#include <bits/stdc++.h>


using namespace std; 


static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

template <class T> 
void printVector(const char *s, const vector<T>& v){
    cout << s << "= ("; 
    if (v.size() == 0){
        cout << ")" << endl;
        return; 
        
    }
    typename vector<T>::const_iterator i = v.begin(); 
    for (; i != v.end() - 1; ++i){
        cout << *i << ' ';
        
    }
    cout << *i << ") \n"; 

}

bool f1(int n){
    return n < 4; 
}

template <typename T2> 
auto max(T2 & a, T2 & b){ 
    return a > b ? a : b; 

}

int main(){ 
    vector <int> a1;
    printVector("This is the vector: ", a1);  
    
    int a[] = {12,3432,432};
    vector <int> v1; 
    
    printVector("Vector a",v1); 
    for (int j = 1; j <= 5; ++j){
        v1.push_back(j);
    }

    //?Vector 1: (1 2 3 4 5)
    vector <int> v2(3,7); //v2  = (7 7 7)
    
    vector <int> ::iterator i1 = v1.begin() + 1;
    vector <int> v3(i1, i1 + 2); 
    printVector("V3", v3); //* 
    
    
    printVector(
        "V2", v2
    ); 
    
    
    vector <int> v4(v1); //*(1 2 3 4 5)
    printVector("V4", v4); 
    vector <int> v5(5);
    printVector("V5", v5); //* (0 0 0 0 0) 
    
    v5[1] = v5.at(3) = 9; 
    printVector( "V5", v5); //* (0 9 0 9 0)
    v3.reserve(6);
    printVector("V3", v3); //* (2 3) 
    v4.resize(7); 
    printVector("V4", v4); //* (1 2 3 4 5 0 0)
    v4.resize(3); 
    cout << v4.capacity() << endl; 
      
    v4.clear();  //* v4 is empty, size = 0, capacity = 10
    v4.insert(v4.end(),v3[1]); //* v4 = (3)
    v4.insert(v4.end(), v3.at(1));//* v4 = (3 3)
    v4.insert (v4.end(),2,4); //* v4 = (3 3 4 4)
   
    sort(v4.begin(), v4.end(), greater<int> ());// v5 = (9 9 7 7 3)
    
    
    //Err: 
    // sort(a.begin(),a.end(), greater<int>());
    // printVector("Vector a: ", a); 
    
    
    return EXIT_SUCCESS;
}