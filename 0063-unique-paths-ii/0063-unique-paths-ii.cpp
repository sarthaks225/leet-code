class Solution {
public:
    int rec(int i,int j,int m,int n, vector<vector<int>> &og, vector<vector<int>> &mp)
    {
        if( i>m || j>n ||  og[i][j]==1 )  return 0;
        if(i==m && j==n) return 1;
        
        if(mp[i][j]==-1) mp[i][j]=rec(i+1,j,m,n,og,mp) + rec(i,j+1,m,n,og,mp);
        return mp[i][j];
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> mp(m,vector<int>(n,-1)); 
        
        return rec(0,0,m-1,n-1,obstacleGrid,mp);
        
    }
};