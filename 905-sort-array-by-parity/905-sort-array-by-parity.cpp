class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
   
        vector<int>::iterator i1,i2;
        i1=nums.begin();
        i2=i1+1;
        int j;
        while(i2!=nums.end())
        {
            
            if(*i1%2==0)
            {
                i1++;
                i2++; 
            }
            else
            {
                if(*i2%2==0)
                {
                    j=*i1;
                    *i1=*i2;
                    *i2=j;
                    i1++;
                }
                else i2++;
            }
            
        }
     return nums;   
    }
};