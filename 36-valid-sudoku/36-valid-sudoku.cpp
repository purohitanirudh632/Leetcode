class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> mp;
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(isdigit(board[i][j]))
                {
                    if (mp.count(board[i][j]) == 1)
                        return false;
                    else
                        mp[board[i][j]]++;
                }
            }
            
            mp.clear();
            
        }
         
     for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(isdigit(board[j][i]))
                {
                    if(mp.count(board[j][i]) == 1)
                        return false;
                    else
                        mp[board[j][i]]++;
                }
            }
         
         mp.clear();
            
        }
        
        int max =0;
        int index =0;
       int index2 =0;
       for(int l=0;l<9;l++)
       {
           index = (l/3)*3;
           index2 = (l%3)*3;

           for(int i=index;i<index+3;i++)
        {
            for(int j=index2;j<index2+3;j++)
            {
                if(isdigit(board[i][j]))
                {
                    if(mp.count(board[i][j]) == 1)
                        
                        return false;
                    else
                        mp[board[i][j]]++;
                }
            }
       }
           
           mp.clear();
        
       } 
        return true;
        
    }
};