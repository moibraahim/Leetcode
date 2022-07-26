class Solution {
public:
    bool judgeCircle(string moves) 
    {
        
        int Wing = 0;
        int UpAndDown = 0;
       for (int i=0; i<moves.length(); i++)
       {
           if (moves[i] == 'U')
                UpAndDown += 1; 
           else if (moves[i] == 'D')
               UpAndDown -= 1;

           else if (moves[i] == 'R')
               Wing += 1;

           else if (moves[i] == 'L')
               Wing -= 1;
       }
        
        return Wing == 0 && UpAndDown == 0;
    }
};