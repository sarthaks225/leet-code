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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
  if(left==right) return head;
        ListNode *node,*prev,*curr,*next,*node1;
        int j;
        node=head;
        if(left!=1) for(j=left; --j; node=node->next) if(j==1) node1=node; 
    
        for(j=right-left,prev=node,curr=node->next, next=NULL; j--; )
        {
             next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
        }
        
        node->next=curr;
        if(left!=1) node1->next=prev;
        else return prev;
        return head;
    }
};