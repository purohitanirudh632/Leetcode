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
    TreeNode* dfs(TreeNode* &root, int low, int high)
    {
        if(root==NULL)
            return NULL;
        
        root->left=dfs(root->left,low,high);
        root->right=dfs(root->right,low,high);
        
        // cout<<root->val;
        if(root->val < low)
        {
            // cout<<root->val;
            if(root->right!=NULL)
                return root->right;
            else
             return NULL;
        }
        
        if(root->val > high)
        {
            // cout<<root->val;
            
            if(root->left!=NULL)
                return root->left;
            else
                return NULL;
        }
        
        return root;
        
    }
    
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        return dfs(root,low,high);
    }
};