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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *node;
        while(head!=NULL && head->val==val)
        {
            node=head->next;
            delete head;
            head=node;
        }
        if(head==NULL || head->next==NULL) return head;
        
        ListNode *prev,*curr,*next;
        prev=head; curr=head->next; next=curr->next;
        while(curr)
        {
            if(curr->val==val)
            {
                delete curr;
                curr=next;
                if(next) next=next->next;
                prev->next=curr;
            }
            else
            {
                prev=curr;
                curr=next;
                if(next) next=curr->next;
            }
        }
        return head;
    }
};