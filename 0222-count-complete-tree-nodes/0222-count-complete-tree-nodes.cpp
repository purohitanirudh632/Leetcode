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
    int dfs(TreeNode *root)
    {
        if(root==NULL)
            return 0;

        int x=0,y=0;
        x+=countNodes(root->left);
        y+=countNodes(root->right);
        // cout<<x<<y;
        return x+y+1;
    } 
    
    int countNodes(TreeNode* root) {
        
    return dfs(root);
        
    }
};