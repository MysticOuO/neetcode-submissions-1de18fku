class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> table;
        for(string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            table[temp].push_back(s);
        }

        for(pair<const string, vector<string>> mem : table) {
            res.push_back(mem.second);
        }
        
        return res;
    }
};
