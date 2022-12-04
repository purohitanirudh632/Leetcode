class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;
        
       vector<int> v1(26,0),v2(26,0);
        
        for(int i=0;i<word1.length();i++)
        {
            int ch1 = (int)word1[i];
            int ch2 = (int)word2[i];
          v1[ch1-97]++;
          v2[ch2-97]++;
            
        }   
        
       for(int i=0;i<26;i++)
       {
           if(v1[i]==0 && v2[i]!=0)
               return false;
           
       }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            if(v1!=v2)
                return false;
      
        
            return true; 
    } 
};