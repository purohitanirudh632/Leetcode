class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,pair<int,int>> map;
        
        vector<vector<int>> ans;

        for(int i=0;i<matches.size();i++)
        {
            int win = matches[i][0];
            map[win].first++;
            
            int loose = matches[i][1];
            map[loose].second++;
        }
        
        
        vector<int> winners;
        vector<int> loosers;
       for(auto x:map)
       {
           if(x.second.second==0)
           {
               winners.push_back(x.first);
           }
           else if(x.second.second==1)
           {
               loosers.push_back(x.first);
           }
       }
        
        ans.push_back(winners);
         ans.push_back(loosers);
        
        return ans;
    }
};