map <int, int> hash; 
    vector <int> result; 
    for (int i = 0; i < nums.size(); i++){
        if (hash.find(target - nums[i]) != hash.end()){
            result.push_back(hash[target - nums[i]]); 
            result.push_back(i); 
            return result; 
        }
        else{
            hash[nums[i]] = i;
        }
        
    }