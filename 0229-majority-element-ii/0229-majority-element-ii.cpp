class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int,int> mp;
        
        vector<int>::iterator i1;
        vector<int> result;
        int req=nums.size()/3;
        int freq;
        for(i1=nums.begin(); i1<nums.end(); ++i1)
        {
            freq=++mp[*i1];
            if( freq>req && ( result.size()==0 || *i1!=result[0] ) )
            {
                result.push_back(*i1);
                if(result.size()==2) break;
            }
        }
        
        return result;
        
        
        
        /*
                // ********* time comp O(n^2) spc complexity O(1)
        vector<int>::iterator i1,i2;
        vector<int> result;
        int req=nums.size()/3;
        int count; 
        for(i1=nums.begin(); i1<nums.end(); ++i1)
        {
            
            count=0;
            if(result.size()==0 || result[0]!=*i1)
            {
                for(i2=i1; i2<nums.end() ; ++i2)
                {
                    if(*i1==*i2)
                    {
                        ++count;
                        if(count>req) 
                        {
                            result.push_back(*i1);
                            break;
                        }
                    }

                }
                if(result.size()==2) break;
            }
        }
        
        return result;
        
        */      
    }
};