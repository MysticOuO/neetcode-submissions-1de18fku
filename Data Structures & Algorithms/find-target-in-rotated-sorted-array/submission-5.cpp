class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r) {
            int m = l + (r - l) / 2;

            if(nums[m] == target)
                return m;

            // 左半邊是 sorted
            if(nums[l] <= nums[m]) {

                // target 在左半邊
                if(nums[l] <= target && target < nums[m])
                    r = m - 1;
                else
                    l = m + 1;
            }

            // 右半邊是 sorted
            else {

                // target 在右半邊
                if(nums[m] < target && target <= nums[r])
                    l = m + 1;
                else
                    r = m - 1;
            }
        }

        return -1;
    }
};