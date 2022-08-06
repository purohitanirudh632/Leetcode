class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int i=0;
        int product = 1;
        int maxpro = nums[0];
        int prepro  = 1;
        
        if(n == 1)
           return nums[0];
        
        for(int i= 0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                prepro =1;
                product =1;
                maxpro = max(nums[i] , maxpro);
                continue;
            }
            
            int temp = nums[i] *product;
            product = max(nums[i], max( product * nums[i] , prepro *nums[i]));
            prepro = min(nums[i], min( temp , prepro *nums[i]));
            
            cout<<product <<" "<< prepro << endl;
            
            maxpro = max(maxpro ,product);
            cout<<maxpro;
        }
        
        return maxpro;
    }
};