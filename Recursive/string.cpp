#include <bits/stdc++.h>
#include <string>


using namespace std;

unordered_map <int, int> map; 


string string_reversal(string phrase){
    
    int phrase_size = phrase.length(); 
    if (phrase == ""){
        return ""; 
    
    }
    
    //Thinking about the case 1: return only phrase
    else{ 
        cout << phrase[0] << endl; 
        return string_reversal(phrase.substr(1)) + phrase[0]; 
        
    
    }
    
    

}

int main(){ 
    cout << string_reversal("Jack") << endl; 
    
    string a  = "John"; 
    cout << a.substr(1) << endl; 
}