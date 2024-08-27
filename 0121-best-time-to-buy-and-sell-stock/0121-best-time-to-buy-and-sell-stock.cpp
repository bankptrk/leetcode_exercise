class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int min = INT_MAX, max = INT_MIN;
        for(int i=0; i<n; i++){
            if(prices[i] < min) min = prices[i];
            profit = prices[i] - min;
            if(profit > max) max = profit;
        }
        return max;
    }
};