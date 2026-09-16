class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string reverseVowels(string s) {
        int n = s.size();
        int low = 0, high = n - 1;
        while(low <= high) {
            char x = s[low], y = s[high];
            if(isVowel(x) && isVowel(y)) {
                swap(s[low], s[high]);
                low++;
                high--;
            }
            else if(!isVowel(x)) {
                low++;
            }
            else if(!isVowel(y)) {
                high--;
            }
        }
        return s;
    }
};