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
    
    void helper(ListNode * & proccess, ListNode * &prev, int k)
    {
        int n;
        ListNode *prevProcc,*node;

        while(proccess)
        {
            n=0;
            prevProcc=proccess;
            node=recur(proccess,proccess,prev,k,n);
            if(node!=NULL) node->next=NULL;
            else prev->next=prevProcc;
        }
        
    }
    ListNode * recur(ListNode *curr,ListNode * &proccess, ListNode * & prev, int k,int &n)
    {
        ++n;
        
        if(n==k) 
        {
            prev->next=curr;
            prev=proccess;
            proccess=curr->next;
            return curr;
        }
        
        if(curr->next)
        {
            ListNode *node=recur(curr->next,proccess,prev,k,n);
            
            if(node==NULL) return NULL;
            else node->next=curr;
            return curr;
        }
        else
        {
            proccess=NULL;
            return NULL;
        }
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        ListNode dummy;
        ListNode *prev,*process;
        prev=&dummy;
        process=head;
        helper(process,prev,k);
        
        
        return dummy.next;
        
    }
};