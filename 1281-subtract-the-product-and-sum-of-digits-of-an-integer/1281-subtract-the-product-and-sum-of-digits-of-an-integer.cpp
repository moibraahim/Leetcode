class Solution {
public:
    int subtractProductAndSum(int n) 
    {
      
        int sum = 0;
        int product = 1;
        while (n != 0)
        {
            int LastDigit = n % 10;
            sum += LastDigit;
            product *= LastDigit;
            n = n / 10;
        }
        
        return product - sum;
    }
};