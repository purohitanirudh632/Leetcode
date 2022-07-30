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
     ListNode *t1 =NULL,*prev=NULL,*t2=NULL;
    
   void reorder(ListNode * list)
    {
        t1 = list;
        
        if(list == NULL)
            return;
        if(list->next == NULL)
            return;
        
        if(list->next->next == NULL)
            return;
        
        t1 = t1->next;
        prev =list;
        while(list->next!=NULL)
        {
            t2 = list;
            list=list->next;
        }
        t2->next =NULL;
        prev->next =list;
        list->next =t1;
        
        reorder(t1);
       
    }
    void reorderList(ListNode* head) {
        ListNode * p =head;
        reorder(p);
        
        
    }
};