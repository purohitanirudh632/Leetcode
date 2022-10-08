class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest1 =0;
        int closest2 =0;
        sort(nums.begin(),nums.end());
        
        int mini = INT_MAX;
        int ans =0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            int start = i+1;
            int end = nums.size()-1;
            
            while(start<end)
            {
                int sum = nums[i]+nums[start]+nums[end];
                
               if(abs(sum-target) < mini)
               {
                   mini =abs(sum-target);
                   ans=sum;
                   
               }
                
                if(sum == target)
                {
                   return sum;
                }
                else if(sum < target )
                {
                    start++;
                }
                else{
                    
                    end--;
                }
          
            }  
            
        }
        
        return ans;
    }
};