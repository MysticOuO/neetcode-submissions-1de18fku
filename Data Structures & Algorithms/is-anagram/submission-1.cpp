class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> table;
        if(s.length() != t.length())
            return false;
            
        for(char c : s) 
            ++table[c];
        
        for(char c : t) {
            --table[c];
            if(table[c] < 0) 
                return false; 
        }

        return true;
    }
};
