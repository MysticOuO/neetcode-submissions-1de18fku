class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pair;
        for(int i = 0; i < position.size(); i++)
            pair.push_back({position[i], speed[i]});
        
        // 越靠近終點排越前面
        sort(pair.rbegin(), pair.rend());
        vector<double> stack;

        for(const auto& p : pair) {
            // 計算該車抵達終點所需時間
            stack.push_back((double)(target - p.first) / p.second);

            // 後車若能追上前車，將兩者合併
            // 若能追上表示前車較慢，留前車所需時間 (因不能超車)
            if(stack.size() >= 2 && stack.back() <= stack[stack.size() - 2]) 
                stack.pop_back();
        }

        return stack.size();
    }
};
