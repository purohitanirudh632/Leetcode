class Solution {
public:
     bool findo(string s ,string t) {
                  
        // if(s.length() > t.length())
        //      return false;
         
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
    
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map<string , int>  mp;
        for(auto x:words)
        {
            if(x.length() <= s.length())
             mp[x]++;            
        }
        cout<<mp.size();
        
        int ans=0;
        for(auto y:mp)
        {
            
            if(findo(y.first,s) == true)
            {
                 ans+=y.second;
                
            }
        }
        
        
     return ans;
        
    }
};