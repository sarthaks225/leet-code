class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
        vector<int>::iterator i;
        vector<int> result;
        int num1,num2;
        int count1,count2;
        int req=nums.size()/3;
        count1=0;
        count2=0;
        
        for(i=nums.begin(); i<nums.end(); ++i)
        {
            if( count1==0 && (count2==0 || num2!=*i) )
            {
                ++count1;
                num1=*i;
                
            }else if(count2==0 && (count1==0 || num1!=*i) )  
            {
                ++count2;
                num2=*i;
               
            }else if(num1==*i)
            {
                ++count1;
                
            }else if(num2==*i)
            {
                ++count2;
            }
            else
            {
                --count1;
                --count2;
                
            }
           
            if(count1>req && count2>req) break;
            
        }
        
       count1=count2=0;
        
        for(i=nums.begin(); i<nums.end(); ++i)
        {
            if(*i==num1) ++count1;
            else if(*i==num2) ++count2;
            
        }
       
        if(count1>req) result.push_back(num1);
        if(count2>req) result.push_back(num2);
        
        return result;
        
        /*
            // time comp O(n) space comp O(n)
        map<int,int> mp;
        vector<int>::iterator i1;
        vector<int> result;
        int req=nums.size()/3+1;
        int freq;
        for(i1=nums.begin(); i1<nums.end(); ++i1)
        {
            freq=++mp[*i1];
            if( freq==req )
            {
                result.push_back(*i1);
                if(result.size()==2) break;
            }
        }
        
        return result;
        */
        
        
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