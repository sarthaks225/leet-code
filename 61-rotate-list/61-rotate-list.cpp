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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL) return head;
        
        ListNode *begin,*end,*endPrev;
        begin=head;
        int i,j;
        for(i=0; begin!=NULL; begin=begin->next) ++i;   
        
        
        if(i<k)
        {
        j=k%i;
        if(j==0) k=i;
        else k=j;
        }
    
        begin=head;
        while(k--)
        {
            endPrev=begin;
            end=begin->next;
            while(end->next!=NULL)
            {
                endPrev=end;
                end=end->next;
            }
            end->next=begin;
            begin=end;
            endPrev->next=NULL;
            
        }
        
        return end;
        
        
    }
};