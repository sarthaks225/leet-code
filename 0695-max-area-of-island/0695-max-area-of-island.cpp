class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0; i<grid.size(); ++i)
        {
            for(int j=0; j<grid[0].size(); ++j)
            {
                if(grid[i][j]==1)
                {
                    result = max(result, recur(i, j, grid));
                }
            }
            
        }
        return result;
    }
    
    int recur(int i,int j, vector<vector<int>> &grid)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=1) return 0;
        grid[i][j]=2;
        int result=1;
        
        result+=recur(i-1, j, grid);
        result+=recur(i,j-1,grid);
        result+=recur(i,j+1,grid);
        result+=recur(i+1,j,grid);
        return result;        
    }
};