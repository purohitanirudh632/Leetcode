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
    int dfs(TreeNode* root, int maxi,int &count)
    {  
        if(root==NULL)
          return count;
        
        if(root->val >= maxi)
        {
            maxi = root->val;
            count++;
        }
        dfs(root->left,maxi,count);
        dfs(root->right,maxi,count);
        
        return count;
    }
    
    int goodNodes(TreeNode* root) {
      
        int count=0;
        int maxi = INT_MIN;
        return dfs(root,maxi,count);  
    }
};