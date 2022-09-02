/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        
        queue<TreeNode* > que;
        
        que.push(root);
        
        while(!que.empty())
        {  
            long long sum = 0;
            int size = que.size();
            
            for(int i=0;i<size;i++)
            {
                
           TreeNode *s = que.front();   
                sum += s->val;
                
             que.pop();   
           
           if(s->left != NULL)     
            que.push(s->left);
           if(s->right!=NULL)     
            que.push(s->right);
                
            }
            
            // cout<<sum<<" "<<size<<endl;
            
            double temp = sum/(double)size;
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};