class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
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
            
            
            
        
        
    }
};