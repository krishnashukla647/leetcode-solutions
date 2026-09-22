class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[i] = arr[i]*arr[i];
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};