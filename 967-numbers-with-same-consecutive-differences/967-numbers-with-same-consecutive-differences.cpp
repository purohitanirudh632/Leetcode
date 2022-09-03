class Solution {
public:
    void recur(int n,int k,vector<int> &vec,int num,int val)
    {
        if(val<0 || val>9)
            return;
        num = num*10+val;
        
        if(n==0)
        {
            vec.push_back(num);
            return;
        }
        n--;
        
        recur(n,k,vec,num,val+k);
        
        if(k!=0)
        recur(n,k,vec,num,val-k);
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> vec;
        for(int i=1;i<=9;i++)
        {
            
            recur(n-1,k,vec,0,i);
        }
        
        return vec;
    }
};