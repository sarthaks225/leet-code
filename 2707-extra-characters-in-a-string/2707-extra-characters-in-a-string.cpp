class Solution {
public:
    int recur(int i, string &s,unordered_set<string> &st, unordered_map<int,int> &mem)
    {
        if(i>=s.length()) return 0;
        if(mem.find(i) != mem.end())
        {
            return mem[i];
        }
            int result = 1+ recur(i+1,s , st, mem);
        
        
        for(int j=i; j<s.length(); ++j)
        {
           // cout<< i << " " <<j <<endl;
            if(st.find(s.substr(i,j-i+1)) != st.end())
            {
                result = min( result , recur(j+1, s, st, mem) );
            }
          
        }
        
        return mem[i] = result;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<int,int> mem;
        unordered_set<string> st(dictionary.begin(), dictionary.end());
        int result=0;
        result = recur(0, s, st, mem);
        return result;
        
        
    }
};