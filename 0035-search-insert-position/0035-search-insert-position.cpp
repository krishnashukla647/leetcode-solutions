class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n-1, mid;
        if(target < arr[0]) {
            return 0;
        }
        if(target > arr[n-1]) {
            return n;
        }
        while(low <= high) {
            mid = (low + high) / 2;
            if(target == arr[mid]) {
                return mid;
            } 
            else if(target > arr[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};