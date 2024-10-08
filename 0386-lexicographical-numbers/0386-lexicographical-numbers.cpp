class Solution {
public:
    // struct comp
    // {
    //     bool operator()(int a, int b)
    //     {
    //         return to_string(a) > to_string(b);
    //     }
    // };
    // vector<int> lexicalOrder(int n) {
    //     vector<int> result;
    //     priority_queue<int, vector<int>, comp> pq;
    //     for(int i=1; i<=n; ++i)
    //     {
    //         pq.push(i);
    //     }
    //     while(!pq.empty())
    //     {
    //         result.push_back(pq.top());
    //         pq.pop();
    //     }
    //     return result;
    // }
    
    void recur(int n, int max, vector<int> &result)
    {
        if(n>max) return ;
        result.push_back(n);
        

            //vector<int> end=recur(n*10, max);
        recur(n*10, max, result);

//             for(auto num  : end)
//             {
//                 result.push_back(num);
//             }
        
        
        for(int i=1; i<=9; ++i)
        {
            if(n*10 + i > max ) break;
            //vector<int> end=recur(n*10 + i, max);
            recur(n*10 + i, max, result);

            // for(auto num  : end)
            // {
            //     result.push_back(num);
            // }
        }
    
    }
    
     vector<int> lexicalOrder(int n) {
        vector<int> result;
        for(int i=1; i<=9; ++i)
        {
            
           // vector<int> end = recur(i, n, result);
            recur(i, n, result);
            // for(auto num : end)
            // {
            //     result.push_back(num);
            // }
        }
        
         return result;
    }
};