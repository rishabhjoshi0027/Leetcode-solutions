class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int sum = 0;
		
        for(int i  = 1; i <= n - 1; i++){
            ans.push_back(i);
            sum += i;
        }
        
        ans.push_back(-sum);
        
        return ans;
    }
};