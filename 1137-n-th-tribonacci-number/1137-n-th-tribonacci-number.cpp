class Solution {
public:
    int tribonacci(int n) {
        int n1 =0;
        int n2 = 1;
        int n3 =1;
        
        if(n==0)
            return 0;
        if(n==1|| n==2)
            return 1;
        
        for(int i =2;i<n;i++)
        {
            int temp1 = n1+n2+n3;
            n1 =n2;
            n2 = n3;
            n3 = temp1;
        }
        
       return n3; 
    }
};