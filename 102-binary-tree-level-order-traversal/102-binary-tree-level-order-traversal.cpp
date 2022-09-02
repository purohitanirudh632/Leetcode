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
    vector<vector<int>> levelOrder(TreeNode* root) {
         queue<TreeNode* > que;
        que.push(root);
        
        vector<vector<int>> ans;
        
        if(root==NULL)
            return ans;
        
        while(!que.empty())
        {  
           vector<int> temp;
            int size = que.size();
            
            for(int i=0;i<size;i++)
            {
                
           TreeNode *s = que.front();   
                 temp.push_back(s->val);
                
             que.pop();   
           
           if(s->left != NULL)     
            que.push(s->left);
           if(s->right!=NULL)     
            que.push(s->right);
                
            }
            
          ans.push_back(temp);  
    }
        
     return ans;   
    }
};