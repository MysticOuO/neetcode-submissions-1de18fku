class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> table1;
        for(const char c : s1) 
            table1[c]++;
        
        int len = table1.size();
        for(int i = 0; i < s2.length(); i++) {
            unordered_map<char, int> table2;
            int cur = 0;
            for(int j = i; j < s2.length(); j++) {
                char c = s2[j];
                table2[c]++;

                if(table1[c] < table2[c])
                    break;
                
                if(table1[c] == table2[c])
                    ++cur;
                
                if(cur == len)
                    return true;
            }
        }
        
        return false;
    }
};
