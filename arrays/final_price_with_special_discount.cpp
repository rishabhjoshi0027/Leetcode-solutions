// Brute force approach 
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(prices[i]>=prices[j]){
                    prices[i]=prices[i]-prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};
// optimised using monotomus stack 
class Solution{
    public: 
    vector<int> finalPrices(vector<int> &prices)
    {
        vector<int> ans(prices);
        stack<int> stk;
        for(int i = 0; i < prices.size(); i++){
            while(!stk.empty() && prices[stk.top()] >= prices[i]){
                ans[stk.top()] -= prices[i];
                stk.pop();
            }
            stk.push(i);
        }
        return ans;
    }
};