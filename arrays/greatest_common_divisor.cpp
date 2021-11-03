class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans=0,min=INT_MAX,max=INT_MIN;
        for(auto x:nums){
            if(x>max)
                max=x;
            if(x<min)
                min=x;
        }
        for(int i=1;i<=min;i++){
            if(max%i==0 and min%i==0)
                ans=i;
        }
        return ans;
    }
};