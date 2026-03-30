class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;

        
        for(int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if(table.find(remain) != table.end())
                return {table[remain], i};
            else
                table.insert({nums[i], i});
        }

        return {};
    }
};
