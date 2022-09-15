class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        vector<int> vec;
        if(changed.size()%2!=0)
            return vec;
        
        sort(changed.begin(),changed.end());
        
        map<int,int> mp;
        
        int countzero =0;
        
        int i = 0;
        
        while(i<changed.size())
        {
            if(changed[i]==0)
            {
               // auto it = changed.begin();
               //  changed.erase(it);
                countzero++;
            }
            else{
            mp[changed[i]]++;
            }
            i++;
        }
        
        if(countzero%2!=0)
        {
            return vec;
        }
        else
        {
           
            int i = countzero/2;
            while(i)
            {
                vec.push_back(0);
                i--;
            }
        }
        
        for(int i=countzero;i<changed.size();i++)
        {
            if(mp.count(changed[i])==0)
            {
                continue;
            }
            int second = changed[i]*2;
            
          if( mp.count(second)==0 || mp[changed[i]] > mp[second])
          {
              vec.clear();
              return vec;
          }
            else
            {
                mp[second] = mp[second]- mp[changed[i]];
                while(mp[changed[i]])
                {
                    vec.push_back(changed[i]);
                    mp[changed[i]]--;
                }
                mp.erase(changed[i]);
                
                if(mp[second]==0)
                {
                    mp.erase(second);
                }
            }

            }
      return vec;  
    }
};