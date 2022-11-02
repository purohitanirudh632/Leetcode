class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        map<int,int> mp;
        
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
            
        }
        
        int mooves=0;
        for(auto x:mp)
        {
            
           cout<<endl<<x.second<<" ";
        
            if(x.second ==1)
                return -1;
            
            if(x.second == 2)
            {
                mooves++;
                continue;
            }
            
            if(x.second %3 == 0)
            {
                mooves+= x.second/3;
                // cout<<"*"<<" "<<mooves;
            }
            else 
            {

               int n = x.second;
                mooves+=(n-4)/3 + 2;
                // cout<<"#"<<" "<<mooves;

            }
            
            
        }
        
        return mooves;
    }
};