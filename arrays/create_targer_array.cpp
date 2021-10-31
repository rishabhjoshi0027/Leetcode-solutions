    vector<int> res;
        for(int i=0;i<index.size();i++){
           res.insert(res.begin()+index[i],nums[i]);
        }
        return res;