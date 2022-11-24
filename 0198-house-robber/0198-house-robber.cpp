class Solution {
public:
    
      int dfs(vector<int>& nums,int n,int index,vector<int>& dp)
    {
        if(index>=n)
        { 
            return 0;
        }
        
          if(dp[index]!=-1)
              return dp[index];
          
          int maxi =INT_MIN;
        for(int i = index;i<n;i++)
        {
          maxi  = max(maxi,nums[i]+dfs(nums,n,i+2,dp));
        }
        
      return dp[index] = maxi;  
    }   
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
         vector<int> dp(n,-1);
        
        return dfs(nums,n,0,dp);
    }
};