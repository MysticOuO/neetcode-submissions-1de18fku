class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        for(int i = 0; i < nums.size(); i++) 
            table[nums[i]] = i;
        
        for(int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if(table.find(remain) != table.end() && table[remain] != i)
                return {i, table[remain]};
        }

        return {0 ,0};
    }
};
