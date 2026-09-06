class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int len_1 = s.size(), len_2 = t.size();
        bool flag = true;
        if(len_1 != len_2) {
            return false;
        }
        else {
            for(int i = 0; i < len_1; i++) {
                if(s[i] != t[i]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == false) {
            return false;
        }
        else {
            return true;
        }
    }
};