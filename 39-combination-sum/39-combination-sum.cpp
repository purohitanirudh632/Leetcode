class Solution {
public:
    
    void recur(vector<int>& candidates, int target, vector<vector<int>> &ans,vector<int> vec,int index)
    {
     
        
        if(index >=candidates.size())
            return;

        if(candidates[index] > target)
            return;
        
         // cout<<target<<" "<< candidates[index]<<endl;
        
        target = target - candidates[index];     
 // cout<<candidates[index]<<endl;
        vec.push_back(candidates[index]);
        
      if(target==0)
        {
            ans.push_back(vec);
            return;
        }
        
       recur(candidates,target,ans,vec,index);
        for(int i=index+1;i<candidates.size();i++)
            recur(candidates,target,ans,vec,i);    
        
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>> ans;
        vector<int> vec;
        
       for(int i=0;i<candidates.size();i++)   
          recur(candidates,target,ans,vec,i); 
        
         return ans;
    }
    
   
};