class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> pair;
        for(int i = 0; i < position.size(); i++)
            pair.push_back({position[i], speed[i]});
        
        // 越靠近終點排越前面
        sort(pair.rbegin(), pair.rend());

        int res = 1;
        double prev = (double)(target - pair[0].first) / pair[0].second;
        for(int i = 1; i < n; i++) {
            double cur = (double)(target - pair[i].first) / pair[i].second;
            if(cur > prev) {
                res++;
                prev = cur;
            }
        }

        return res;
    }
};
