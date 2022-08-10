class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int n = nums.size();
        int l = 0;
        int h = n-1;
        
        if(n==1)
            return 0;
        
        if(nums[0] > nums[1])
            return 0;
        
        if(nums[h] > nums[h-1])
            return h;
        int mid =0;
        
        while(l<=h)
        {   
             mid = (l+h)/2;
            
            if(nums[mid] > nums[mid-1] && nums[mid] > nums [mid+1] )
             return mid;

            if(nums[mid-1] > nums[mid])
            {
                h= mid;
            }
            else 
            {
                l= mid;
            }
             
        }
        
       return -1;     
    }
};