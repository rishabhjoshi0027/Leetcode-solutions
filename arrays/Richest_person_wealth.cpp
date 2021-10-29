class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_ammount = 0 ;
        for(int i = 0 ; i < accounts.size() ; i++){
                int customer_ammount = 0 ;
        for(int j = 0 ; j < accounts[i].size() ; j++)
        {
            customer_ammount += accounts[i][j] ;
        }
        max_ammount = max(customer_ammount, max_ammount) ;
        }
        return max_ammount ;
        }
        
};