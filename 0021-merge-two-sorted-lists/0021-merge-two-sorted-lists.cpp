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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode temp,*curr1 , *curr2 , *prev;
        if(list1==NULL) return list2;
       
        
        for(prev=&temp, curr1=list1, curr2=list2; curr1!=NULL && curr2!=NULL; )
        {
            if(curr1->val < curr2->val) 
            {
                prev->next=curr1;
                prev=curr1;
                curr1=curr1->next;
            }
            else {
                prev->next=curr2;
                prev=curr2;
                curr2=curr2->next;
            }
        }
        
        if(curr1!=NULL)
        {
            prev->next=curr1;
        }
        else prev->next=curr2;
        
        return temp.next;
        
    }
};