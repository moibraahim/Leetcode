class Solution {
public:
    vector<vector<int>> result;
    
       vector<vector<int>> subsets(vector<int>& nums) {
           
        vector<int> temp;       
           
        helper(0, nums, temp);
        return result;
    }
    
    void helper(int i, vector<int> &nums, vector<int> temp)
    {
        if(i>=nums.size())
        {
            result.push_back(temp);
            return;
        }
        
         temp.push_back(nums[i]);
        helper(i+1,nums, temp);
        temp.pop_back();
        helper(i+1, nums, temp);
        
    }
    
 
};