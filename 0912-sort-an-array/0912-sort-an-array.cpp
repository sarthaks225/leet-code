class Solution {
public:
    
    void merg(vector<int> &nums,int low, int mid, int high)
    {
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high)
        {
            if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
            else temp.push_back(nums[right++]);
            
        }
        while(left<=mid) temp.push_back(nums[left++]);
        while(right<=high) temp.push_back(nums[right++]);
        for(int i=0; low<=high; ++low)
        {
            nums[low]=temp[i++];
        }
        
    }
    
    
    void mergSort(vector<int> &nums,int low, int high)
    {
        if(low==high) return;
        int mid=(low+high)/2;
        mergSort(nums,low,mid);
        mergSort(nums,mid+1,high);
        merg(nums,low,mid,high);
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        mergSort(nums,0,nums.size()-1);
        return nums;
        
    }
};