/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *p;
        int val;
        
        for(p=node->next; ;node=node->next)
        {
            val=p->val;
            node->val=val;
            p=p->next;
            if(p==NULL) break;
        }
        node->next=NULL;
       
    }
};