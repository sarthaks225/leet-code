class NumMatrix {

    private int[][] matrix;
    public NumMatrix(int[][] matrix) {
        
        this.matrix=matrix;
        
    }
    
    public int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum;
        int i,j;
        sum=0; i=row1;
        while(i<=row2)
        {
            for(j=col1 ; j<=col2 ; ++j)
            {
                sum+=matrix[i][j];
                
            }
            ++i;
                
        }
       
        return sum;
    }
}

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */