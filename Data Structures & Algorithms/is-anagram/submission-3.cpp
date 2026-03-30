class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        unordered_map<char, int> table1;
        unordered_map<char, int> table2;

        for(int i = 0; i < s.length(); i++) {
            ++table1[s[i]];
            ++table2[t[i]];
        }

        return table1 == table2;
    }
};
