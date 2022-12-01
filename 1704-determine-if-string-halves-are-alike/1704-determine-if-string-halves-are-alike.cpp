class Solution {
public:
    bool halvesAreAlike(string s) {
      
        int n = s.length();
        int left=0,right =0;
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                {
                    left++;
                }
                    
            }
            else
            {
                       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                       {
                           right++;
                       }
                           
            }
        }
        
        
      if(left==right)
          return true;
        
       else
           return false;
    }
};