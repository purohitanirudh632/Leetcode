class Solution {
public:
    int minCost(string colors, vector<int>& need) {
       
        if(colors.length()==1)
            return 0;
        
        int n = colors.length();
        int sum =0;
        int low =0;
        int high = 1;
        
        while(high<n)
        {
            
            if(colors[low] == colors[high])
            {
                if(need[low] < need[high])
                {
                    sum+= need[low];
                    low = high;
                    high++;
                }
                else
                {
                    sum+=need[high];
                    high++;
                }
            }
            else
            {
                low = high;
                high++;
            }
            
        }
        
        return sum;
    }
};