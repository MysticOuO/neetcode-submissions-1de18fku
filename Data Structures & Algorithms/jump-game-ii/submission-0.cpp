class Solution {
public:
    int jump(vector<int>& nums) {
        int res = 0;
        int l = 0, r = 0;

        while(r < nums.size() - 1) {
            int far = 0;
            // find the interval we can get in this iteration
            for(int i = l; i <= r; i++) 
                far = max(far, i + nums[i]);
            l = r + 1;
            r = far;
            res++;
        }

        return res;
    }
};
