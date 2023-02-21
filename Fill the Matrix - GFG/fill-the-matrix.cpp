//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        vector<vector<int>> matrix(N,vector<int>(M,0));
        matrix[x-1][y-1] =1;
        queue<pair<int,int>> q;
        q.push({x-1,y-1});
        
        int count =0;
        while(!q.empty())
        {   count++;
            int  size = q.size();
            while(size)
            {
                int i =q.front().first;
                int j = q.front().second;
                q.pop();
                if(i+1<N && matrix[i+1][j]==0)
                  {
                      matrix[i+1][j]=1;
                      q.push({i+1,j});
                  }
                  
                if(j+1<M && matrix[i][j+1]==0)
                  {
                      matrix[i][j+1]=1;
                      q.push({i,j+1});
                  }
                if(i-1>=0 && matrix[i-1][j]==0)
                  {
                      matrix[i-1][j]=1;
                      q.push({i-1,j});
                  }
                  
                if(j-1>=0 && matrix[i][j-1]==0)
                  {
                      matrix[i][j-1]=1;
                      q.push({i,j-1});
                  }  
                  
                size--;  
            }
        }
        
    return count-1;    
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends