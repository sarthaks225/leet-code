class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool result=true;
        for(int i=0; i<board.size() && result; ++i)
        {
            for(int j=0; j<board.size() && result; ++j)
            {
                if(board[i][j]!='.') result=check(i,j,board);
                
            }
            
            
        }
        
        
        return result;
    }
    
    bool check(int row,int col, vector<vector<char>> &board)
    {
        char c=board[row][col];
        for(int i=row+1; i<board.size(); ++i){
            if(c==board[i][col]) return false;
        }
        
        for(int j=col+1; j<board.size(); ++j){
            if(c==board[row][j]) return false;
        }
        int l=(row/3)*3+3;
        int m=(col/3)*3+3;
        for(int i=(row/3)*3; i<l; ++i )
        {
            for(int j=(col/3)*3; j<m && j!=col && i!=row; ++j)
                if(board[i][j]==c) return false;
            
        }
        return true;
    }
    
};