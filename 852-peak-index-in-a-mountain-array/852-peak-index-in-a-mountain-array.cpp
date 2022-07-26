class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int max = LONG_MIN;
        int MaxPos;
            
        for (int i=0; i<arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                MaxPos = i;
            }
        }
        return MaxPos;
    }
};