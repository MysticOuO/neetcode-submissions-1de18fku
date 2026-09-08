class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int res = nums[0];

        while(l <= r) {
            if(nums[l] < nums[r]) {
                // Can't write like return nums[l]
                // cuz the minimum may occur in the boundary like num[m]
                // ex : [5, 6, 7, 0, 1, 2, 3, 4]
                res = min(res, nums[l]);
                break;
            }
            
            int m = l + (r - l) / 2;
            res = min(res, nums[m]);

            if(nums[m] >= nums[l])
                l = m + 1;
            else
                r = m - 1;
        }

        return res;
    }
};
