class Solution {
public:
    void recur(vector<int> array,int target,vector<vector<int>>& ans,vector<int> &vec,int index)    
    {
        if(target == 0)
        {
            ans.push_back(vec);
            return;
        }
        
        if(target < 0)
            return;
        
        for(int i=index;i<array.size();i++)
        {
            if(i!=index && array[i] == array[i-1]) continue;
            
            if(array[index] > target) break;
            vec.push_back(array[i]);
            recur(array,target-array[i],ans,vec,i+1);
            vec.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>> ans;
        vector<int> vec;
        
        recur(candidates,target,ans,vec,0);
        
        return ans;
    }
};