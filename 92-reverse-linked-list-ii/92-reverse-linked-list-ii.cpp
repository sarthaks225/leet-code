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
        ListNode *node,*prev,*curr,*next,*node1,*node2;
        int i;
        
        for(node=head, i=left-1; i--; node=node->next) 
        {
            node1=node;
        }
        
        
        int j;
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