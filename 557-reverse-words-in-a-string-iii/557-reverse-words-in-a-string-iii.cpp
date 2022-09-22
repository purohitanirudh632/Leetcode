class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans;
       while(i<s.length())
        {
            string temp="";
           
            while(s[i]!=' ' && i < s.length())
            {
                temp =  s[i] + temp;
                i++;
            }
            
           
           ans =  ans + temp;
            
            if(s[i]==' ' && i< s.length()) 
            {
                ans = ans +" ";
                i++;
            }
            
        }
        
        return ans;
    }
};