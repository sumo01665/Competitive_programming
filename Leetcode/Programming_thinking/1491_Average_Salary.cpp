#include <bits/stdc++.h>
using namespace std; 

//Functions 
//? Bad implementation: 
double average( vector <int> & salary){
    //The O(n) runtime solution 
    int n = salary.size();
    int best = 999; 
    int lowest = 1000001; 
    for (int i = 0; i < n; i++){
        if (salary[i] > best){
            best = salary[i]; 
            
        }
        if (salary[i] < lowest){
            lowest = salary[i];
        }
    }
    salary.erase(remove(salary.begin(), salary.end(), best), salary.end());
    /* for (int i = 0; i < n; i++){
        cout << "This is the element in the salary: " << salary[i] << endl; 
    }  */
    //? If you print this line of code, I will realize that the code will not contain the element 4000. However, the elements in the array remains unchanged, and 
    //? it gets replaced by the last variable in the list
    //? The array operator will not shorten it, since it's impossible 
    
    salary.erase(remove(salary.begin(), salary.end(), lowest), salary.end());
    for (int  i = 0; i < n; i++){
        cout << "This is the element in the salary: " << salary[i] << endl; 
    }
    int sum = 0; 
    int count = 0; 
    for (int i = 0; i < n; i++){
        cout << "This is the element in the salary: " << salary[i] << endl;   
        sum += salary[i]; 
        cout << "This is the sum right now: " << sum << endl; 
        count += 1; 
        
    }
    int average = sum/ count; 
    // cout << "This is the best salary: " << best << endl ;
    // cout << "This is the worst salary: " << lowest << endl ;
    return average; 
 
}

//feat: Second implementation: 
double average2( vector <int> & salary){
    //The runtime of this algorithm will be approximately O((n^2)log(n)), which include a sorting algo that runs in O(n log n) and the doing the average calculation in 
    // O(n log(n))
    int n = salary.size();
    sort(salary.begin(), salary.end()); 
    int counter = 0; 
    int sum = 0; 
    for (int i = 1; i < n-1; i++){
        sum += salary[i]; 
        counter += 1; 
    }
    return sum/counter; 
}
int main() {
    vector <int> salary = {4000,3000,1000, 2000}; 
    
    // cout << average(salary) << endl; //*Output: 2250  
    cout << average2(salary); 
}