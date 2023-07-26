class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        vector<int>::iterator i1;
        int assumedMajority;
        int count=0;
        for(i1=nums.begin(); i1<nums.end(); ++i1)
        {
            if(count==0) 
            {
                assumedMajority=*i1;
                ++count;
            }
            else if(assumedMajority!=*i1) --count;
            else ++count;
        }
        
        for(i1=nums.begin(),count=0; i1<nums.end(); ++i1)
        {
            if(assumedMajority==*i1) ++count;
        }
        
        if(count>nums.size()/2) return assumedMajority;
        return -1;
        
        /*
            //****** TIME COMP worst case O(N) space comp worst case O(N)
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
        */
        
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