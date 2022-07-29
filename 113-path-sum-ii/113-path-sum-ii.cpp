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
   
    void path(TreeNode* root, int target,int sum,vector<vector<int>>& vec, vector<int> temp)
    {
        
        if(root == NULL)
           return;
        
        sum+= root->val;
        temp.push_back(root->val);
        
        // cout<<sum<<endl;
        
        if(sum == target && root->left == NULL && root->right == NULL)
          {
            
            vec.push_back(temp);
             // temp.pop_back();
        }
        
         // if(root->left!=NULL)
         path(root->left,target,sum,vec,temp);
         // if(root->right!=NULL)
         path(root->right,target,sum,vec,temp);
       
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        
        vector<vector<int>> vec;
         vector<int> temp;
        int sum =0;
        
        path(root,target,sum,vec,temp);
        
      return vec;  
    }
};