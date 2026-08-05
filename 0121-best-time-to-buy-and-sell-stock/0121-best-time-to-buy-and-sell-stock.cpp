class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int minprice=prices[0];
        for(int i=1;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            max_profit=max(max_profit,prices[i]-minprice);
        }
        return max_profit;
        
    }
};