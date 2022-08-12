class Solution {
public:
    vector<vector<int>> recur(int i, int num , vector<vector<int>>& ans)
    {
        if(i == num)
            return ans;

//         dp[i][0] = 1;
//         dp[i][i] = 1;
        vector<int> temp{1};
        for(int j=1;j<i;j++)
        { 
            temp.push_back( ans[i-1][j-1] + ans[i-1][j] );

        }
        
        temp.push_back(1);
        ans.push_back(temp);
        
       return recur(i+1,num,ans); 
    }
    vector<vector<int>> generate(int numRows) {
        
       
        vector<vector<int>> ans{{1}};
       
        
         if(numRows ==1) 
          return ans;
        
        return recur(1,numRows, ans);
            
    }
};