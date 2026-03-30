class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        if(n == 0 || n == 1)
            return n;

        unordered_set<int> table;
        for(int n : nums)
            table.insert(n);

        for(int i = 0; i < n; i++) {
            if(table.find(nums[i] - 1) == table.end()) {
                int cur = nums[i];
                int count = 0;
                while(table.find(cur + 1) != table.end()) {
                    ++cur;
                    ++count;
                }
                res = max(res, count + 1);
            }
            else
                continue;
        }
        return res;
    }
};
