class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int L = 0;
        int R = 1;
        int Profit = 0;
        int MaxProfit = 0;
        
        while (R < prices.size())
        {
            if (prices[L] < prices[R])
            {
                Profit = prices[R] - prices[L];
                MaxProfit = max(MaxProfit,Profit);
                R++;
                
            }
            else
            {
                L = R;
                R++;
            }
        }
        
        return MaxProfit;
        
    }
};