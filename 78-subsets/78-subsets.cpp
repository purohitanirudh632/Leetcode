class Solution {
public:
    
    void getsubsets(int n,vector<vector<int>> &sub , vector<int> nums,vector<int> vec)
    {
        sub.push_back(vec);
        
        for(int i=n;i<nums.size();i++)
        {
            vec.push_back(nums[i]);
            getsubsets(i+1 , sub,nums,vec);
            vec.pop_back();
            
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> sub;
        vector<int> vec;
        getsubsets(0,sub,nums,vec);
        
        return sub;
    }
};