class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n-1, mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] == target) {
                return mid;
            }
            if(arr[low] <= arr[mid]) {
                if(arr[low] <= target and target < arr[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if(arr[high] >= target and target > arr[mid]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};