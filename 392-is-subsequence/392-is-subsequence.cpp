class Solution {
public:
    bool isSubsequence(string s, string t) {
        // if there is vector of sterings
        int s_size = s.length();
        int t_size = t.length();
        if (s == t)
        {
            return true;
        }
        
        int count = 0;
        
        int i = 0;
        for (int j = 0; j < t_size; j++)
        {
            if (s[i] == t[j] && i <= j)
            {
                count++;
                i++;
            }
            if (count >= s_size)
            {
                return true;
            }
          
            
        }
        return false;
        
        
        
    }
};