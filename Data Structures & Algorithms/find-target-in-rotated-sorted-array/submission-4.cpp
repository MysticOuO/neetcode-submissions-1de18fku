class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r) {
            int m = l + (r - l) / 2;
            if(nums[m] == target)
                return m;
            // whether the left part is sorted
            if(nums[l] <= nums[m]) {
                // Determine target in the left side or not
                if(nums[m] < target || nums[l] > target) 
                    l = m + 1;
                else
                    r = m - 1;
            }
            else {
                if(nums[m] > target || nums[r] < target) 
                    r = m - 1;
                else 
                    l = m + 1;
            }
        }

        return -1;
    }
};
