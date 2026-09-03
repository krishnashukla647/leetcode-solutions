class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1, mid;
        while (low < high) {
            mid = (low + high) / 2;
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        return arr[low];
    }
};