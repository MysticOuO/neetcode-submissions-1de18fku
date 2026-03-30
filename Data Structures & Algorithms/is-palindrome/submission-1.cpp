class Solution {
public:
    bool help(char c) {
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
    }
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            while(left < right && !help(s[left]))
                ++left;
            while(left < right && !help(s[right]))
                --right;
            if(tolower(s[left]) == tolower(s[right])) {
                ++left;
                --right;
            }

            else 
                return false;
        }
        
        return true;
    }
};
