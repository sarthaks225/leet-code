class Solution {
public:
    
    bool isPalindrom(int start, int end, string &s)
    {
        while(start<=end)
        {
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    
    void recur(int index,string &s, vector<vector<string>> &result, vector<string> &v)
    {
        
        if(index==s.size())
        {
            result.push_back(v);
            return;
        }
        for(int i=index; i<s.size() ; ++i)
        {
            if(isPalindrom(index,i,s))
            {
                //cout<<"111  ";
                v.push_back(s.substr(index, i - index + 1));
                recur(i+1, s, result, v);
                v.pop_back();
            }
            
        }
                
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> v;
        recur(0,s,result,v);
        return result;
    }
};