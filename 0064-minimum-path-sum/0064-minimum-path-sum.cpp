class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
 
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {  
                if(i==0)
                {
                    if(j==0)
                        continue;
                    
                    grid[i][j]+= grid[i][j-1];
                    
                   continue; 
                }
                
                 if(j==0)
                 {
                     grid[i][j]+= grid[i-1][j];
                         continue;
                 }
                
                
                
               grid[i][j]+= min(grid[i-1][j],grid[i][j-1]);

                
            }
        }
        
        return grid[m-1][n-1];
    }
};