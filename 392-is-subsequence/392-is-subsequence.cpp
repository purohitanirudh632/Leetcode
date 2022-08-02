class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        for(int i=0;i<t.length();i++)
        {
            if(s.length() == 0)
               break;
            
            if(s[0] == t[i])
            {
                s.erase(0,1);
            }
                
        }
        
      if(s.length()!=0)
          return false;
      
        else return true;
    }
};