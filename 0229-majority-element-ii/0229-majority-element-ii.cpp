class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
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
        
        
    }
};