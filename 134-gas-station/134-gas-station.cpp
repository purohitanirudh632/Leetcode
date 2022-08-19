class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();
        int extra =0;
        int fuel =0;
        int begin=0;
        
        for(int i=0;i<n;i++)
        {
            fuel+= gas[i]-cost[i];
            
            if(fuel >=0)continue;
        
            extra +=fuel;
            fuel=0;
            begin = i+1;
        }
        
        return(fuel+extra >=0?begin:-1);
    }
};