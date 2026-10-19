class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // FILO
        stack<pair<int, int>> st;
        // Remember initialize res at first
        vector<int> res(temperatures.size(), 0);
        
        for(int i = 0; i < temperatures.size(); i++) {
            int temp = temperatures[i];
            while(!st.empty() && temp > st.top().first) {
                auto pair = st.top();
                st.pop();
                res[pair.second] = i - pair.second;
            }

            st.push({temp, i});
        }

        return res;
    }
};
