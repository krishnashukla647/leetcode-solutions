class Solution {
public:
    bool isPerfectSquare(int n) {
        long low = 1, high = n, mid;
        while(low <= high) {
            mid = (low + high) / 2;
            if(mid == n/mid and n % mid == 0) {
                return true;
            }
            else if(mid > n/mid) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return false;
    }
};