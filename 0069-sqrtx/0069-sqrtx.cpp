class Solution {
    public :
    int mySqrt(int n) {
        if(n == 0) {
            return 0;
        }
        long long low = 1, high = n, mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(mid*mid > n) {
                high = mid - 1;
            }
            else if(mid*mid < n) {
                low = mid + 1;
            }
            else {
                return mid;
            }
        }
        return high;
    }
};