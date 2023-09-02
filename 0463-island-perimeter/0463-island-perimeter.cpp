class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i,j;
        for(i=0; i<grid.size(); ++i)
        {
            for(j=0; j<grid[0].size(); ++j)
            {
                if(grid[i][j]==1) break;
            }
            if(j<grid[0].size() && grid[i][j]==1) break;
        }
        vector<int> x={-1,0,0,1};
        vector<int> y={0,-1,1,0};
        set<pair<int,int>> visited;
        visited.insert({i,j});
        //cout<<"**";
        return recur(i,j,x,y , grid, visited);
    }
    int recur(int i,int j,vector<int> &x, vector<int> &y, vector<vector<int>> &grid, set<pair<int,int>> &visited)
    {
        int result=0;
        for(int n=0; n<4; ++n)
        {
            int row=i+x[n];
            int col=j+y[n];
            if( (row>=0 && col>=0) && (row<grid.size() && col<grid[0].size()) )
            {
                if(visited.count({row,col})==0)
                {
                    if(grid[row][col]==1) 
                    {
                        visited.insert({row,col});
                        result+=recur(row,col, x,y, grid, visited);
                    }
                    else result+=1;
                }
            }
            else  result+=1;
            
        }
        return result;
        
    }
};

