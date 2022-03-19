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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode *,int> tree;
        ListNode *nodeA,*nodeB;
        nodeA=headA;
        while(nodeA)
        {
            tree.insert(pair<ListNode *,int> (nodeA,nodeA->val));
            nodeA=nodeA->next;
        }
        nodeB=headB;
        map<ListNode *,int>::iterator i;
        while(nodeB)
        {
            i=tree.find(nodeB);
            if(i!=tree.end()) break;
            nodeB=nodeB->next;
        }
        if(nodeB==NULL) return NULL;
        return (*i).first;
    }
};