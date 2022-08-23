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
    bool isPalindrome(ListNode* head) {
        
        stack<ListNode*> st;
        ListNode *p =head;
        while(p!=NULL)
        {
            st.push(p);
            p=p->next;
        }
        
        while(head!=NULL && !st.empty())
        {
            if(head->val == st.top()->val)
            {
                head=head->next;
                st.pop();
            }
            else{
                
                return false; 
            }
        }
        
        return true;
    }
};