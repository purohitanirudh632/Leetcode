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
    string s ="";
    void dfs(TreeNode* root,string str)
    {
        if(root==NULL)
        {
         //    if(s.size()==0)
         //    {
         //        s=str;
         //        return;
         //    }
         //    else{
         // s= lexicographical_compare(s.begin(),s.end(),str.begin(),str.end())?s:str;
         //         cout<<s<<" "<<str<<endl;
         //        if(s.size()==1 && str.size()>1)
         //            s=str;
         //    }
            
            return;
        }
        
        char c = (char)(root->val+97);
        str=c+str;
        
        if(root->left==NULL && root->right==NULL)
        {
          if(s.size()==0)
            {
                s=str;
                return;
            }
            
       s= lexicographical_compare(s.begin(),s.end(),str.begin(),str.end())?s:str;
            // cout<<s<<" "<<str<<endl;
        }
        
        dfs(root->left,str);
        dfs(root->right,str);
    }
    
    
    
    
    string smallestFromLeaf(TreeNode* root) {
        string str;
        dfs(root,str);
        
        return s;
    }
};