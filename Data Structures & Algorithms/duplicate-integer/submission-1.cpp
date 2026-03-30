class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> table;
        for(int i = 0; i < nums.size(); i++) {
            if(table.find(nums[i]) != table.end())
                return true;
            else
                table.emplace(nums[i]);
        }

        return false;
    }
};