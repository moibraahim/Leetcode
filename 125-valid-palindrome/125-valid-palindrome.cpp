class Solution {
public:
    bool isPalindrome(string s) {
        
        int j = s.length()-1;
        for (int i=0; i<j; )
        {
            if (!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if (!isalnum(s[j]))
            {
                j--;
                continue;
                
            }
            if (tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
          
            j--;
            i++;
        }
        return true;
        
    }
};