class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> vec;
        
        int sum =0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                sum+= nums[i];
            }
        }
        
        
        for(int j=0;j<queries.size();j++)
        {
              int test = queries[j][0];
                
              int change =   nums[queries[j][1]] + test;
    
            if(nums[queries[j][1]]%2 == 0)
            {

                
                if(change%2 == 0)
                {
                    sum = sum - nums[queries[j][1]] + change;
                }
                else
                {
                    sum = sum - nums[queries[j][1]];
                }
                
                 vec.push_back(sum);
            }
            else
            {

                if(change%2 == 0)
                {
                    sum+= change;
                }
                 vec.push_back(sum);
            }
            
            
            nums[queries[j][1]] =  nums[queries[j][1]] + test; 
        }
        
        return vec;
    }
};