class Solution {
public:
    
    class comparator{
        public :
        bool operator()(pair<int,int> a, pair<int,int>  b){
            
            return (float)a.first/(float)a.second < (float)b.first/(float)b.second;
        }
    };
    
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,comparator> pq;
        
        for(int i=0; i<arr.size(); ++i){
            for(int j=arr.size()-1; j>i; --j){
                if(pq.size()==k && (float)arr[i] / (float)arr[j] > (float)pq.top().first / (float)pq.top().second  )break;
                pq.push( {arr[i] , arr[j]} );
                if(pq.size()>k) pq.pop();
            }
        }
        
        return { pq.top().first, pq.top().second };
    }
};