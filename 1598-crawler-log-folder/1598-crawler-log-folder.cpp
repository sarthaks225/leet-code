class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int result = 0;
        for(auto l : logs)
        {
           
            if( l == "../" ) 
            {
                if(result > 0) --result;
            }
            else if ( l == "./") {}
            else ++result;
        }
        return result;
    }
};