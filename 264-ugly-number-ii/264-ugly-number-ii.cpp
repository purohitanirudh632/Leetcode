class Solution {
public:
    int nthUglyNumber(int n) {
      
        if(n==1)
            return 1;
        
       priority_queue <long , vector<long>, greater<long> > pq;
        
        pq.push(1);
        n--;
        
        while(n>0)
        {
            long j = pq.top();
            
            pq.push(j*2);
            pq.push(j*3);
            pq.push(j*5);
           
           while(pq.top()==j)pq.pop();
            n--;   
        }
        
        
       return pq.top(); 
    }
};