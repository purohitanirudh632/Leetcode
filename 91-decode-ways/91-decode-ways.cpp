class Solution {
public:
    int recur(string s,int index,vector<int>& dp)
    {
        int x= 0;
        int y =0;
        
        if(index==s.length())
            return 1;
        
        if(s[index]=='0')
            return 0;
        
        if(dp[index]!=-1) return dp[index];
        
         x= recur(s,index+1,dp);
        
        if(index+1 <s.length() && (s[index] <='2' && s[index+1] <'7' || s[index] == '1') )  
            y = recur(s,index+2,dp);
             
        return dp[index] = x+y;
    }
    
    
    int numDecodings(string s) {
        int n = s.length();
       vector<int> dp(n,-1);
         return recur(s,0,dp);
    }
};