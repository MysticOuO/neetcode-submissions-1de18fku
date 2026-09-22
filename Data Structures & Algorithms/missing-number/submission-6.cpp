class Solution {
public:
    // XOR has Commutative Law & Associative Law
    int missingNumber(vector<int>& nums) {
        // Remember to initialize res = nums.size() cuz for loop 
        int res = nums.size();
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int count = i ^ nums[i];
            res ^= count;
        }

        return res;
    }
};
