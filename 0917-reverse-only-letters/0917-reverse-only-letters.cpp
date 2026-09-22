class Solution {
public:
    bool notValid(char ch) {
        if(ch >= 65 and ch <= 90) {
            return false;
        }
        else if(ch >= 97 and ch <= 122) {
            return false;
        }
        else {
            return true;
        }
    }
    string reverseOnlyLetters(string s) {
        int low = 0, high = s.size()-1;
        while(low <= high) {
            char x = s[low], y = s[high];
            if(notValid(x)) {
                low++;
            }
            else if(notValid(y)) {
                high--;
            }
            else {
                swap(s[low], s[high]);
                low++;
                high--;
            }
        }
        return s;
    }
};