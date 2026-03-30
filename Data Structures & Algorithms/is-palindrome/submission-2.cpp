class Solution {
public:
    bool help(char c) {
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
    }
    bool isPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        string s1 = "";
        string s2 = "";
        for(int i = 0; i < s.size(); i++) {
            if(help(s[i]))
                s1 += tolower(s[i]);
            if(help(rev[i]))
                s2 += tolower(rev[i]);
        }

        return s1 == s2;
    }
};
