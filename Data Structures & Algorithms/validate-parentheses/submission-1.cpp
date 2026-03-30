class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> table = {{')', '('}, {']', '['}, {'}', '{'}};
        for(char c : s) {
            if(table.count(c)) {
                if(!st.empty() && st.top() == table[c])
                    st.pop();
                else 
                    return false;
            }
            else
                st.push(c);
        }

        return st.size() == 0;
    }
};
