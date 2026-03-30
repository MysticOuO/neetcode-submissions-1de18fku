class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        for(int i = 0; i < nums.size(); i++)
            ++table[nums[i]];
        
        vector<vector<int>> freq(nums.size() + 1);
        for(auto mem : table)
            freq[mem.second].push_back(mem.first);

        vector<int> res;
        for(int i = freq.size() - 1; i >= 0; i--) {
            for(int num : freq[i]) {
                res.push_back(num);
            }
            if(res.size() == k)
                return res;
        }
        return res;
    }
};
