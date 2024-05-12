class Solution {
public:
    
    int countOfSmallerAndEqual(vector<vector<int>> &matrix, int mid){
        int count=0;
        int m,n;
        m=matrix.size()-1;
        n=matrix[0].size()-1;
        for(int i=0; i<=m ; ++i){
            if(matrix[i][0] > mid) break;
            if(matrix[i][n] <= mid) count+=n+1;
            else{
                count+=upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
        }
        return count;
            
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int l,r,mid;
        l=matrix[0][0];
        r=matrix[matrix.size()-1][matrix[0].size()-1];
        int count,result;
        while( l <= r )
        {
            mid=(l+(r-l)/2);
            count=countOfSmallerAndEqual(matrix,mid);
            if(count < k)
            {
                l=mid+1;
            }
            else{
                result=mid;
                r=mid-1;
            }
            
        }
        
        return result;
        
    }
};