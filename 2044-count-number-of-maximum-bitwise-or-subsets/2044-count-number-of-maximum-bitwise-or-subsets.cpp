class Solution {
public:
    
    bool isans(vector<int> subs,int maxor)
    {
        int oro =0;
         for(auto x: subs)
        {
            oro= oro | x;
        }
        
        if(oro == maxor)
            return true;
        else
            return false;
    }
    void getsubs(vector<int> nums, int index, vector<int> subs, int maxor,int& count)
    {
        
        for(int i =index;i<nums.size();i++)
        {
            subs.push_back(nums[i]);
            if(isans(subs,maxor)==true)
                count++;
            getsubs(nums,i+1,subs,maxor,count);
            subs.pop_back();
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
            
        int maxor = 0;
        
        for(auto x: nums)
        {
            maxor = maxor | x;
        }
    int count=0;
     vector<int> subs;
        
        getsubs(nums,0,subs,maxor,count);
        
        return count;
    }
};