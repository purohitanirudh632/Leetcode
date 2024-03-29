//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        Node *temp=head,*p=NULL,*q=NULL,*head1 =NULL;
        
        while(temp!=NULL && k!=0)
        {
            if(p==NULL)
            {
                p =temp;
                temp=temp->next;
            }
            else
            {
                p->next =q;
                q=p;
                p =temp;
                temp=temp->next;
            }
            k--;
        }
        p->next =q;
        
        head1 = p;
        
        p=NULL;
        q=NULL;
       while(temp!=NULL)
       {
            if(p==NULL)
            {
                p =temp;
                temp=temp->next;
            }
            else
            {
                p->next =q;
                q=p;
                p =temp;
                temp=temp->next;
            }
        }
        p->next =q;
        
        head->next = p;
        
        
    return head1;    
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends