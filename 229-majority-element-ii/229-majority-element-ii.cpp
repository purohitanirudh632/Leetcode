class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        set<int> st;
        map <int,int> mp;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            
            if(mp[nums[i]] > n/3)
                st.insert(nums[i]);
        }
        
      for(auto x:st)
      {
          vec.push_back(x);
      }
        return vec;
    }
};