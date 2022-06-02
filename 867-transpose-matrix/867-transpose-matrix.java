class Solution {
    public int[][] transpose(int[][] matrix) {
        
        int m=matrix.length;
        int n=matrix[0].length;
        int i,j;
        int newMatrix[][]=new int[n][m];
        for(i=0,j=0; i<m; ++i )
        {
            for(j=0; j<n; ++j )
            {
                newMatrix[j][i]=matrix[i][j];
                
            }
            
        }
      return newMatrix;
    }
}