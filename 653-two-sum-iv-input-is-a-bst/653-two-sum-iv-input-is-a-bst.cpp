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
    void dfs(TreeNode* root, int k,vector<int> & vec)
    {
        if(root==NULL)
            return;
        
        dfs(root->left,k,vec);
       vec.push_back(root->val);
        dfs(root->right,k,vec);
    }
    
    bool findTarget(TreeNode* root, int target) {
        vector<int> vec;
        dfs(root,target,vec);
        
        int low= 0;
        int high = vec.size()-1;
        
        while(low<high)
        {
            if(vec[low]+vec[high] == target)
            {
                return true;
            }
            else if(vec[low]+vec[high] > target)
                high--;
            else
                low++;
        }
        
     return false;
    }
};