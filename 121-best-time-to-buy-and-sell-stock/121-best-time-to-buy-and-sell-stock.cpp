class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int MaxProfit = 0;
        
        int Lbuy = 0;
        int Rsell = 1;
        
        while (Lbuy<=Rsell && Rsell < prices.size())
        {
            
            if (prices[Lbuy] < prices[Rsell])
            {
                profit = prices[Rsell] - prices[Lbuy];
                MaxProfit = max(MaxProfit,profit);
                Rsell++;
                
                 
            }
            else // if the buy was > sell -> cause loss
            {
                Lbuy = Rsell;
                Rsell++;
                
            }
        }
        
        return MaxProfit;
        
        
    }
};