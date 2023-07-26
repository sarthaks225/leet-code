class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        vector<int>::iterator i1,i2;
        int endPoint=nums.size()/2;
        int count;
        for(i1=nums.begin(); i1<nums.end(); ++i1)
        {
            count=0;
            for(i2=i1; i2<nums.end(); ++i2)
            {
                if(*i1==*i2) ++count;
                if(count>endPoint) return *i2;
                
            }
        }
        return -1;   
    }
};