class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) {
            return 1;
        }
        long long temp = n;
        if(temp < 0) {
            temp = -temp;
            x = 1 / x;
        }
        double half = myPow(x, temp / 2);
        if(temp % 2 == 0) {
            return half * half;
        }
        else {
            return half * half * x;
        }
    }
};