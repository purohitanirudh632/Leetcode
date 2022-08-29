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
     vector<TreeNode*> buildTree(int start,int end)
     {
         vector<TreeNode*> list;
         
         if(start>end)
         {
             list.push_back(NULL);
             return list;
         }
         
         for(int i=start;i<=end;i++)
         {
             vector<TreeNode*> left_subtree = buildTree(start,i-1);
             vector<TreeNode*> right_subtree = buildTree(i+1,end);
             
             for(auto x : left_subtree)
             {
                 for(auto y: right_subtree)
                 {
                     TreeNode* node = new TreeNode(i);
                     node->left = x;
                     node->right = y;
                     list.push_back(node);
                 }
             }
         }
         
         return list;
     }
    
    vector<TreeNode*> generateTrees(int n) {
           return buildTree(1,n);
    }
};