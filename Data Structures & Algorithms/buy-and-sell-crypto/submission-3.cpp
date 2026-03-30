class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int buy = prices[0];

        for(int num : prices) {
            res = max(res, num - buy);
            buy = min(num, buy);
        }

        return res;
    }
};
