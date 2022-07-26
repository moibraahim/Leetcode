class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Sort
        // "flower","flight","flow"]
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string a = strs[0];
        string b = strs[n-1];
        string word = "";
        int j = 0;
        for (int i=0; i<a.size(); i++)
        {
            if (a[i] == b[j])
            {
                word += a[i];
            }
            else
            {
                break;
            }
            
            j++;
        }
        
        return word;
    }
};