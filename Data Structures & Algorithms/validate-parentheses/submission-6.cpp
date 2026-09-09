class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // using unordered_map to record pair
        unordered_map<char, char> table = {{')', '('}, {']', '['}, {'}', '{'}};

        for(const char& c : s) {
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
