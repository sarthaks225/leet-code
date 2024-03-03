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
        
        ListNode *backward,*forward;
        forward=head;
        backward=NULL;
        for(int i=1; i<n; ++i )
        {
            forward=forward->next;
        }
        
        if(forward->next!=NULL)
        {
            forward=forward->next;
            backward=head;
            while(forward->next!=NULL)
            {
                forward=forward->next;
                backward=backward->next;
            }
        }
        
        if( backward )  backward->next=backward->next->next;
        else 
        {
            head=head->next;
        }
        return head;
    }
};