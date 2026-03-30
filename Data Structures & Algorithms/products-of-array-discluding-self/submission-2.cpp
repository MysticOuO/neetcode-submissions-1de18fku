class Solution {
public:
    // remember that need to find out how many zero in the array
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int cal = 1;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0)
                cal *= nums[i];
            else
                ++count;
        }
        if(count >= 2) {
            vector<int> res(n, 0);
            return res;
        }

        vector<int> res;
        for(int i = 0; i < n; i++) {
            int temp = cal;
            if(count == 0) {
                temp /= nums[i];
                res.push_back(temp);
            }
            else {
                if(nums[i] != 0)
                    res.push_back(0);
                else
                    res.push_back(cal);
            }
        }

        return res;
    }
};
