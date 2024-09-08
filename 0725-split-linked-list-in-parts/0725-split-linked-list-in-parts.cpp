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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        int length = calculateLength(head);
        //cout<<length;
        vector<ListNode *> list = splitting(head, length, k);
        return list;
    }
    
    int calculateLength(ListNode *head)
    {
        int size=0;
        for(ListNode *node=head; node != NULL; node=node->next)
        {
            ++size;
        }
        return size;
    }
    
    vector<ListNode *> splitting(ListNode *head,int length,int k)
    {
        vector<ListNode *> list ;
        ListNode *node, *next;
        if(k >= length)
        {
          
            for(node=head; node != NULL; node=next)
            {
                next = node->next;
                node->next=NULL;
                list.push_back(node);
            }
            for(int x=k-length; x!=0; --x)
            {
                list.push_back(NULL);
            }
        }
        else {
            int min = length / k;
            int x = length % k;
            int max = min + 1;
            node = head;
            for(int y=0; y<x; ++y)
            {
                list.push_back(node);
                for( int j=1; j<max; ++j)
                {
                    node=node->next;
                }
                next=node->next;
                node->next=NULL;
                node=next;
            }
            for(int y=0; y<k-x; ++y)
            {
                list.push_back(node);
                for( int j=1; j<min; ++j)
                {
                    node=node->next;
                }
                next=node->next;
                node->next=NULL;
                node=next;
            }
            
        }
        return list;
    }
};




