class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        int count = 0;
        int n = nums.size();
        if(n == 0 || n == 1) 
            return n;
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1] + 1) 
                ++count;
            else if(nums[i] == nums[i - 1])
                continue;
            else {
                res = max(res, count + 1);
                count = 0;
            }
        }

        res = max(res, count + 1);
        return res;
    }
};
