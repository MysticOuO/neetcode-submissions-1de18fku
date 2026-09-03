class Solution {
public:
    bool help(char c) {
        return (c >= 'a' && c <= 'z') || 
               (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int left = 0;
        // C++ s.size() didn't consider \0 in the string 
        // but C consider it in the string
        int right = s.size() - 1; 
        while(left < right) {
            // Remember judge the condition that whether left smaller than right
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
