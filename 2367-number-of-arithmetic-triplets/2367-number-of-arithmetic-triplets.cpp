class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // time comp O(nLog(n)) spc com O(n)
       set<int> s(nums.begin(), nums.end());
        set<int>::iterator sItr;
        vector<int>::iterator itr;
        int count=0;
        for(itr=nums.begin(); itr<nums.end()-2; ++itr)
        {
            sItr=s.find(*itr+diff);
            if(sItr!=s.end() && s.find(*sItr+diff)!=s.end()) ++count;
        }
        
        return count;
        /*
                // time comp O(n^2) spc comp O(0) *********
        int count,find;
        vector<int>::iterator i,j,k;
        count=0;
        for(i=nums.begin(); i<nums.end()-2; ++i)
        {
            
            find=diff+*i;
            j=i+1;
            while(j<nums.end()-1 && *j<find) ++j;
           
            if(j<nums.end()-1 && find==*j)
            {
                k=j+1;
                find=diff+find;
                
                while(k<nums.end() && *k<find) ++k;
                
                if(k<nums.end() && *k==find) ++count;

            }
           
            
            
        }
        return count;
            
        */          
            
        
        
    }
};