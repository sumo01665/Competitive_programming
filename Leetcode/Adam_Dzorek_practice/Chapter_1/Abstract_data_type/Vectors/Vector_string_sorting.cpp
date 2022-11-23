#include <bits/stdc++.h>


using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); return false;}(); 

class Person{ 
public: 
    Person(const char *n = "", int a = 0){
        name = strdup(n); 
        age = a; 
    
    }
    ~Person(){
        free(name);
        
    }
    bool operator==(const Person & p) const{
        return strcmp(name, p.name) == 0 && age == p.age; 
    
    }
    bool operator< (const Person &p) const{
        return strcmp(name, p.name) < 0; 
    }
    bool operator>(const Person &p) const{
        return !(*this == p) &&!(*this < p); 
    }
private: 
    char * name;
    int age; 
    friend bool lesserAge(const Person&, const Person&); 

};

bool lesserAge(const Person &p1, const Person &p2){
    return p1.age < p2.age; 
    
}
int main(){ 
    fast_io; 
    vector <Person> v6(1, Person("Gregg", 25)); 
     v6.push_back(Person("Ann",30));
	 v6.push_back(Person("Bill",20));
    
    sort(v6.begin(), v6.end(),greater<Person> ()); 
    
    
    sort(v6.begin(), v6.end(), lesserAge); 
    
    
    for (int i = 0;  i < v6.size(); ++i ){
        
    }
    

}