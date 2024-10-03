class NumArray {
    
    private : 
    vector<long long> cummulativeSum;
public:
    NumArray(vector<int>& nums) {
    
        long long sum = 0;
        for(auto num : nums)
        {
            sum+=num;
            this->cummulativeSum.push_back(sum);
        }
    
    }
    
    int sumRange(int left, int right) {
        
        if(left == 0) return cummulativeSum[right];
        return cummulativeSum[right] - cummulativeSum[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */