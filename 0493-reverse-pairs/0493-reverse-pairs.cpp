class Solution {
public:
    
    int reversePairs(int l1, int h1, int l2, int h2, vector<int> &nums )
    {
        int cnt=0;
        while(l1<=h1 && l2<=h2)
        {
            if (nums[l1] > (long)2*nums[l2]) 
            {
                cnt+=h1-l1+1;
                ++l2;
            }
            else 
            {
                ++l1;
            }
        }
        
        return cnt;
    }
    
    void sortFunction(int l1,int h1, int l2, int h2, vector<int> &nums)
    {
        
        vector<int> tmp;
        int i,j;
        i=l1, 
        j=l2;
        while(i<=h1 && j<=h2 )
        {
            if(nums[i]>=nums[j]) tmp.push_back(nums[j++]);
            else tmp.push_back(nums[i++]);
        }
        
        while(i<=h1) tmp.push_back(nums[i++]);
        while(j<=h2) tmp.push_back(nums[j++]);
        
        for(i=l1,j=0; i<=h2; ++i,++j)
        {
            nums[i]=tmp[j];
        }
    }

    
    int rec(int low, int mid, int high, vector<int> &nums)
    {
        
        if(mid==high) return 0;
        
        int cnt=0;
        cnt+=rec(low,(low+mid)/2,mid, nums);
        cnt+=rec(mid+1,(mid+1+high)/2,high, nums);
        
        cnt+=reversePairs(low,mid, mid+1,high, nums);
        
        sort(nums.begin()+low,nums.begin()+high+1);
        return cnt;   
    }
    
    
    int reversePairs(vector<int>& nums) {
       
return        rec(0,(nums.size()-1)/2,nums.size()-1,nums);
        for(auto i:nums) cout<<i<<"  ";

        
    }
};