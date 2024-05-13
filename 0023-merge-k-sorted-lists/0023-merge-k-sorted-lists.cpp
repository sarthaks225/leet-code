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
    
    class Comparator{
        public:
        bool operator()(int a,int b){
            return a>b;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int,vector<int>,Comparator> pq; // for min heap
        for(auto list : lists){
            while(list!=NULL){
                pq.push(list->val);
                list=list->next;
            }
            
        }
        
        if(pq.empty()) return NULL;
        
        ListNode *start=new ListNode();
        start->next=NULL;
        
        ListNode *prev,*node;
        prev=start;
        while(!pq.empty()){
            node=new ListNode();
            node->val=pq.top();
            prev->next=node;
            prev=node;
            pq.pop();            
        }
        node->next=NULL;
        
        return start->next;
    }
};