class Solution {
public:
    string frequencySort(string s) {
        
        string ans;
        sort(s.begin(),s.end());
        
        vector<pair<int,char>> vec;
        
        char prev = s[0];
        int tempsum =0;
        int index =0;
        for(int i=0;i<s.length();i++)
        {
            if(prev == s[i])
            {
                tempsum++;
            }
            else
            {
                vec.push_back({tempsum,prev});
                tempsum =0;
                prev = s[i];
                i--;
            }
        }
        vec.push_back({tempsum,prev});
        
       sort(vec.begin(), vec.end());
        
        for(int i=vec.size()-1;i>=0;i--)
        {
            int itr = vec[i].first;
            char st = vec[i].second;
            //cout<<st<<" ";
            while(itr--)
            {
                ans+=st;
            }
        }
        
        return ans;
    }
};