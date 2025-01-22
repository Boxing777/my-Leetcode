class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int buy_price = prices[0];
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (buy_price > prices[i]) {
                buy_price = prices[i];
            }
            else if (prices[i] - buy_price > max_profit) {
                max_profit = prices[i] - buy_price;
            }
        }

        return max_profit;
    }
};