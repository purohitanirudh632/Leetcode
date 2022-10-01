class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      if(nums.size()!=1)
      {    
       int high = nums.size()-1;
        int low = high-1;

        if(nums[low]< nums[high])
            swap(nums[low],nums[high]);
        else{
        for(int j=nums.size()-1;j>=0;j--)
        {
             
            if(high == 0)
            {
                break;
            }
              if(nums[low]<nums[high])
              {
                  // if(low == 0)
                  // {
                  //     break;
                  // }
                  int itr = nums.size()-1;
                  while(itr>=high && nums[itr]<=nums[low])
                  {
                      itr--;
                  }
                  swap(nums[low],nums[itr]);
                  break;
              }
            else
            {
                low--;
                high--;
            }
        }
        
        low = nums.size()-1;
        
        while(high<low)
        {
            swap(nums[high],nums[low]);
            high++;
            low--;
            
        }
        
        }  
          
      }    
    }
};