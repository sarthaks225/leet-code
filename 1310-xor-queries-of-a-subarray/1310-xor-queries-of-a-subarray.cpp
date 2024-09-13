class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> cummXor(arr.size(),0);
         vector<int>:: iterator itr1, itr2;
        itr1=arr.begin();
        itr2=cummXor.begin();
        *itr2 = *itr1;
        for(  ++itr1, ++itr2 ; itr1 != arr.end(); ++itr1, ++itr2)
        {
            *itr2 = *(itr2-1) ^ *itr1;
        }
       
        vector<int> result(queries.size(), 0);
        for(int i=0; i < queries.size(); ++i )
        {
            if(queries[i][0] == 0)
            {
                result[i] = cummXor[queries[i][1]];
            }
            else
            {
            result[i] = cummXor[queries[i][1]] ^ cummXor[queries[i][0]-1];  
            }
            
        }
        
        return result;
    }
};