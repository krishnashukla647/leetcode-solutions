class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0, j = 0;
        int write = 0;
        for(int read = 0; read < n; read++) { //Given string me agar spaces h starting me toh skip krte jao or jab word aye usko s me hi modify krte jao.
            if(s[read] != ' ') {
                s[write] = s[read];
                write++;
            }
            else if(write > 0 && s[write-1] != ' ') { //Ek word khtm hone k baad ek space dedo.
                s[write] = ' ';
                write++;
            }
        }
        if(write > 0 && s[write-1] == ' ') { //Agar last me space h toh usse hta te jaao.
            write--;
        }
        s = s.substr(0, write); //Ab jo hmara write index h woh udhr h jb correct string bn chuki h, toh ab s ko utna hi rkho isliye substr.
        n = s.size();
        while(j < n) {
            if(s[j] != ' ') { //Ab i 0 par h or j ko word k last tak badhate jaao, jab j space par aa jyega tb ruk jyega.
                j++;
            }
            else {
                int length = j-i;
                int k = j-1; //Ab yha se ek k bnaya jisse j se ek kam rkha jisse i se j index mtlb ek word ko reverse kr ske.
                while(i <= k) {
                    swap(s[i], s[k]);
                    i++;
                    k--;
                }
                i = j;
                while(i < n && s[i] == ' ') { //Word k baad wali space se aage bdha diya dono pointers firse next word ki starting me pohch gye.
                    i++;
                    j++;
                }
            }
        }
        int length = j-i;
        int k = j-1;
        while(i <= k) {
            swap(s[i], s[k]);
            i++;
            k--;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};