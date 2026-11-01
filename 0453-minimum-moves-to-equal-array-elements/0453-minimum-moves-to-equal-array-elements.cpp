class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_val = INT_MAX;
        for(int n : nums) {
            min_val = min(min_val, n);
        }
        int moves = 0;
        for(int n : nums) {
            moves += n - min_val;
        }
        return moves;
    }
};