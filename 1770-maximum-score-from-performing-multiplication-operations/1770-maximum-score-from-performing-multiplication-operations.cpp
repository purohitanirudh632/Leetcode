class Solution {
public:
    int m ,n;
    
    int recur(vector<int>& nums, vector<int>& muls,vector<vector<int>>&dp,int i,int j)
    {
        if(j==m)return 0;
        
        if(dp[i][j]!=INT_MIN) return dp[i][j];
        
        return dp[i][j] = max(
            //take from the start
        muls[j]*nums[i]+ recur(nums,muls,dp,i+1,j+1),
            //take from the end
            muls[j]*nums[n-1-j+i] + recur(nums,muls,dp,i,j+1)
        );
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        m = (int) multipliers.size() , n = (int)nums.size();
        vector<vector<int>> dp(m,vector<int>(m,INT_MIN));
        
       return recur(nums,multipliers,dp,0,0);
    }
};