class Solution {
public:
    // O(nlogn)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        for(int i = 0; i < nums.size(); i++)
            ++table[nums[i]];

        vector<pair<int, int>> temp;
        for(auto mem : table)
            temp.push_back({mem.second, mem.first});
        sort(temp.begin(), temp.end());

        vector<int> res;
        int n = temp.size();
        for(int i = n - 1; i >= n - k; i--) 
            res.push_back(temp[i].second);
        
        return res;
    }
};
