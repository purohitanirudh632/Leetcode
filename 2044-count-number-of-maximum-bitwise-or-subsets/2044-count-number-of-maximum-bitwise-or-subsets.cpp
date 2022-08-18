class Solution {
public:
    void getsubs(vector<int> nums, int index, int oor , int maxor,int& count)
    {
        if(index >= nums.size())
        {
        
        if(oor == maxor)
            count++;
        return;
        }
        
        getsubs(nums,index+1,oor,maxor,count);
        getsubs(nums,index+1,oor|nums[index],maxor,count);
        
    }
    int countMaxOrSubsets(vector<int>& nums) {
            
        int maxor = 0;
        
        for(auto x: nums)
        {
            maxor = maxor | x;
        }
        
           int count=0;
     // vector<int> subs;
        
        getsubs(nums,0,0,maxor,count);
        
        return count;
    }
};