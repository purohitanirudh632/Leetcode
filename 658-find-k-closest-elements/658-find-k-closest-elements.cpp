class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        map<int,vector<int> > mp;
        
        for(auto z:arr)
        {
            int index = abs(x-z);
            mp[index].push_back(z);
        }
        
        vector<int> vec;
        int flag =0;
        for(auto s:mp)
         {
            for(auto i:s.second)
            {
           if(vec.size()==k)
           { flag=1;
               break;
           }
                vec.push_back(i);

            }
            
          if(flag==1)
              break;
            
        }
        
        sort(vec.begin(),vec.end());
       return vec; 
    }
};