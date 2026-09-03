class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> table;
        for(int i = 0; i < numbers.size(); i++)
            table[numbers[i]] = i;

        // Using index more convenient
        for(int i = 0; i < numbers.size(); i++) {
            int remain = target - numbers[i];
            if(table.find(remain) != table.end())
                return {i + 1, table[remain] + 1};
        }   

        return {};
    }
};
