class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        int idx = 0;
        int LeftSum, RightSum;
        if(n == 1) {
            return 0;
        }
        while(idx != n) {
            LeftSum = 0;
            RightSum = 0;
            if(idx == 0) {
                LeftSum = 0;
                for(int i = 1; i < n; i++) {
                    RightSum += arr[i];
                }
                if(LeftSum == RightSum) {
                    return 0;
                }
            }
            if(idx == n-1) {
                RightSum = 0;
                for(int i = 0; i < n-1; i++) {
                    LeftSum += arr[i];
                }
                if(LeftSum == RightSum) {
                    return n-1;
                }
            }
            for(int i = 0; i < idx; i++) {
                LeftSum += arr[i];
            }
            for(int i = idx+1; i < n; i++) {
                RightSum += arr[i];
            }
            if(LeftSum == RightSum) {
                return idx;
            }
            idx++;
        }
        return -1;
    }
};