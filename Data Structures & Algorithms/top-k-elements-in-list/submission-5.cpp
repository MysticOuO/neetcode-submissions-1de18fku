class Solution {
public:
    // using the bucket sort idea (index represent occurs times) -> O(n)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> bucket;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> res;
        for(const int& num : nums)
            ++bucket[num];
        
        for(pair<const int, int>& mem : bucket) 
            freq[mem.second].push_back(mem.first);
        
        for(int i = freq.size() - 1; i >= 0; i--) {
            for(int& n : freq[i]) {
                res.push_back(n);
                if(res.size() == k)
                    return res;
            }
        }
        
        return res;

    }
};
