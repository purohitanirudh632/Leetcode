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
        vector<int> dp(nums.size(),-1);
        vector<int> dp1(nums.size(),-1);
        int n = nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return (max(nums[0],nums[1]));
        
        return max(dfs(nums,n-1,0,dp),dfs(nums,n,1,dp1));
    }
};