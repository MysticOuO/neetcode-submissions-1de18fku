class Solution {
public:
    // only one for loop is better (didn't come up with it)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int remain = target - nums[i];
            if(table.count(remain) && table[remain] != i)
                return {table[remain], i};
            else 
                table.insert({nums[i], i});
        }

        return {};
    }
};
