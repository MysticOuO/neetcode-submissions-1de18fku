class Solution {
public:
    // best solution with O(n)
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> table;
        int res = 0;
        for(int& num : nums) 
            table.insert(num);
        
        for(const int& num : table) {
            // Remember to find out the starting point by the code below
            if(table.find(num - 1) == table.end()) {
                int cur = num;
                int length = 1;
                while(table.find(cur + 1) != table.end()) {
                    ++cur;
                    ++length;
                }   
                res = max(res, length);
            }  
        }

        return res;
    }
};
