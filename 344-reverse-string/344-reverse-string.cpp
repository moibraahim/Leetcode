class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int L = 0;
        int R = s.size()-1;
        Helper(s,L,R);
           
    }
    
    void Helper(vector<char>& s, int L, int R)
    {
        if (L>=R)
        {
            return;
        }
        swap(s[L],s[R]);
        Helper(s,L+1,R-1);
            
    }
};