/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* c1 = NULL, *c2 =NULL;
  TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q)
    {
      
      if(root==NULL)
          return NULL;
      
      if(root == p || root == q)
          return  root;
      
     TreeNode* s1 = dfs(root->left,p,q);
     TreeNode* s2 =  dfs(root->right,p,q);
      
     if(s1 == NULL)
         return s2;
       if(s2 == NULL)
          return s1;
      
          return root;
  
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
       return dfs(root,p,q);
    }
};