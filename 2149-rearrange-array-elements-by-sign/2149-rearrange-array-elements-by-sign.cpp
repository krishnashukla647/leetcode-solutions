class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;
        for(int i = 0;i < n; i++) {
            if(nums[i] >= 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }
        int i = 0, j = 0;
        vector<int> ans(n, 0);
        for(int k = 0; k < n; k++) {
            if(k % 2 == 0) {
                ans[k] = pos[i];
                i++;
            }
            else {
                ans[k] = neg[j];
                j++;
            }
        }
        return ans;
    }
};