class Solution {
public:
    
    
    vector<vector<int>> result;

    void Helper(int i, vector<int>& canidates, vector<int>& temp, int target)
    {
        if (i >= canidates.size())
        {
            if (target == 0)
            {
                result.push_back(temp);
            }
            return;
        }

        if (canidates[i] <= target)
        {
            temp.push_back(canidates[i]);
            Helper(i, canidates, temp, target - canidates[i]);
            temp.pop_back();
        }


        Helper(i + 1, canidates, temp, target);
        



    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        Helper(0, candidates, temp, target);
        return result;


    }

};
