class Solution {
public:
    int jump(vector<int>& nums) {
        
        int i=0;
        int j=0;
        int  count =0;
        
        while(i<nums.size()-1)
        {
           int maxi=0;
            
            for(int k=j;k<=i;k++)
            {
                maxi = max(maxi,k+nums[k]);
            }
            
            j = i+1;
            i = maxi;
          count++;  
            
        }
        return count;
    }
};