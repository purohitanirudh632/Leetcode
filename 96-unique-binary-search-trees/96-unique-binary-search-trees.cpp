class Solution {
public:
    int numTrees(int n) {
       vector<int> dp(n+1);
        
        dp[0]=1;
        dp[1]=1;
        
    for(int k =2;k<=n;k++ ) 
    {
        int ans =0;
        int i =0 , j=k-1;
        
        while(i<=k-1 && j >=0)
        {
            ans+= dp[i]*dp[j];
            i++;
            j--;
        }
        
        dp[k] = ans;
    }
    
    return dp[n];
    }
};