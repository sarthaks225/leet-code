class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>::iterator i=nums.begin();
        int c1,c2,c3;
        c1=c2=c3=0;
        while(1)
        {
            if(*i==0) ++c1;
            else if(*i==1) ++c2;
            else ++c3;
            ++i;
            if(i==nums.end()) break;
            
        }
 
        i=nums.begin();
        while(1)
        {
            if(c1!=0) 
            {
                *i=0;
                --c1;
            }
            else if(c2!=0)
            {
                *i=1;
                --c2;
            }
            else if(c3!=0)
            {
                *i=2;
                --c3;
            }
            ++i;
            if(i==nums.end()) break;
        }
        
        
    }
};