class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++) {
            bool found = false;
            for(int j = 0; j < ans.size(); j++) {
                if(arr[i] == ans[j]) {
                    found = true;
                    break;
                }
            }
            if(found == false) {
                ans.push_back(arr[i]);
            }
        }
        for(int i = 0; i < ans.size(); i++) {
            arr[i] = ans[i];
        }
        return ans.size();
    }
};