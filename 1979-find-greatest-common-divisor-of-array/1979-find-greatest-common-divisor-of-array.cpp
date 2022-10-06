class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        
        return Helper(max,min);
        
        
        
        
        
        
    }
    
     int Helper(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        
        return Helper(b, a % b);
    }
    
    
    
};