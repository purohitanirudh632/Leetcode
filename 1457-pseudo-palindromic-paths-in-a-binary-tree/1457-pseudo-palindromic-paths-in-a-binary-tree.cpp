class Solution {
public:
    int n=0;
    int arr[10]={};
    void check_arr()
    {
        int c = 0;
            for(int i = 1; i < 10; ++i){
                if(arr[i]%2 != 0)
                    ++c;  
                if(c > 2)
                    return;
            }            
            if(c<2)
                ++n;
     }

    void Tree_trav(TreeNode* root)
    {
         if(root == nullptr)
            return;
       
        
        arr[root->val]++;
      
        Tree_trav(root->left);
        Tree_trav(root->right);
        
        if(root->left == nullptr && root->right == nullptr)
            check_arr();
            
        arr[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {     
        Tree_trav(root);
        return n;
    }
};