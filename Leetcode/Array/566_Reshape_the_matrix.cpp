//? Description: 566. Reshape the Matrix
/* 
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

#include <bits/stdc++.h>
using namespace std; 

static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0;}(); 


vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    vector<vector<int>> solution(r, vector<int>(c));
    vector<int> solution_set; 
    int a = 0; 
    if (r * c == mat.size() * mat[0].size()){
        for (int  i = 0; i < mat.size(); ++i){
            for (int j = 0 ; j < mat[i].size(); ++j){
                solution_set.push_back(mat[i][j]);
                // cout << "This is the value solution_set fetch in: " << mat[i][j] << endl; 
                // cout << "This is the element inside of the solution_set: " << solution_set[i] << endl;      
            }
        }
        for (int i = 0; i < solution_set.size(); ++i){
            // cout << solution_set[i] << "|"; 
            
        }
        
        for (int i = 0; i < solution.size(); ++i){
            for (int j = 0; j < solution[j].size(); ++j){
                solution[i][j] = (solution_set[a]);
                // cout << "This is the a solution_set[a]: " << solution_set[a] << endl; 
                // cout << "This is the solution[i][j]" << solution[i][j] << endl; 
                a++; 
            }    
        }
        
    }
    else{
        return mat; 
    }
    string size = to_string(mat.size())+"x"+to_string(mat[0].size());
    // cout << size << endl; 
    
    return solution; 
}
//? This is the straight-forward algorithm, so we need to have a better solution 

//? Second implementation
vector<vector<int>> matrixReshape2(vector<vector<int>>& mat, int r, int c) {
    vector<vector<int>> solution(r, vector<int>(c));
    int i1 = 0, i2 = 0; 
    if (r * c == mat.size() * mat[0].size()){
        for (int  i = 0; i < mat.size(); ++i){
            for (int j = 0 ; j < mat[i].size(); ++j){
                solution[i1][i2] = mat[i][j]; 
                // cout << "This is the solution[i1][i2] " << solution[i1][i2] << endl; 
                // cout << "This is the solution[i][j] " << mat[i][j] << endl; 
                // cout << "This is i1 now: " << i1 << endl; 
                // cout << "This is i2 now: " << i2 << endl; 
                i1++; 
                // if (i1 == r - 1){
                //     i2++; 
                //     i1 = 0; 
                    
                // }
                // cout << "This is the value solution_set fetch in: " << mat[i][j] << endl; 
                // cout << "This is the element inside of the solution_set: " << solution_set[i] << endl;      
            }
        }
}


    else {
        return mat;
    }
    for (int i = 0; i < solution.size(); ++i){
        for (int j = 0; j < solution[i].size(); ++j){
            cout << solution[i][j] << "|";
        }
        cout << endl; 
    }
    
    return solution;
}

vector<vector<int>> matrixReshape3(vector<vector<int>>& mat, int r, int c) {
    int n = size(mat[0]); 
    if (r * c != size(mat)*size(mat[0])) return mat;
    vector<vector<int>>solution(r, vector<int>(c));
    for (int i = 0; i < r * c; ++i){
        solution[i/c][i%c] = mat[i/n][i%n];
        cout << "This is c now: " << c << endl; 
        cout << "This is n now: " << n << endl;; 
        cout << "This is i now: " << i << endl; 
    }    
    return solution; 
}

//Template
/* 
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    
}
*/

int main(){

    cout << "Yo" << endl; 
    vector<vector<int>> matrix = {{1,2},{3,4}};
    int r = 1, c = 4; 
    // vector<vector<int>> check = matrixReshape(matrix, r, c);
    
    /* for (int i = 0; i < check.size(); ++i){
        for (int j = 0; j < check[i].size(); ++j){
            // cout << check[i][j] << "|"; 
        
    }    
    // cout << endl;     
    } */
    // vector<vector<int>> check2 = matrixReshape2(matrix, r, c);
    /* for (int i = 0; i < check2.size(); ++i){
        for (int j = 0; j < check2[i].size(); ++j){
            // cout << check2[i][j] << "|"; 
        
    }    
    // cout << endl;     
    } */
    cout << "Something" << endl; 
    vector<vector<int>> check3 = matrixReshape3(matrix, r, c);
    for (int i = 0; i < check3.size(); ++i){
        for (int j = 0; j < check3[i].size(); ++j){
            cout << check3[i][j] << "|"; 
        
    }   
    cout << endl; 
    }

    return EXIT_SUCCESS; 

    
}