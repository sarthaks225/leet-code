class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
                // ************** time comp O(nLog(n))spc comp O(n)
        unordered_map<int,int> map;
        vector<int>::iterator itr;
        itr=nums.begin();
        for(int n=0; n<nums.size(); ++n, ++itr)
        {
           
            if(map.find(target-*itr)!=map.end())
            {
                return {map.find(target-*itr)->second,n};

            }
            map.insert(make_pair(*itr,n));

        }
        return {};

        /*
        vector<int> result;
        vector<int>::iterator i1,i2;

        int find;
        int index1,index2,found;
        found=0;
        index1=0;
        for(i1=nums.begin() , index1=0; 1 ; ++i1 , ++index1)
        {
            find=target-(*i1);
            for(i2=(i1+1), index2=index1+1; i2!=nums.end(); ++i2,++index2)
            {
                if(find==*i2)
                {
                    found=1;
                    break;
                }
            }

            if(found==1)
            {
                break;
            }
          

        }

        result.push_back(index1);
        result.push_back(index2);
        return result;
        */
    }
};