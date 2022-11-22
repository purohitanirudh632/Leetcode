class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        
        if(k%n!=0)
        {
            
          k=k%n;
            
        int i =n-1;
       int j = i-k;
        vector<int> arr;
        int index=0;
        while(j>=0)
        {
            if(k>0)
            {
                arr.push_back(nums[i]);
                k--;
            }
            
            nums[i] = nums[j];
            i--;
            j--;
        }
        
         int tempindex = i;  
        while(k!=0)
        { 
             arr.push_back(nums[tempindex--]);
            k--;
        }
            
        while(i>=0)
        {
            nums[i] = arr[index];
            index++;
            i--;
        }
        
            
    }
    }
};