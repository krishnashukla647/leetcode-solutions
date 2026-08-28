class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int n = arr.size(), boats = 0;
        sort(arr.begin(), arr.end());
        int i = 0, j = n-1;
        while(i <= j) {
            if(arr[i] + arr[j] <= limit) {
                boats++;
                i++;
                j--;
            }
            else {
                boats++;
                j--;
            }
        }
        return boats;
    }
};