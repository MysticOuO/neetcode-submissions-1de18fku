class Solution {
public:
    bool isValid(string s) {
        stack<char> table;

        for(const char& c : s) {
            if(c == '(' || c == '{' || c == '[')
                table.push(c);
            else {
                // must check stack is empty or not
                if(table.empty())
                    return false;
                else if(c == ')') {
                    if(table.top() == '(')
                        table.pop();
                    else
                        return false;
                }
                else if(c == '}') {
                    if(table.top() == '{')
                        table.pop();
                    else
                        return false;
                }
                else {
                    if(table.top() == '[')
                        table.pop();
                    else
                        return false;
                }
            }
        }

        return table.size() == 0;
    }
};
