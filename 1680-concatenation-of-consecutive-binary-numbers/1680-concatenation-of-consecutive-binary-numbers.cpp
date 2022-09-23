class Solution {
public:
    int concatenatedBinary(int n) {
        
        int power =0;
        int sum=0;
        
         unsigned long long int val = 1000000007;
        if(n==1)
            return 1;
        
        for(int i=n;i>0;i--)
        {  
            int s=i;
            
            while(s>0)
            {
                int a = s%2;
                 s=s/2;
                
                  if(power ==0)
                      {
                        power =1;
                       }
                    sum = (sum+ (a*power))%val;
                
                power = (power *2)%val;
                
            }
        }
        
        return sum;
    }
};