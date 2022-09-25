class Solution {
public:
//     int lcs(string t1, string t2,int i,int j , vector<vector<int>> dp)
//     {
//         if(i<0 || j <0)
//         {
//             return 0;
//         }
        
//         if(dp[i][j]!=-1)return dp[i][j];
        
//         if(t1[i] == t2[j])
//         {
//            return dp[i][j] =  1 +lcs(t1,t2,i-1,j-1,dp); 
//         }
      
//         return dp[i][j] = max(lcs(t1,t2,i-1,j,dp),lcs(t1,t2,i,j-1,dp));
        
//     }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int l1 = text1.size();
        int l2 = text2.size();
        
        vector<vector<int>> dp(l1+1,vector<int>(l2+1,0));
        
        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {
                
                if(text1[i-1] == text2 [j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        
      return dp[l1][l2];  
    }
};