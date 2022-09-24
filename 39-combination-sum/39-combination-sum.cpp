class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int> temp;
        vector<vector<int>> result;
        int sum = 0;
        Helper(0, candidates, target, sum, temp, result);
        return result;
        
        
        
    }
    
    
    void Helper(int i, vector<int>& cani, int target, int sum, vector<int>& temp, vector<vector<int>>& result)
    {
        if (sum == target)
        {
            result.push_back(temp);
            return;
        }
        if (i >= cani.size() || sum > target )
        {
            return;
        }
        
        
        // Keep Taking Element
        temp.push_back(cani[i]);
        sum += cani[i];
        Helper(i,cani,target,sum,temp,result);
        
        // Remove and Move to Next Element
        temp.pop_back();
        sum -= cani[i];
        Helper(i+1,cani,target,sum,temp,result);
    }
};