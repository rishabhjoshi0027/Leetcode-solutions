class Solution {
public:
  int largestAltitude(vector<int>& gain) {
        int res=0,ans=0;
        for(int i=1;i<=gain.size();++i)
        {
            ans+=gain[i-1];
            res=max(res,ans);
        }
        return res;
  }
};