class NumArray {
    private : 
    vector<int> nums;
    vector<int> segmentTree;
    
    void buildTree(int i, int left, int right) {
        if (left == right) {
            segmentTree[i] = nums[left];
            return;
        }
        
        int mid = (left + right) / 2;
        buildTree(i * 2 + 1, left, mid);      // Left child
        buildTree(i * 2 + 2, mid + 1, right); // Right child
        
        segmentTree[i] = segmentTree[i * 2 + 1] + segmentTree[i * 2 + 2];
    }
    
    void updateSegmentTree(int index, int val, int i, int left, int right)
    {
         if (left == right) {
            segmentTree[i] = val;
            return;
        }
        
         int mid = (left + right) / 2;
        
        if (index <= mid) {
            updateSegmentTree(index, val, i * 2 + 1, left, mid);       // Left child
        } else {
            updateSegmentTree(index, val, i * 2 + 2, mid + 1, right);  // Right child
        }
        
        segmentTree[i] = segmentTree[i * 2 + 1] + segmentTree[i * 2 + 2];
                
    }
    
    int sumQuery(int i,int left, int right, int qLeft, int qRight)
    {
        
      // No overlap
        if (qLeft > right || qRight < left) {
            return 0;
        }
        
        // Total overlap
        if (qLeft <= left && qRight >= right) {
            return segmentTree[i];
        }
        
        // Partial overlap, split the range
        int mid = (left + right) / 2;
        int leftSum = sumQuery(i * 2 + 1, left, mid, qLeft, qRight);   // Left child
        int rightSum = sumQuery(i * 2 + 2, mid + 1, right, qLeft, qRight); // Right child
        
        return leftSum + rightSum;
    }
    
public:
    
    NumArray(vector<int>& nums) {
     this->nums = nums;
        segmentTree.resize(4 * nums.size(), 0); // Resize to 4 * n for safe space
        
        buildTree(0, 0, nums.size() - 1);
        
        
    }
    
    void update(int index, int val) {
        
        updateSegmentTree(index, val, 0 , 0, nums.size()-1);
        nums[index] = val;
    }
    
    int sumRange(int left, int right) {
        
        return sumQuery(0,0,nums.size()-1, left, right);
        return 0;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */