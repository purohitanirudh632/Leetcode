//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int mod =1000000007;
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        if(grid[0][0]==0)
         return 0;

        int rowzero = 1;
       for(int i=0;i<n;i++)
         {
          if(grid[i][0]==0)
           {
               rowzero =0;
           }
           
           if(rowzero==0)
            grid[i][0] =0;
         }
         
           int colzero = 1;
           for(int i=0;i<m;i++)
             {
              if(grid[0][i]==0)
               {
                   colzero =0;
               }
               
               if(colzero==0)
                grid[0][i] =0;
             }
         
         
       if(m==1 || n==1)
        {
           if(rowzero ==0 || colzero==0)
            return 0;
            
            return 1;
        } 
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    grid[i][j] = (grid[i-1][j]+grid[i][j-1])%mod;
                    
                }
                
            }
        
        }
        
    
        
    return grid[n-1][m-1];    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends