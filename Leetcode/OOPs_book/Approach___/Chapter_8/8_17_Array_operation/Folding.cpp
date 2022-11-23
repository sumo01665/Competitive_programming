#include <bits/stdc++.h>

using namespace std; 

//Global variables
const int rowSize = 4, colSize = 5;

void array_print(int arr[rowSize][colSize]){
    for (int i = 0; i < rowSize; ++i){
        for (int j = 0; j < colSize; ++j){
            cout << setw(4) << internal << arr[i][j] << ' ';
        
        }
        cout << endl; 
    }

}

int ** row_folding(int arr[rowSize][colSize]){ 
    for (int i = 0; i < rowSize; ++i){
        for (int j = 0; j < colSize; ++j){
            arr[rowSize - 1 - i][j] = arr[i][j]; 
        
        }
      
    }

}

int **create2Darray(unsigned height, unsigned width){ 
    int ** array2D = 0; 
    array2D = new int *[height]; 
    //? Create 1D array 
    
    for (int h = 0; h < height; ++h){ 
        array2D[h] = new int[width]; 
        
        for (int w = 0; w < width; ++w){
            array2D[h][w] = w + width * h; 
        }
    
    }

    return array2D;
}

int **foldedArray(int** array, int row, int column){ 
    int** vertical_folded_array;
    // vertical_folded_array = create2Darray(vertical_folded_array, row, column);
    
    
    
    return vertical_folded_array; 

}

int main(){ 
     
    int arr[rowSize][colSize] = {
    {2, 3, 4, 5, 6},
    {12, 13, 14, 15, 16},
    {123, 133, 134, 315,316},
    {32, 33, 43, 53, 63},
    };
    
    int row_foldedArray [rowSize][colSize]; 

    for (int i = 0; i < rowSize; ++i){
        for (int j = 0; j < colSize; ++j){
            row_foldedArray[rowSize - 1 - i][j] = arr[i][j]; 
        
        }
    
    }
    
    int col_foldedArray [rowSize][colSize]; 
    for (int i = 0; i < rowSize; ++i){
        for (int j = 0; j < colSize; ++j){ 
            col_foldedArray[i][colSize - 1  - j] = arr[i][j];
        
        
        }
    }
    
    cout << "Unfixed array: " << endl; 
    array_print(arr); 
    
    cout << "Row folded array: " << endl; 
    array_print(row_foldedArray); 
    
    cout << "Col folded array: " << endl; 
    array_print(col_foldedArray);


}