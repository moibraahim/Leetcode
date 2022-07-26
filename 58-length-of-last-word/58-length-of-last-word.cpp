class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0;
        int RealCount = 0;
        for (int i=0;i<s.length(); i++)
        {
            if (s[i] != ' ')
            {
                count++;
                RealCount = count;
            }
            else
            {
               
                count = 0;
            }
        }
        
        return RealCount;
    }
};