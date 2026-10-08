class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> table;
        for(const auto& num : nums) {
            if(table.find(num) == table.end()) 
                table.insert(num);
            else
                return num;
        }

        return 0;
    }
};
