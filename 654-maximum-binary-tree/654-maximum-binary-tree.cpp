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
    
    // TreeNode *head = new TreeNode();
    
   TreeNode* dfs(vector<int> nums,int start,int end)
    {   
       
       if(start>=end)
           return NULL;
        
        int maxi = INT_MIN/2;
        int index = 0;
       
        for(int i=start;i<end;i++)
        {
            if(nums[i] > maxi) 
            {
                maxi = nums[i];
                index = i;
            }
        } 
       
       // cout<<maxi<<endl;
       // if(index ==0 && index == nums.size()-1)
       //     return root;
       
       TreeNode* root = new TreeNode(maxi);       
       
           // if(index!=start)
            root->left = dfs(nums,start,index);
          // if(index!=end-1)
            root->right = dfs(nums,index+1,end);
       
     return root;  
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        int max = INT_MIN;
        
        int  index =0;
      TreeNode *head = new TreeNode();
        head=NULL;
        
        return dfs(nums,0,nums.size());
        
        // return head;
    }
};