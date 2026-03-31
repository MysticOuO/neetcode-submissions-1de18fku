class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> table;
        for(auto num : nums)
            table.insert(num);
        
        for(int i = 0; i < nums.size(); i++) {
            if(table.find(i) == table.end())
                return i;
            else 
                continue;
        }

        return nums.size();
    }
};
