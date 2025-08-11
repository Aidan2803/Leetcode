class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for(auto price : prices){
            min_price = std::min(min_price, price);
            max_profit = std::max(max_profit, price - min_price);
        }

        return max_profit;
    }
};