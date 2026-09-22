class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int low = 0, high = n - 1;
        int i = n - 1;
        while(low <= high) {
            if(abs(arr[low]) > abs(arr[high])) {
                ans[i] = arr[low] * arr[low];
                low++;
            }
            else {
                ans[i] = arr[high] * arr[high];
                high--;
            }
            i--;
        }
        return ans;
    }
};