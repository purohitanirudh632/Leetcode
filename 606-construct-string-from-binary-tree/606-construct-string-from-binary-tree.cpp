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
    void dfs(TreeNode* root,string& str)
    {
        if(root==NULL)
        {
            return;
        }
        if(str.length()==0)
            str = str + to_string(root->val);
        else
        {
            str.push_back('(');
            str = str + to_string(root->val);    
        }
        
        if(root->left == NULL && root->right ==NULL)
        {
            // str.push_back(')');
        }
        else if(root->left ==NULL)
        {
            str = str+"()";
        }
        
        dfs(root->left,str);
        // str.push_back(')');
        dfs(root->right,str);
        str.push_back(')');
        
    }
    string tree2str(TreeNode* root) {
     
        string str="";
         // str = str + to_string(root->val);
        
        dfs(root,str);
    str.pop_back();
        
        return str;
    }
};