class Solution {
public:    
    int numOfSubarrays(vector<int>& arr) {
        
        long count =0;
        long odd=0;
        long even =0;
        long long sum;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum%2!=0)
            {
                count++;
                count+=even;
               odd++; 
            }
            else
            {
                count+=odd;
                even++;
            }
        }
        
      return count%1000000007;
    }
};