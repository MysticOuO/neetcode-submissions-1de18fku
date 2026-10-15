class Solution {
public:
    // Reason : if cur sum < 0, keeping it will reduce sum of any future ans
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int cur = 0;

        for(const auto& num : nums) {
            if(cur < 0) 
                cur = 0;
            cur += num;
            res = max(res, cur);
        }

        return res;
    }
};
