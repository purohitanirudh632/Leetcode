class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score =0;
        if(tokens.size() == 0)
            return 0;
        
        if(tokens.size() == 1)
        {
            if(power >= tokens[0])
                return 1;
            else
                return 0;
        }
        

     sort(tokens.begin(),tokens.end());
        
     if(tokens[0] > power)
            return 0;
        
        
        for(int i=0;i<tokens.size();i++)
        {
            // cout<<power<<" ";
            
            if(power >= tokens[i])
            {
                power -= tokens[i];
                score++;
            }
            else
            {
                if(i!= tokens.size()-1 && tokens[i] < power+ tokens[tokens.size()-1])
                {
                    power += tokens[tokens.size()-1];
                    tokens.pop_back();
                    score--;
                    i--;
                }
                else
                {
                   break;
                }
            }
        }
        
        return score;
    }
};