class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) 
            return "";
        
        unordered_map<char, int> table, window;
        for(const auto& c : t) 
            table[c]++;
        
        int have = 0;
        // if t = "AABC" table.size() -> need = 3 
        int need = table.size();
        pair<int, int> res;
        int len = INT_MAX;
        int l = 0;

        for(int r = 0; r < s.length(); r++) {
            char c = s[r];
            window[c]++;

            if(table.count(c) && window[c] == table[c])
                have++;
            
            while(have == need) {
                if(r - l + 1 < len) {
                    len = r - l + 1;
                    res = {l, r};
                }

                window[s[l]]--;
                if(table.count(s[l]) && window[s[l]] < table[s[l]])
                    have--;
                l++;
            }
        }

        return len == INT_MAX ? "" : s.substr(res.first, len);
    }
};
