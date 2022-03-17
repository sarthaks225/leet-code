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
    bool hasCycle(ListNode *head) {
        vector<ListNode *> g;
        ListNode *node;
        node=head;
         
        while(node)
        {
            for(vector<ListNode *>::iterator i=g.begin(); i!=g.end(); i++)
            {
            if(*i==node)
            {
                return 1;
            }
            }
            g.push_back(node);
            node=node->next;
            
        }
        
        return 0;
        
    }
};