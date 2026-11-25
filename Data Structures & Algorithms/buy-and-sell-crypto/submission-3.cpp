class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, leastPrice = prices[0];
        int n = prices.size();
        for(int i=1; i<n; i++) {
            leastPrice = min(leastPrice, prices[i]);
            profit = max(profit, prices[i] - leastPrice);
        }
        return profit;
    }
};
