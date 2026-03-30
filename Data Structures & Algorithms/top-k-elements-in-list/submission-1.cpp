class Solution {
public:
    // using the bucket sort idea (index represent occurs times)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        for(int i = 0; i < nums.size(); i++)
            ++table[nums[i]];

        vector<pair<int, int>> temp;
        for(auto mem : table)
            temp.push_back({mem.second, mem.first});
        sort(temp.rbegin(), temp.rend());

        vector<int> res;
        for(int i = 0; i < k; i++) 
            res.push_back(temp[i].second);
        
        return res;
    }
};
