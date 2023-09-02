class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i,j;
        for(i=0; i<grid.size(); ++i)
        {
            for(j=0; j<grid[0].size(); ++j)
            {
                if(grid[i][j]==1)
                {
                    vector<int> x={-1,0,0,1};
                    vector<int> y={0,-1,1,0};
                    grid[i][j]=2;
                    return recur(i,j,x,y , grid);
                }
            }
        }
       return 0;
    }
    int recur(int i,int j,vector<int> &x, vector<int> &y, vector<vector<int>> &grid)
    {
        int result=0;
        for(int n=0; n<4; ++n)
        {
            int row=i+x[n];
            int col=j+y[n];
            if( (row>=0 && col>=0) && (row<grid.size() && col<grid[0].size()) )
            {
                    if(grid[row][col]==1) 
                    {
                        grid[row][col]=2;
                        result+=recur(row,col, x,y, grid);
                    }
                    else if(grid[row][col]==0) result+=1;
            }
            else  result+=1;
            
        }
        return result;
        
    }
};

