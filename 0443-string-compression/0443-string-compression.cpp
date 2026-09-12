class Solution {
public:
    int compress(vector<char>& s) {
        int n = s.size();
        int i = 0, j = 0;
        string ans = "";
        while(j < n) {
            if(s[j] == s[i]) {
                j++;
            }
            else {
                int len = j-i;
                ans.push_back(s[i]);
                if(len != 1) ans += to_string(len);
                i = j;
            }
        }
        int len = j-i;
        ans.push_back(s[i]);
        if(len != 1) ans += to_string(len);
        vector<char> ans2(ans.length());
        for(int i = 0; i < ans.length(); i++) {
            ans2[i] = ans[i];
        }
        s = ans2;
        return s.size();
    }
};