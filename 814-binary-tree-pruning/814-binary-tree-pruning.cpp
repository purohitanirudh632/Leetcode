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
    TreeNode* prev =NULL;
    TreeNode* dfs(TreeNode*& root)
    {
        if(root==NULL)
            return root;

        

        // prev = root;
        
          dfs(root->left);
        dfs(root->right);
        
   if(root->val == 0 && root->left == NULL && root->right == NULL)
      {
          root = NULL;
          return root;
      } 
        
        return root;
    }
    
    
    TreeNode* pruneTree(TreeNode* root) {
       
       return dfs(root);
    }
};