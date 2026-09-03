class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int n = arr.size();
        int low = 0, high = n-1, mid;
        bool flag = false;
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] == target) {
                flag = true;
                low = mid + 1;
            }
            else if(arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        if(flag == true) {
            return arr[low % n];
        }
        else {
            return arr[low % n];
        }
    }
};