class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        unordered_map<int,int> mp;
        vector<int>::iterator i1;
        int ep=nums.size()/2;
        int second;
        for(i1=nums.begin(); i1<nums.end(); ++i1)
        {
            second=++mp[*i1];
            if(second>ep) return *i1;
        }
        
        return -1;
        
        /*
            // time comp O(n^2) **********
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
        */
    }
};