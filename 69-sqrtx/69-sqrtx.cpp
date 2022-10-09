class Solution {
public:
    int mySqrt(int x) {
        
        if(x==1)
            return 1;
        int nums = x/2;
        
        long long low = 0;
        long long high = nums;
        
        while(low<=high)
        {
            long long mid = (low+high)/2;
            
            if(mid*mid == x)
                return mid;
            else if(mid*mid < x)
            {
                low = mid+1;
            }
            else
                high = mid-1;
            }
        
        return high;
    }
};