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
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
       
        ListNode* head2 = head->next;
        
        
        while(dummy->next!=NULL && dummy->next->next!=NULL)
        {
            ListNode* first = dummy->next,*second = dummy->next->next;
            first->next = second->next;
            second->next = first;
            dummy->next = second;
            dummy = dummy->next->next;
            
        }
        
       return head2; 
    }
};