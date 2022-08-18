class Solution {
public:
    
   int sorted(unordered_map<int,int> mp,int n)
    {
       int count =0;
       
      priority_queue<int> q;
        
        for(auto & y:mp)
        {
                q.push(y.second);
        }
        
       // sort(vec.begin(), vec.end(),greater<int>());
       
       int tempsum =0;
       
       while(!q.empty())
       {
           tempsum+=q.top();
           count++;
           q.pop();
           if(tempsum >= n/2)
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