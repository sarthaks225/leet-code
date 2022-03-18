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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return head;
        ListNode *fast,*slow;
        fast=slow=head;
        
        while(1)
        {
            if(fast==NULL || fast->next==NULL || fast->next->next==NULL) break;
            fast=fast->next->next;
            slow=slow->next;
             
        }
        if(fast->next!=NULL) return slow->next;
        return slow;
        
        
    }
};