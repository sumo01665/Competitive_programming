/* 


*/

#include <bits/stdc++.h>

using namespace std;

//Class
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

void fillVector (vector <Node> &vector){
    cout << " Fill in the number of vector: "; 
    int element; 
    cin >> element; 
    
    for (){
        
    }
}


void travel(Node* root, vector<int>& result){
    if (root == nullptr){
        return; 
    }
    result.push_back(root -> val); 
    for (Node* child : root -> children){
        travel(child, result); 
        
    }
    
}
//Function
vector<int> preorder(Node* root) {
    vector<int> result;
    travel (root, result); 
    return result; 
}
//Template
/* 
vector<int> preorder(Node* root) {
    
}
*/

int main(){
    Node root; 
    vector<Node*> root;
    root.children = {2,3,NULL,5, 9}; 
        
    
    
}