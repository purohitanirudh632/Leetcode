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
     map<int,map<int,multiset<int>>> mp;
    
    void recur(TreeNode* root, int height)
    {
        queue<pair<TreeNode*, pair<int,int>>> q;
        q.push({root,{0,0}});
        
        while(!q.empty())
        {
            
            TreeNode* root = q.front().first;
            int index = q.front().second.first;
            int height = index;
            int lavel = q.front().second.second;
            
            if(root)
                mp[index][lavel].insert(root->val);
            
            q.pop();
            if(root->left)
                q.push({root->left, {height-1, lavel+1}});
            if(root->right)
                q.push({root->right, {height+1, lavel+1}});
        }
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        vector<vector<int>> ans;
        recur(root,0);
        
        for(auto x:mp)
        {
           vector<int> col;
            for(auto y:x.second){
                for(auto ele:y.second) col.push_back(ele);
            }
            ans.push_back(col);
        }
        
        return ans;
    }
};