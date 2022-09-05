/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
     vector<vector<int>> ans;
       
       if(root== NULL)
           return ans;
        
        queue<Node*> q;
        q.push(root);
        ans.push_back({root->val});
        
        while(!q.empty())
        {     
           vector<int> vec;  
            int qSize=q.size();
            
   for(int i=0;i<qSize;i++)
   {
       
     Node* root = q.front();
         q.pop(); 
       
      for(auto x:root->children)
      {    
          if(x)
          vec.push_back(x->val);
      
          if(x)
         q.push(x);
      }
      
       
  
   }       
            
        if(vec.size()!=0)
            ans.push_back(vec);
       
        }
        return ans;
        
    }
};