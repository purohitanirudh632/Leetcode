/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL)
            return  root;
        root->next = NULL;
        queue<Node*> q;
        q.push(root);
        int c=1;
        int lavel = 1;
        Node *  prev =NULL;
        while(!q.empty())
        {
           Node* prev = NULL;
            int size = q.size();
            
            for(int i=0;i<size;i++)
            {
               Node* node1 = q.front();   
                 q.pop();
                if(i==0)
                {
                    prev = node1;
                    node1->next = NULL;
                }
                else
                {
                    prev->next = node1;
                    node1->next = NULL;
                    prev = node1;
                }
   
               
            if(node1->left!=NULL)
              q.push(node1->left);
            if(node1->right!=NULL)
                q.push(node1->right);
             
        }
        }
        
        return root;
    }
};