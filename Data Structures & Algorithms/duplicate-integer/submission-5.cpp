class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> table;
        for(int num : nums) 
            ++table[num];
        
        for(auto it : table) {
            if(it.second != 1) 
                return true;
        }

        return false;
    }
};