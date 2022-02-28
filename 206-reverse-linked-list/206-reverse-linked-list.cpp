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
    // Non recursive method
    /*
    ListNode* reverseList(ListNode* head)
    {
      ListNode *p=NULL,*q=head,*r;
        
        while(q)
        {
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }
        return p;
    }
    
    */
    
    // recursive method
    ListNode* reverseList(ListNode* head)
    {
     ListNode *p;
     if(head==NULL) return head;
     p=head;
     head=recursion(head);
     p->next=NULL;
     return head;
     }
     ListNode *recursion(ListNode* head)
     {
     ListNode *current,*next;
     current=head;
     next=current->next;
     if(next==NULL) return current;
     head=recursion(next);
     next->next=current;  //reversing current,next node
     return head;
     }
    
    
};