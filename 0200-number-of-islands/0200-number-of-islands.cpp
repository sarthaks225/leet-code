class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int result=0;
        for(int i=0; i<grid.size(); ++i)
        {
            for(int j=0; j<grid[0].size(); ++j)
            {
                if(grid[i][j]=='1')
                {
                    ++result;
                    recur(i,j,grid);
                }
            }
        }
        return result;        
    }
    
    void recur(int i, int j, vector<vector<char>> &grid)
    {
        if(grid[i][j]!='1') return;
        grid[i][j]='2';
        if(i-1>=0) recur(i-1,j,grid);
        if(j-1>=0) recur(i,j-1,grid);
        if(j+1<grid[0].size()) recur(i,j+1,grid);
        if(i+1<grid.size()) recur(i+1,j,grid);
    }
    
};