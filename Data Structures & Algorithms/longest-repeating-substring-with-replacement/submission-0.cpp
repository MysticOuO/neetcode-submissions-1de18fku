class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> seen;
        int res = 0;
        int l = 0;
        int maxf = 0;

        for(int r = 0; r < s.size(); r++) {
            ++seen[s[r]];
            maxf = max(maxf, seen[s[r]]);

            while(r - l + 1 - maxf > k) {
                --seen[s[l]];
                ++l; 
            }

            res = max(res, r - l + 1);
        }

        return res;

    }
};
