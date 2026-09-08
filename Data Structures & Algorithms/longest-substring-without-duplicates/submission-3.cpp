class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;
        int l = 0;
        int res = 0;

        for(int r = 0; r < s.size(); r++) {
            if(seen.find(s[r]) != seen.end())
            // ensure left pointer will not go back (won't smaller than original) 
            // eg : "abba"
                l = max(l, seen[s[r]] + 1);

            seen[s[r]] = r;
            res = max(res, r - l + 1);
        }

        return res;
    }
};
