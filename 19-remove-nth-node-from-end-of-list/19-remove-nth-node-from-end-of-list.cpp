/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* p =head;
        int i=0;
        
        while(p)
        {  p=p->next;
            i++;
        }
        
        if(head->next == NULL && n == 1)
            return NULL;
        
       p=head; 
        
        if(n == i)
        {
             head =head->next;
            
           return head; 
        }
            
       
        
        
        int index = i-n+1;
        ListNode * nxt = head->next;
        ListNode * prev = NULL;
        while(--index)
        {
            if(nxt->next!=NULL)
                nxt = nxt->next;
            else
                nxt =NULL;
            prev = p;
            
            p=p->next;
            
            
        }
        
        prev->next = nxt;
        
     return head;   
    }
};