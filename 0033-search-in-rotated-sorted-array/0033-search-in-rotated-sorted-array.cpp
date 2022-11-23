class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start =0;
        int end = nums.size()-1;
        
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            
            
            if(nums[mid]>nums[end])
            {
                if(target<=nums[end])
                {
                     start = mid+1;
                }
                else
                {
                    if(target>nums[mid])
                    {
                        start = mid+1;
                    }
                    else
                       end = mid-1;
                }
            }
            else
            {
                if(nums[mid]<target && nums[end]>=target)
                {
                    start = mid+1;
                }
                else 
                {
                    end = mid-1;
                }
            }
        }
        
        return -1;
    }
};