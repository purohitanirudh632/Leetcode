class MedianFinder {
public:
    MedianFinder() {
        
    }
     priority_queue <int, vector<int>, greater<int> > pqmin;
     priority_queue <int> pqmax;
    
    void addNum(int num) {
    
        if(pqmin.size()==0 || pqmax.size()==0)
        {
            
            if(pqmin.size()==0 && pqmax.size()!=0)
            {
                int n = pqmax.top();
                if(num<n)
                {
                   pqmin.push(n);
                    pqmax.pop();
                    pqmax.push(num);
                }
                else
                    pqmin.push(num);
                
            }
            else
              pqmax.push(num);
              
        }
        else if(pqmax.top()<num)
        {
           pqmin.push(num);

               if(pqmin.size()-pqmax.size() > 1)
               {
                   int n = pqmin.top();
                   pqmin.pop();
                   
                   pqmax.push(n);
               }
        }
        else if(pqmax.top()>=num)
        {
            pqmax.push(num);
            
              if(pqmax.size()-pqmin.size() > 1)
               {
                   int n = pqmax.top();
                   pqmax.pop();
                   
                   pqmin.push(n);
               }
        }
        
    }
    
    double findMedian() {
        if(pqmax.size()==pqmin.size())
        {
            double n = pqmax.top()+pqmin.top();
            
            return n/2;
        }
         double a =pqmax.size()<pqmin.size()?pqmin.top():pqmax.top();
        return a;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */