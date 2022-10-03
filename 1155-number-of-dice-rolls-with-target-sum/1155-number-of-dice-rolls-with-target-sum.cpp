class Solution {
public:
    int m =1000000007;
    int ways(int n,int& k,int target,int sum,vector<vector<int>>& dp)
    {
        
     if(target == sum && n==0)
       {   
            // count++;
            return 1;
        }
        if(n<=0)
            return 0;
        
        if(target<=sum)
            return 0;
        
         if(dp[n][sum]!=-1) return dp[n][sum];
        int x=0;
        
        for(int i=1;i<=k;i++)
        {
            
        x = (x + ways(n-1,k,target,sum+i,dp))%m;
              dp[n][sum] =x; 
        }
        
   
        
        return dp[n][sum];
    }
    int numRollsToTarget(int n, int k, int target) {
        
        int sum=0;
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return ways(n,k,target,sum,dp);
    }
};