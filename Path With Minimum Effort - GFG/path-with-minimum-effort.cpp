//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      bool isvalid(int p,int q,int m,int n)
    {
        if(p<0 || q<0 || p==m || q==n)
         return false;

        return true; 
    }
    int MinimumEffort(vector<vector<int>>& heights) {
       int m = heights.size();
       int n = heights[0].size(); 
       if(m==1 && n==1)
        return 0;
       vector<vector<int>> valid ={{0,1},{0,-1},{1,0},{-1,0}};
       priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

       vector<vector<int>> paths(m,vector<int>(n,INT_MAX));
       paths[0][0] =0;
       pq.push({0,{0,0}});
       
       int mini = INT_MAX;
       while(!pq.empty())
       {
           int effort =pq.top().first; 
           int i = pq.top().second.first;
           int j = pq.top().second.second;
           pq.pop();
           
           if(i==m-1 && j==n-1 && effort==mini)
             break;

           for(int l=0;l<4;l++)
           {
               int p,q;
               p= i+valid[l][0];
               q=j+valid[l][1];
               if(isvalid(p,q,m,n))
               {
                   int newpath =abs(heights[p][q]-heights[i][j]);
                   newpath = max(effort,newpath);
                    if(newpath<paths[p][q])
                    {
                        // cout<<newpath<<" ";
                        if(p==m-1 && q==n-1)
                        {
                            mini = min(mini,newpath);
                        }
                        paths[p][q] = newpath;
                        pq.push({newpath,{p,q}});
                        // cout<<pq.size();
                    }

               }
           }

       }

       return mini; 
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends