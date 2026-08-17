class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n));
        int minr = 0, maxr = n - 1;
        int minc = 0, maxc = n - 1;
        int num = 1;
        while(minr <= maxr && minc <= maxc) {
            for(int j = minc; j <= maxc; j++) {
                arr[minr][j] = num++;
            }
            minr++;
            if(minr > maxr || minc > maxc)
                break;
            for(int i = minr; i <= maxr; i++) {
                arr[i][maxc] = num++;
            }
            maxc--;
            if(minr > maxr || minc > maxc)
                break;
            for(int j = maxc; j >= minc; j--) {
                arr[maxr][j] = num++;
            }
            maxr--;
            if(minr > maxr || minc > maxc)
                break;
            for(int i = maxr; i >= minr; i--) {
                arr[i][minc] = num++;
            }
            minc++;
        }
        return arr;
    }
};