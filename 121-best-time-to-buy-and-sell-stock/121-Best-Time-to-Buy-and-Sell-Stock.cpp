class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0,buystock=prices[0];
        int n = prices.size();
        for (int i = 1 ; i< n ;i++){
            if(prices[i]>buystock){
            maximum=max(maximum,prices[i]-buystock);
        }
        buystock=min(buystock,prices[i]);
        }
        return maximum;
    }
};