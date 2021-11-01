class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map <char, int> m;
        int flag = 1, output = 0; 

        for(auto &i : allowed)
            m[i]++;

        for(auto &i : words)
        {
            for(auto &j : i)
                if(!m[j])
                {   
                    flag = 0;
                    break;
                }
            
            if(flag == 1)
                output++;
            
            flag = 1;
        }
        
        return output;
    }
};