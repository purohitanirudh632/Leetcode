class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
            
        }
        
        
        int len=0;
        int flag=0;
        
       for(auto x:mp)
       {
           string st = x.first;
           // cout<<st<<" ";
           
           string ts;
           ts = x.first[1];
           ts = ts+x.first[0];
           // cout<<ts<<endl;
           
           
           if(mp.count(ts)==1 && mp[ts]!=-1 && mp[st]!=-1 && st[0]!=st[1] )
           {
              int templen = min(x.second,mp[ts]);
               // cout<<templen<<" ";
               len+=4*templen;
               mp[ts] =-1;
               mp[st] = -1;
                 
               // cout<<len<<" "<<endl;
           }

               if(st[0]==st[1])
               {
                  if(mp[st]%2==0)
                  {
                      len+= 2*mp[st];
                  }
                   else{
                       
                       len+= 2*(mp[st]-1);
                       flag=1;        
                   }
                       
                      
               }
       }
        
        if(flag==1)
            len+=2;
        
        return len;
    }
};