class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> table;
        for(int num : nums) 
            ++table[num];
        
        // the method we don't use "auto"
        for(pair<const int, int> it : table) {
            if(it.second != 1) 
                return true;
        }

        return false;
    }
};