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
        ListNode *dp,*sp;
        if(head->next==NULL) return true;
        if(head->next->next==NULL)
        {
            if(head->val==head->next->val) return true;
            return false;
        }
        
        dp=sp=head;
        while(1)
        { 
            if(dp->next==NULL) break;
            dp=dp->next;
            if(dp->next==NULL) break;
            dp=dp->next;
            sp=sp->next;
        }
        ListNode *newHead;
        newHead=sp->next;
        sp->next=NULL;
        ListNode *curr,*prev,*next;
        curr=newHead->next;prev=newHead;next=NULL;
        newHead->next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            if(next==NULL) break;
            prev=curr;
            curr=next;  
        }
        
        if(curr==NULL) newHead=prev;
        else newHead=curr;
        ListNode *newNode,*node;
        newNode=newHead;
        node=head;
        while(node!=NULL && newNode!=NULL)
        {
            if(newNode->val!=node->val) return false;
            newNode=newNode->next;
            node=node->next;
        }
        
        return true;
        
    }
};