for (int i = 0; i < k; i++){
        cout << i << endl; 
            if (arr[i] < arr[k]){
                length[k] = max(length[k], length[i] + 1); 
                cout << "This is the highest value: " << length[k] << endl; 
            }
        }