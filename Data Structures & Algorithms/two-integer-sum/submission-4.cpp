class Solution {
public:
    // two pass (for loop)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            table[nums[i]] = i;
        
        for(int i = 0; i < n; i++) {
            int remain = target - nums[i];
            if(table.count(remain) && table[remain] != i)
                return {i, table[remain]};
        }

        return {};
    }
};
