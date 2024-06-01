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
    // using unordered set
    
    ListNode *detectCycle(ListNode *head) {
        
    unordered_set<ListNode *> nodeSet;
        for(ListNode *node=head; node!=NULL; node=node->next)
        {
            if(nodeSet.find(node)!=NULL) return node;
            nodeSet.insert(node);
        }
        return NULL;        
    }
};