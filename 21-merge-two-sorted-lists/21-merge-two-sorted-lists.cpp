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
        ListNode *current1,*current2,*prev1=NULL,*prev2=NULL,*head,*e,*f;
        int value1,value2;
        current1=list1;
        current2=list2;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        while(current1!=NULL && current2!=NULL)
        {
            value1=current1->val;
            value2=current2->val;
            if(value1==value2)
            {
                
                e=current1->next;
                f=current2->next;
                prev1=current1;
                current1->next=current2;
                current1=current2;
                current2->next=e;
                current2=f;
                
                
            }
            else if(value1<value2)
            {
                prev1=current1;
                current1=current1->next;;
                
                
            }
            else if(value1>value2)
            {
                if(prev1==NULL)
                {
                    list1=current2;
                    f=current2->next;
                    current2->next=current1;
                    prev1=current2;
                    current2=f;
                }
                else
                {
                    prev1->next=current2;
                    prev1=current2;
                    f=current2->next;
                    current2->next=current1;
                    current2=f;
                    
                }
                
                
            } 
            
        }
        
        
        if(current1==NULL && current2!=NULL && prev1!=NULL)
        {
            prev1->next=current2;
        }
        
        return list1;
    }
};