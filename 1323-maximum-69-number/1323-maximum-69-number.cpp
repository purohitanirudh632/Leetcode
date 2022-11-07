class Solution {
public:
    int maximum69Number (int num) {
        
        int len =0;
        int  index =-1;
        int ans =num;
        while(num!=0)
        {
            int temp = num%10;
            num = num/10;
            len++;
            if(temp == 6)
            {
                index =len-1;
            }
        }
        
        // cout<<len<<" "<<index;
       return ans+3*pow(10,index); 
    }
};