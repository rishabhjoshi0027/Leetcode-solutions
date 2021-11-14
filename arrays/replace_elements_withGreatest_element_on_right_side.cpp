class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int curr_max = -1;
        int prev_max = -1;
        for(int i=n-1; i>=0; i--) {
            prev_max = curr_max;
            curr_max = max(curr_max, arr[i]);
            arr[i] = prev_max;
        }
        return arr;
    }
};