class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> hashSet;
        int result,count;
        result=count=1;
        for(vector<int>::iterator i=nums.begin(); i<nums.end(); ++i) hashSet.insert(*i);
        
        for(unordered_set<int>::iterator i=hashSet.begin(); i!=hashSet.end(); ++i)
        {
            if(hashSet.count(*i-1)==0)
            {
                count=1;
                for(int num=*i+1; hashSet.count(num)==1; ++num) ++count; 
                result=max(result,count);
            }            
        }
        
        return result;
        /*
        
        // time comp O(Nlog(N)) + O(N) *******
        sort(nums.begin(),nums.end());
        int count=0;
        int result=0;
        int lastNum=INT_MIN;
        for(vector<int>::iterator i=nums.begin(); i<nums.end(); ++i)
        {
            
            if(lastNum+1==*i)
            {
                ++count;
                lastNum=*i;
            }else if(lastNum+1<*i)
            {
                result=max(result,count);
                count=1;
                lastNum=*i;
            }
            
            
        }
        return max(result,count);
        */
    }
};