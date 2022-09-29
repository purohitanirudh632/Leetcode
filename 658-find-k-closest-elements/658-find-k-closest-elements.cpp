class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int min = INT_MAX;
        int index =-1;
        
        for(int i=0;i<arr.size();i++)
        {
            if((abs(x-arr[i])) < min)
            {
                index = i;
                min=abs(x-arr[i]);
            }
        }
        
        int start = index-1;
        int end = index+1;
        
        k= k-1;
        while(k)
        {
              if(start>=0 && end<arr.size())
              {
            if(x-arr[start] < arr[end]-x || x-arr[start] == arr[end]-x)
            {
                start--;
                 // cout<<start<<" ";
              
            }
            else 
            {
                end++;
                  // cout<<end<<endl; 
            }
                
              }  
            else{
                
                 if(end>=arr.size())
                {
                    start--;
                }
                else if(start<0)
                {
                    end++;
                }
            }
        
            k--;
        }

        // cout<<start;
        // cout<<end;
        
       vector<int> vec;
        
        for(int j=start+1; j<end;j++)
        {
            vec.push_back(arr[j]);
        }
        
        return vec;
        
    }

};