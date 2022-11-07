class Solution {
public:
    int flag = 0;
  bool findword( vector<vector<char>>& board, string word,int i,int j,int m,int n,int itr)
    {

      if(itr == word.size())return true;
           
        if(i<0 || i>=m || j<0 || j>=n || word[itr]!= board[i][j])
            return false;
      
    char ch = board[i][j];
      
        board[i][j] = '#';
          
     bool opt1 = findword(board,word,i+1,j,m,n,itr+1);
        bool opt2 =  findword(board,word,i-1,j,m,n,itr+1);
         bool opt3 = findword(board,word,i,j+1,m,n,itr+1);
          bool opt4 =findword(board,word,i,j-1,m,n,itr+1);
      
      board[i][j] = ch;
      return opt1||opt2||opt3||opt4;

    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
       for(int i=0;i<m;i++)
       {
           for(int j =0;j<n;j++)
           {
               
             if(findword(board,word,i,j,m,n,0))return true;
           }
       }
        
        
  return false;
    }
};