class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> table;
        for(int i = 0; i < numbers.size(); i++) 
            table[numbers[i]] = i;
        
        for(int i = 0; i < numbers.size(); i++) {
            int count = target - numbers[i];
            if(table.find(count) != table.end())
                return {i + 1, table[count] + 1};
            else 
                continue;
        }

        return {};
    }
};
