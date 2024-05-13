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
    
                //     TIME COMP (k*n)log(k)
                //     SPACE COMP k*n
    class Comparator{
        public: 
        bool operator()(const pair<int,ListNode *> &a, const pair<int, ListNode *> &b){
            return a.first > b.first;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<pair<int,ListNode *>,vector<pair<int,ListNode *>>, Comparator> pq;
        
        for(auto list : lists ){
            if(list) pq.push( {list->val, list} );
        }
        
        ListNode *start=new ListNode();
        ListNode *node,*prev,*curr;
        prev=start;
        
        while(!pq.empty()){
            
            curr=pq.top().second;
            
            node=new ListNode();
            node->val=curr->val;
            prev->next=node;
            prev=node;
            
            pq.pop();
            if(curr->next) pq.push( {curr->next->val, curr->next} );
            
        }
        
        return start->next;
    }
    
    
    
    /*
        // TIME COMP    (k*n)log(k*n) + log(k*n)
        //space comp k*n
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
    */
};