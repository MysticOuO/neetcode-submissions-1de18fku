class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;
        for(char c : s) 
            seen[c]++;
        for(char c : t)
            seen[c]--;
        
        for(pair<char, int> mem : seen) {
            if(mem.second != 0)
                return false;
        }

        return true;
    }
};
