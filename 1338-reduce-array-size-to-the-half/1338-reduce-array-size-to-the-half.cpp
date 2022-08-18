 bool cmp(pair<int,int>& a , pair<int,int>& b)
    {
       return(a.second < b.second); 
    }
class Solution {
public:
    
   int sorted(unordered_map<int,int> mp,int n)
    {
       int count =0;
       
        vector<int> vec;
        
        for(auto & y:mp)
        {
                vec.push_back(y.second);
        }
        
        sort(vec.begin(), vec.end(),greater<int>());
       
       int tempsum =0;
       
       for(auto x: vec)
       {
           cout<<x<<endl;
           
           tempsum+= x;
           count++;
           
           if(tempsum >=n/2)
               break;
       }
       
       return count;
    }
    
    
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        
        int n = arr.size();
        for(auto x:arr)
        {
            mp[x]++;
        }
        
       return sorted(mp,n);
    }
};