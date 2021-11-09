class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        int count = 0;
        int hash[101] = {0};
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        } 
        
        for(int i=0;i<101;i++)
        {
            if(hash[i] == 1)
            {
                count += i;
            }
        }
        return count;
    }
};

/// 
unordered_map<int, int> m ;
int sum  =0 ;
for(int i = 0 ; i < nums.size() ; i++)
{
    m[nums[i]] ++ ;
}
for(auto it : m)
{
    if(it.second == 1 ){
        sum = sum + it.first ;
    }
}
return sum
