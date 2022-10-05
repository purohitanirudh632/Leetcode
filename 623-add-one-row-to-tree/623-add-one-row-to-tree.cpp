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
    TreeNode* dfs(TreeNode* root, int val, int depth)
    {
        if(depth-1==0)
        {
            if(root->left)
            {
                TreeNode* newroot = new TreeNode(val);
                newroot->left = root->left;
                root->left = newroot;
            }
            else
            {
                 TreeNode* newroot = new TreeNode(val);
                root->left = newroot;
            }
            
         if(root->right)
            {
                TreeNode* newroot = new TreeNode(val);
                newroot->right = root->right;
                root->right = newroot;
            }
            else
            {
                 TreeNode* newroot = new TreeNode(val);
                root->right = newroot;
            }
        }
        
        if(root->left)
        dfs(root->left,val,depth-1);
        if(root->right)
        dfs(root->right,val,depth-1);
        
       return root; 
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* newroot = new TreeNode(val);
            newroot->left = root;
            return newroot;
        }
        
        return dfs(root,val,depth-1);
    }
};