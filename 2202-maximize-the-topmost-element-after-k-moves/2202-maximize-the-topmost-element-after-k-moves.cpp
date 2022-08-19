class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k==0)
            return nums[0];
        
        if(n==1)
        {   if(k%2!=0)
            return -1;
         else
             return nums[0];
        
        }
        int maxi =INT_MIN;
        if(k > n )
        {
         for(int i=0;i<nums.size();i++)
         {
            maxi = max(maxi,nums[i]);
         }
           return maxi; 
        }
        else{
            int j=0;
            for(j=0;j<k-1;j++)
            {
                maxi=max(maxi,nums[j]);
            }
            if(nums[j+1] > maxi)
            {
                return nums[j+1];
            }
            else return maxi;
        }
        
        return -1;
    }
        
};