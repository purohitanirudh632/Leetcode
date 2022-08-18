class Solution {
public:
    
    void getsubsets(int n,set<vector<int>> &sub , vector<int> nums,vector<int> vec)
    {
        if(n>= nums.size())
        {
        sub.insert(vec);
        return;
        }

            getsubsets(n+1 , sub,nums,vec);
             vec.push_back(nums[n]);
            getsubsets(n+1 , sub,nums,vec);
            
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        set<vector<int>> sub;
        vector<int> vec;
        // set<int> tempset;
        getsubsets(0,sub,nums,vec);
        
        vector<vector<int>> subset;
        
        for(auto x: sub)
        {
            vector<int> temp =x;
            subset.push_back(temp);
        }
        
        return subset;
    }
};