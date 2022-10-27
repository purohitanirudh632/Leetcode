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
    int left=0,right=0;
    
    int dfs(TreeNode * root,int x)
    {
        if(root==NULL)
            return 0;
     
        
       int lefti=0,righti=0;
        if(root->left)
      lefti+= dfs(root->left,x);
        if(root->right)
      righti+=dfs(root->right,x);
        
        if(root->val == x)
        {
            left =lefti;
            right = righti;
        }
        
       return 1+lefti+righti; 
        
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
      
        if(root==NULL)
            return 0;
       
        dfs(root,x);
        
        int z = n-(left+right+1);
       
            if(z >left+right+1 || left > z+right+1 || right> left+z+1)
            {
               
              return true;
            }        

      return false;  
    }
};