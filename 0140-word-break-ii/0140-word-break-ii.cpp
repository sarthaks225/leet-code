class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> mp;
        for(vector<string>::iterator itr=wordDict.begin(); itr<wordDict.end(); ++itr)
        {
            mp.insert(*itr);
            
        }
        
        vector<string> result;
        string str;
        recur(0,s,mp,str,result);
        return result;
    }
    
    void recur(int index, string &s, unordered_set<string> &mp, string &str, vector<string> &result)
    {
        if(index==s.size())
        {
            result.push_back(str);
            return;
        }
        
        string word;
        string str2;
        for(int i=index; i<s.size(); ++i)
        {
            word.push_back(s[i]);
            if(mp.count(word))
            {
                str2=str;
                str2+=word;
                if(i<s.size()-1) str2.push_back(' ');
                recur(i+1,s,mp,str2,result);
                
            }
        }
        
    }
};