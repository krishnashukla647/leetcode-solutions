class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int low = 0, high = n-1;
        while(low <= high) {
            char x = s[low], y = s[high];
            if(x == y) {
                low++;
                high--;
            }
            else {
                int low1 = low + 1, high1 = high; //One character from left is skipped and rest of the string will be checked.
                int low2 = low, high2 = high - 1; //One character from the right is skipped and rest of the string will be checked. 
                bool check1 = true;
                //Checking the string after deleting left character.
                while(low1 <= high1) {
                    if(s[low1] != s[high1]) {
                        check1 = false;
                        break;
                    }
                    low1++;
                    high1--;
                }
                bool check2 = true;
                //Checking the string after deleting right character.
                while(low2 <= high2) {
                    if(s[low2] != s[high2]) {
                        check2 = false;
                        break;
                    }
                    low2++;
                    high2--;
                }
                return check1 || check2; //If any one of the condition is true return true.
            }
        }
        return true;
    }
};