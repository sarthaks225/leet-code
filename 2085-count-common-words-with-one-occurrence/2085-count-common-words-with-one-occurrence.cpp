class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;

        for(auto word : words1)
        {
            ++mp1[word];
        }
        for(auto word : words2)
        {
            ++mp2[word];
        }
        int result = 0;
        for(auto m : mp1)
        {
            if(m.second == 1)
            {
                if( ( mp2.find(m.first) != mp2.end() ) &&  mp2[m.first] == 1) 
                {
                    ++result;
                    ++mp2[m.first];
                }
            }
            
        }
       
      
        return result;
    }
};