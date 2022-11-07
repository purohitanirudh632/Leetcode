class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
    queue<string> queue;
        unordered_set<string> seen;
        queue.push(start);
        seen.insert(start);
        

        
        int steps=0;
        while(!queue.empty())
        {
            int size = queue.size();
            
            for(int i=0;i<size;i++)
            {
                string node = queue.front();
                queue.pop();
                
                 if(node==end)
                  return steps;
                
                for(auto c:"ACGT")
                {
                    for(int j =0;j<node.size();j++)
                    {
                      
                        string neighbour = node;
                        neighbour[j] =c;

       if(!seen.count(neighbour) && find(bank.begin(),bank.end(),neighbour)!= bank.end())
                        {
                            queue.push(neighbour);
                            seen.insert(neighbour);
                        }
                    }
                }
            }
            
            steps++;
        }
        
       return -1; 
    }
};