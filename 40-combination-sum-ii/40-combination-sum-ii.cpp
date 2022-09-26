class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        Helper(0,candidates,target,temp,result);
        return result;
        
    }
    
    
    void Helper(int index, vector<int>&cani, int target, vector<int> &temp, vector<vector<int>> &result)
    {
        if ( target == 0 )
        {
            result.push_back(temp);
            return;
        }
        for (int i = index; i<cani.size(); i++ )
        {
            if (i > index && cani[i] == cani[i-1])
            {
                continue;
            }
            if (cani[i] > target)
            {
                break;
            }
     
            temp.push_back(cani[i]);
            Helper(i+1,cani,target - cani[i],temp,result);
            temp.pop_back();

        }
    }
    
   
};