class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==1 || s.length()== 0)
            return s.length();
        
        int maxi = INT_MIN;
        unordered_map<char,int> mp;
        int counter=0;
        int index =0;
        
        for(int i=0;i<s.length();i++)
        {
          
            if(mp.count(s[i])== 1)
            {
                maxi = max(maxi,counter);
                counter=0;
                mp.clear();
                i = index;
            }
            else
            {
              if(counter == 0)
                  index =i;
                
              mp[s[i]]=1;
            counter++;
            }
        }
        
        maxi = max(counter,maxi);
        
        return maxi;
    }
};