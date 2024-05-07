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
    int recursion(ListNode *node){
        if(!node) return 0;
        int result = recursion(node->next) + node->val * 2;
        node->val = result % 10;
        return result / 10;
    }
    
    ListNode* doubleIt(ListNode* head) {
        
        int carry=recursion(head);
        if(carry) {
            ListNode *oldHead = head;
            head = new ListNode(carry);
            head->next = oldHead;
        }
        return head;
    }
};