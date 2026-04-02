class Solution {
public:
    // bottom up (space optimal)
    int climbStairs(int n) {
        int cur = 1;
        int prev = 1;

        for(int i = 0; i < n - 1; i++) {
            int temp = cur;
            cur = cur + prev;
            prev = temp;
        }

        return cur;
    }
};
