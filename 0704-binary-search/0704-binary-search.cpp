class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size(), low = 0, high = n-1;
        int mid;
        bool flag = false;
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] == target) {
                flag = true;
                break;
            }
            else if(arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        if(flag == true) {
            return mid;
        }
        else {
            return -1;
        }
    }
};