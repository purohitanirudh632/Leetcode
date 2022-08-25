class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int s1 = num1.length()-1;
        int s2 = num2.length()-1;
        
        string str;
        int carr = 0;
        while(s1>=0 || s2>=0)
        {
            int n1 =0,n2=0;
           if(s1>=0)
           {
               n1 = num1[s1]-'0';
             s1--;  
           }
            
            if(s2>=0)
            {
                 n2 = num2[s2]-'0';
                s2--;
            }
            
             str = to_string((n1+n2+carr)%10) + str;
            carr = (n1+n2+carr)/10;
        }
         if(carr!=0)
             str = "1" + str;
        return str;
    }
};