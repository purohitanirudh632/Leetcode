class Solution {
public:
    
    int dfs(vector<vector<int>>& grid,int ball,int i,int j,int m,int n)
    {
        if(i==m)
        {
            return ball;
        }
        
        int master = grid[i][j];
        int col;
        if(master == -1)
        {
            if(j==0)
                return -1;
            
            if(grid[i][j-1]==1)
                return  -1;
            else
            {
                col=dfs(grid,j-1,i+1,j-1,m,n);
            }
        }
        
        if(master == 1)
        {
            if(j==n)
                return -1;
            if(grid[i][j+1]==-1)
                return -1;
            else
                col=dfs(grid,j+1,i+1,j+1,m,n);
        }
              
        return  col;
    }
    
    
    vector<int> findBall(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size()-1;
        vector<int> answer(n+1,-1);
        
        for(int i=0;i<=n;i++)
        {
            int ball=0;
          int reach =dfs(grid,ball,0,i,m,n);
            answer[i] = reach;
        }
        
        return answer;
    }
};