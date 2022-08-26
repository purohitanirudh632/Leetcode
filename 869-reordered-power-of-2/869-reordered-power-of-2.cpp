class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        if(n==1)
            return true;
        
       map<int,int> mp;
      map<int,int> mp1;
        
       while(n>0)
       {
           mp[n%10]++;
           n = n/10;
           
       }
        
         // for(auto  x:mp)
         //   {
         //       cout<<x.first<<" "<<x.second<<endl;
         //   }
        
        
        for(int i=0; i<30;i++)
        {
            int power = pow(2,i);
            
            // cout<<power<<endl;
       
            while(power>0)
            {
                int j = power %10;
                mp1[j]++;
                
                power=power/10;
            }
            
            if(mp == mp1)
            {
                return true;  
            }
            else
            {
                mp1.clear();
            }
        }
        
        return false;
    }
};