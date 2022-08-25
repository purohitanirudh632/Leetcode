class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> vec;
        int carr=0;
        int flag=0;
        int n = digits.size();
        
           if(digits[digits.size()-1] == 9)
            {
                vec.push_back(0);
                carr =1;
                n = n-1;
               flag=1;
            }
        for(int i=n-1;i>=0;i--)
        {
            int add=0;
            
            if(flag==0)
            {
               add = digits[i]+carr+1;
             flag=1;   
            }
            else
               add = digits[i]+carr;  
            
            if(add < 10)
            {
              vec.push_back(add); 
                carr=0;
            }
            else
            {
                vec.push_back(0);
                 carr = 1;
            }
        }
        
        if(carr == 1)
            vec.push_back(1);
        
        reverse(vec.begin(),vec.end());
        
        return vec;
    }
};