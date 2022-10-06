class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int maxGCD = INT_MIN;
        
        for (int i=1; i<=max; i++)
        {
            if (max % i == 0 && min % i ==0)
            {
                if (i > maxGCD)
                {
                    maxGCD = i;
                }
            }
        }
        
        return maxGCD;
        
        
    }
};