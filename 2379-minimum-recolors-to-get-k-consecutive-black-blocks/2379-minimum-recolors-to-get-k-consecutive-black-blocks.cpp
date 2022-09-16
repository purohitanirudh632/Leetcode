class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
        int count =0;
        int mini = INT_MAX;
        
        for(int i=0;i<blocks.length();i++)
        {
            while(i<k && i<blocks.length())
            {
                if(blocks[i]=='W')
                    count++;
                i++;
            } 
            
           mini = min(mini,count);
            
            if(i>=k && i<blocks.length())
            {
                if(blocks[i-k]=='W')
                    count--;
                if(blocks[i] == 'W')
                    count++;
            }
            
            mini = min(count,mini);
        }
        
        return mini;
    }
};