class Solution {
public:
    int similarPairs(vector<string>& words) {
        int result=0;
        unordered_map<string, int> map;
        
        for( auto word : words)
        {
            set<char> s;
            for(auto c : word)
            {
                s.insert(c);
            }
            string w="";
            for(auto c : s)
            {
                w+=c;
            }
            
            if( map.find(w) == map.end() )
            {
                map[w]=0;
            }
            else {
                map[w]++;
                result += map[w];
            }
            
        }
        
        
        return result;
    }
    
    //  using bit manipulation
    /*
    int similarPairs(vector<string>& words) {
        unordered_map<int , int> map;
        int result = 0;
        for(auto word : words)
        {
            int wordOr= 0;
            for(int i=0 ; i<word.length(); ++i)
            {
                wordOr |= (1 << ( (word[i]) - 'a'));  
                
            }
            //cout << word << " " << wordOr <<endl;
            if( map.find(wordOr) == map.end() ){
                
                map[wordOr] = 0;
            }
            else {
                map[wordOr]++;
                result += map[wordOr];
            }
        }
        
        return result;
    }
    */
};