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
    bool recur(TreeNode*root,int target)
    {
        if(root==NULL)
            return false;
        
        if(target-root->val==0 && root->left==NULL && root->right==NULL)
            return true;
        
         return recur(root->left,target-root->val) || recur(root->right,target-root->val);   
        
    }
    
    bool hasPathSum(TreeNode* root, int target) {   
       return recur(root,target);
    }
};