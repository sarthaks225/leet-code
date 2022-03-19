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
    int getDecimalValue(ListNode* head) {
        if(head==NULL && head->next==NULL && head->val==0) return 0;
        stack<ListNode *> s;
        ListNode *node;
        for(node=head; node; node=node->next) s.push(node);
        
        int num,j,k,p;
        node=s.top();
        s.pop();
        if(node->val==1) num=1;
        else num=0;
        for(j=1; !s.empty(); j++)
        {
            node=s.top();
            s.pop();
            if(node->val==1)
            {
               k=j;
                p=1;
               while(k--) p=p*2;
                num=num+p;
            }
        }
            
        return num;
        
    }
};