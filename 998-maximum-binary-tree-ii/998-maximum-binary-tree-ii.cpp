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
    void dfs(TreeNode* root,TreeNode* node,TreeNode* prev)
    {
        if(root==NULL)
        {
            //TreeNode* node = new TreeNode(val);
            prev->right = node;
            return;
        }
        
        if(prev->val > node->val && root->val < node->val)
        { //TreeNode* node = new TreeNode(val);
            prev->right = node;
         node->left = root;
            return;
        }
        prev = root;
        dfs(root->right,node,prev);
        
        
    }
    
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        
        TreeNode* node = new TreeNode(val);
        TreeNode* prev = root;
        
        if(node->val > root->val)
        {
            node->left = root;
            return node;
        }
        
        if(root==NULL)
        {
            return node;
        }
        
         dfs(root,node,prev);
        
        return root;
    }
};