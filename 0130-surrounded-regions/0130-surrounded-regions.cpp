class Solution {
public:
    void solve(vector<vector<char>>& board) {
        vector<vector<char>> check(board.size(), vector<char> (board[0].size(),0));
        for(int j=0; j<board[0].size(); ++j)
        {
            if(board[0][j]=='X' || check[0][j]=='1') continue;
            dfs(0,j,check,board);
        }
        for(int i=0; i<board.size(); ++i)
        {
            if(board[i][0]=='X' || check[i][0]=='1') continue;
            dfs(i,0,check,board);
        }
        for(int i=board.size()-1,j=0; j<board[0].size(); ++j)
        {
            if(board[i][j]=='X' || check[i][j]=='1') continue;
            dfs(i,j,check,board);
        }
        
        for(int i=0,j=board[0].size()-1; i<board.size(); ++i)
        {
            if(board[i][j]=='X' || check[i][j]=='1') continue;
            dfs(i,j,check,board);
        }
        
        for(int i=0; i<board.size(); ++i)
        {
            for(int j=0; j<board[0].size(); ++j)
            {
                if(check[i][j]=='1' || board[i][j]=='X') continue;
                board[i][j]='X';
            }
        }
    }
    
    void dfs(int i,int j, vector<vector<char>> &check, vector<vector<char>> &board)
    {
      if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='X' || check[i][j]=='1') return;
        check[i][j]='1';
        dfs(i-1,j, check, board);
        dfs(i,j-1, check, board);
        dfs(i,j+1, check, board);
        dfs(i+1,j, check, board);
        
    }
    
};