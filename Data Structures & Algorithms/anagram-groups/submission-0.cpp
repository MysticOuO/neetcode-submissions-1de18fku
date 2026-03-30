class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> table;
        for(auto s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            table[temp].push_back(s);
        }

        vector<vector<string>> res;
        for(auto mem : table) 
            res.push_back(mem.second);

        return res;
    }
};
