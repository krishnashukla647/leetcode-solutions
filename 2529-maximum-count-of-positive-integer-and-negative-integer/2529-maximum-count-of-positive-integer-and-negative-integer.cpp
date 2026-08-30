class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1, mid;
        int non_neg = n;
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] >= 0) {
                non_neg = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        int pos = n;
        low = 0;
        high = n-1;
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] > 0) {
                pos = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        int neg_count = non_neg;
        int pos_count = n - pos;
        return max(neg_count, pos_count);
    }
};