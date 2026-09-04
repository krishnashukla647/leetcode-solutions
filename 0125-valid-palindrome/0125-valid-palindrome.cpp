class Solution {
public:
    bool notValid(char ch) {
        if(ch >= 65 and ch <= 90) {
            return false;
        }
        else if(ch >= 97 and ch <= 122) {
            return false;
        }
        else if(ch >= 48 and ch <= 57) {
            return false;
        }
        else {
            return true;
        }
    }   
    bool isPalindrome(string s) {
        int n = s.size();
        int low = 0, high = n-1;
        while(low <= high) {
            char x = s[low], y = s[high];
            if(x >= 65 and x <= 90) {
                x += 32;
            }
            if(y >= 65 and y <= 90) {
                y += 32;
            }
            if(notValid(x)) {
                low++;
            }
            else if(notValid(y)) {
                high--;
            }
            else {
                if(x != y) {
                    return false;
                }
                low++;
                high--;
            }
        }
        return true;
    }
};