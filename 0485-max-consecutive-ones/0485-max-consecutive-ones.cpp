// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& arr) {
//         int n = arr.size();
//         int i = 0;
//         long long count = 0;
//         vector<int> ans;
//         while(i < n) {
//             if(arr[i] == 1) {
//                 count++;
//             }
//             else {
//                 ans.push_back(count);
//                 count = 0;
//             }
//             i++;
//         }
//         ans.push_back(count);
//         int max = ans[0];
//         for(int i = 0; i < ans.size(); i++) {
//             if(ans[i] > max) {
//                 max = ans[i];
//             }
//         }
//         return max;
//     }
// };

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int count = 0, max_count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                count++;
                max_count = max(max_count, count);
            }
            else {
                count = 0;
            }
        }
        return max_count;
    }
};