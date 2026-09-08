class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        for(int i = 0; i < m/2; i++) {
            for(int j = 0; j < n; j++) {
                swap(arr[i][j], arr[m-1-i][j]);
            }
        }
        for(int i = 0; i < m; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
};