class Solution {
public:
    int reverse(int x) {
        
        long long ans=0;
        
        while(x!=0)
        {
            int val = x%10;
            
            if(val ==0 && ans ==0 )
            {
                x= x/10;
                continue;
            }
            
  
            
         if(ans*10 > 2147483648 || ans*10<-2147483647)
                return 0;
            
            ans = ans*10 + val;
            x = x/10;
            

        }
        
        return ans;
    }
};