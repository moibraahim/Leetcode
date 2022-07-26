class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min = -1;
        int mid = -1;
        for (int i = 0; i<nums.size(); i++)
        {
            if (min == -1 || nums[i] < nums[min])
            {
                
                min = i;
               
              
            }
            else if (nums[i] >nums[min] && (mid == -1 || nums[i] < nums[mid]))
            {
                mid = i;
            }
            else if (mid != -1 && nums[i] > nums[mid])
            {
                return true;
            }
        }
        return false;
        
    }
};