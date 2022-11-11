class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        if(n==0 || n==1)
            return n;
        
        int j=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] !=nums[i+1]){
               nums[j++] = nums[i];
            //cout<<nums[j-1] <<"at  "<<j-1;
            }
            
    
            
         
        }
         nums[j] = nums[n-1];
            // cout<<nums[j] <<"at  "<<j;    
        // while(j!=n-1)
        // {
        //     nums.erase(nums.begin()+j);
        //     j++;
        // }
        
        
       // cout<<nums.at(0)<<" "<<nums.at(1);
        
       // cout<<"     "<<  nums.size()<<endl;
        
        
        return j+1;
    }
};