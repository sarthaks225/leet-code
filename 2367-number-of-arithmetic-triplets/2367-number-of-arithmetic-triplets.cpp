class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // time comp O(nLog(n)) spc com O(n)
       unordered_set<int> s(nums.begin(), nums.end());
        int count=0;
        for(int num: nums)
        {
            if(s.count(num+diff)!=0 && s.count(num+2*diff)!=0) ++count;
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