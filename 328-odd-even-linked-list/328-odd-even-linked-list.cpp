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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode *o_node,*e_node,*se,*dp;
        o_node=head;
        e_node=se=head->next;
         dp=e_node->next;
        while(e_node && dp)
        {

            o_node->next=dp; ;
            o_node=dp; ;
            e_node->next=o_node->next;
            e_node=o_node->next;
            if(e_node) dp=e_node->next;
        }
        o_node->next=se;
     
        
        return head;
        
        
    }
};