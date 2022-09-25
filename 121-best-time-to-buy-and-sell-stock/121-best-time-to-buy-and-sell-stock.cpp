class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        int Profit = 0;
        int L = 0;
        int R = 1;
        
        while (R < prices.size())
        {
            if (prices[R]  < prices[L])
            {
                L = R;
            }
            else 
            {
                
                Profit = prices[R] - prices[L];
                MaxProfit = max(Profit,MaxProfit);
                R++;
            }
          
        
           
        }
        
        return MaxProfit;
        
        
        
    }
};