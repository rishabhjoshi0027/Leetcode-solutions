class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(), d1=0, d2=0;
        for(int i=0; i<n; i++){
            d1 += mat[i][i];
            d2 += mat[i][n-i-1];
        }
        if(n%2==0) return d1+d2;
        return d1+d2-mat[n/2][n/2];
    }
};
// Brute force
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0; i<mat.size(); i++)
            for(int j=0; j<mat[i].size();j++){
                if(i==j)ans+=mat[i][j];
                if(i+j==mat.size()-1 && i!=j)ans+=mat[i][j];
            }
        return ans;
    }
};
