class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        int i=0;
        int j =0;
        string word="";
        do
        {
            j = s1.find(" ", i);
            if(j == -1){
                word = s1.substr( i);
                mp[word]++;
                break;
            }
            word = s1.substr( i, j-i);
            mp[word]++;
            i=j+1;
        } while(true);
       
        i=0;
        j=0;
        do
        {
            j = s2.find(" ", i);
            if(j == -1){
                word = s2.substr( i);
                 mp[word]++;
                break;
            }
            word = s2.substr( i, j-i);
            mp[word]++;
            i=j+1;
        } while(true);
        vector<string> result;
        for(auto m : mp)
        {
            if(m.second == 1) result.push_back(m.first);
        }
        
        return result;
        
        
    }
};