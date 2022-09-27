class Solution {
public:
    void permute(vector<int> nums,vector<vector<int>>& ans,int index)
    {
        if(index == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[index])
                continue;
            
            
            swap(nums[i],nums[index]);
             permute(nums,ans,index+1);
             // swap(nums[i],nums[index]);
            
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        permute(nums,ans,0);
        
        return ans;
    }
};