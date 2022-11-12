class Solution {
public:
    int numSquares(int n) {
        
        vector<int> squares(n+1,INT_MAX);
        
        squares[0]=0;//base condition
        
        int count =1;
        while(count <=sqrt(n))
        {
            int square = count*count;
            for(int  i=square;i<=n;i++)
            {
                squares[i] = min(squares[i-square]+1,squares[i]);
                // cout<<squares[i]<<" ";
            }
            count++;
        }
        
        return squares[n];
    }
};