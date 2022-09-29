class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<int> map(nums.size(),0);
        vector<vector<int>> result;
        
        Helper(nums,temp,map,result);
        return result;
        
        
    }
    
    void Helper(vector<int>& nums, vector<int>& temp, vector<int>& map, vector<vector<int>>& result )
    {
        if (temp.size() == nums.size())
        {
            result.push_back(temp);
            return;
        }
        
        // choose start point
        for (int i = 0; i<nums.size(); i++)
        {
            if (!map[i])
            {
                temp.push_back(nums[i]);
                map[i] = 1;
                Helper(nums,temp,map,result);
                map[i] = 0;
                temp.pop_back();
                    
            }
            
         
        }
    }
};