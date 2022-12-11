class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        long long int FirstMax = LONG_MIN;
        long long int SecondMax = LONG_MIN;
        long long  int ThirdMax = LONG_MIN;
        
        for (int i=0; i< nums.size(); i++)
        {
            if (nums[i] == FirstMax || nums[i] == SecondMax || nums[i] == ThirdMax)
            {
                continue;
            }
            if (nums[i] > FirstMax)
            {
                ThirdMax = SecondMax;
                SecondMax = FirstMax;
                FirstMax = nums[i];
            }
            else if (nums[i] > SecondMax)
            {
                ThirdMax = SecondMax;
                SecondMax = nums[i];
            }
            else if (nums[i] > ThirdMax)
            {
                ThirdMax = nums[i];
            }
        }
        
        if (ThirdMax == LONG_MIN)
        {
            return FirstMax;
        }
        else
        {
            return ThirdMax;
        }
      
    }
};