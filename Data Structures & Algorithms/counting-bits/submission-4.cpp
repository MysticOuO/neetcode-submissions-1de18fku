class Solution {
public:
    // optimal solution
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);
        for(int i = 1; i <= n; i++) 
            // Remove least significant bit and whether the last bit 1 or 0
            dp[i] = dp[i >> 1] + (i & 1);
        return dp;
    }
};
