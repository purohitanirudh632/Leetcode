class Solution {
public:
    int recur(vector<int>& coins, int amount,vector<int>& dp)
    {
        if(amount==0)
            return 0;
        
        if(dp[amount]!=-1)
            return dp[amount];
        
        int res =INT_MAX;
        
        for(int i=0;i<coins.size();i++)
        {
            if(amount-coins[i]>=0)
            {
                res = min(res,recur(coins,amount-coins[i],dp));
            }
        }
        
        if(res!=INT_MAX)
            return dp[amount] = res+1;
       
        return dp[amount]=res;
            
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        
        int count =0;
        count = recur(coins,amount,dp);
        
        if(count==INT_MAX)
       return -1;
        
        return count;
    }
};