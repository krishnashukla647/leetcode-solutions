class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) {
            return arr[0];
        }
        if(arr[0] != arr[1]) {
            return arr[0];
        }
        if(arr[n-1] != arr[n-1]) {
            return arr[n-1];
        }
        int low = 0, high = n-1, mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }
            int f = mid, s = mid;
            if(arr[mid] == arr[mid-1]) {
                f = mid-1;
            }
            else {
                s = mid+1;
            }
            int left_len = (f-low);
            int right_len = (high - s);
            if(left_len % 2 == 1) {
                high = f-1; 
            }
            else {
                low = s+1;
            }
        }
        return 0;
    }
};