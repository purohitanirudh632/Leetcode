class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
     
         vector<int> temp(t.size(),0);
        stack<pair<int,int>> st;
        
        for(int i =t.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top().first <= t[i])
            {
                st.pop();
            }
            
            if(st.empty())
            {
               st.push({t[i],i});
               // cout<<t[i]<<" "<<i<<endl;
                   temp[i]=0;
              //  cout<<st.top().first <<" "<<st.top().second<<" ";
            }
            
            else if(st.top().first > t[i])
            {
               // cout<<st.top().second <<" "<<i<<" ";
               int j = st.top().second - i;
              //  cout<<j<<" "<<endl;
                temp[i]=j;
                 st.push({t[i],i});
            }
            
        }
        
        return temp; 
    }
};