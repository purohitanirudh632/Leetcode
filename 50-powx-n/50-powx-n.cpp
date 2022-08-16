class Solution {
public:
    double myPow(double x, int n) {
        
        int flag =1;
        if(n<0)
         flag=0;
        
        n = abs(n);
        double res=1;
        
        while(n>0)
        {
            if(n%2==1)
              res =res*x;
            x = x*x;
            n =n>>1;
        }
        
        return (flag==1?res:1/res);
    }
};