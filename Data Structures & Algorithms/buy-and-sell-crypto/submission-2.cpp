class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int buy = 0;
        int sell = 1;

        while(sell < prices.size()) {
            if(prices[buy] <= prices[sell]) 
                res = max(res, prices[sell] - prices[buy]);
            else 
                buy = sell;
            ++sell;
        }

        return res;
    }
};
