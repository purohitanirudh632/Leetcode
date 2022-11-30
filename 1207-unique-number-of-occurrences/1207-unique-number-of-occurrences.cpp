class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        // cout<<mp.size();
        
        set<int> st;
        
        for(auto x:mp)
        {
            st.insert(x.second);
        }
        if(mp.size()==st.size())
            return true;
        else
            return false;
    }
};