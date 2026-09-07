class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int num = n;
        for(int i = 1; i <= n; i++) {
            num -= i;
            if(num < 0) {
                break;
            }
            count++;
        }
        return count;
    }
};