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
    void dfs(TreeNode * root,vector<int> &vec,int lavel,int& maxi)
    {
        if(root==NULL)
            return;
        // cout<<"lavel is : "<<lavel<<"maxi is : "<<maxi<<endl;
        if(lavel>maxi)
        {
            vec.push_back(root->val);
            maxi = lavel;
            
        }
        lavel++;
        dfs(root->right,vec,lavel,maxi);
        dfs(root->left,vec,lavel,maxi);
        
    }
    
    
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        int lavel=0;
        int maxi = -1;
        dfs(root,vec,lavel,maxi);
        
        return vec;
    }
};