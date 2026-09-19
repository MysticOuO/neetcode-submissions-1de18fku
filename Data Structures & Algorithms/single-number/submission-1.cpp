class Solution {
public:
    // optimal solution for O(n) time complexity and O(1) extra space
    int singleNumber(vector<int>& nums) {
        int res = 0;
        
        for(const int& num : nums)
            res ^= num;

        return res;
    }
};
