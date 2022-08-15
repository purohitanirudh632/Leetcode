class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        vector<vector<int>> merges;
        
        sort(intervals.begin(),intervals.end());
        
        vector<int> v={intervals[0][0], intervals[0][1]};
        merges.push_back(v);
        
        
        for(int i=1;i<n;i++)
        {
               
            
            if(merges.back().back() >= intervals[i][0])
            {
                if(merges.back().back() >= intervals[i][1])
                {
                    continue;
                }
                
                merges.back().back() = intervals[i][1];
            }
            else
            {
                vector<int> temp = {intervals[i][0], intervals[i][1]};
                merges.push_back(temp);
            }
            
        }      
     return merges;  
    }
};