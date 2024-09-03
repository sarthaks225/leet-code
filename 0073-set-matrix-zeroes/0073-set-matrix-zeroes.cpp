class Solution {
public:
    // void setZeroes(vector<vector<int>>& matrix) {
    //     vector<int> temp;
    //     for(int i=0; i<matrix.size(); ++i) {
    //         for(int j=0; j<matrix[i].size(); ++j) {
    //             if(matrix[i][j]==0) {
    //                 temp.push_back(i);
    //                 temp.push_back(j);
    //             }
    //         }
    //     }
    //     int i,j;
    //     for(auto itr=temp.begin(); itr!=temp.end(); ++itr) {
    //         i=*itr;
    //         j=*(++itr);
    //         for(int a=0; a<matrix.size(); ++a) matrix[a][j]=0;
    //         for(int b=0; b<matrix[0].size(); ++b) matrix[i][b]=0;
    //     }
    // }
    
      void setZeroes(vector<vector<int>>& matrix) {
          int rowZero = 1;
          int colZero = 1;
          
          for( int x=0; x < matrix.size(); ++x)
          {
              for(int y=0; y < matrix[0].size(); ++y)
              {
                  if(matrix[x][y] == 0)
                  {
                      if(x == 0 || y == 0)
                      {
                          if(y == 0) colZero = 0;
                          if(x == 0) rowZero = 0;    
                      }
                      else {
                          matrix[x][0] = 0;
                          matrix[0][y] = 0;
                      }
                  }
              }
          }
          
          for( int x=1; x < matrix.size(); ++x)
          {
              if(matrix[x][0] == 0)
              {
                for( int y = 1; y < matrix[0].size(); ++y)
                {
                    matrix[x][y] = 0;
                }
              }
          }
          
          for( int y=1; y < matrix[0].size(); ++y)
          {
              if(matrix[0][y] == 0)
              {
                  for(int x = 0; x < matrix.size(); ++x)
                  {
                      matrix[x][y] = 0;
                  }
              }
          }
          
          if(colZero == 0)
          {
              for(int x = 0; x<matrix.size(); ++x)
              {
                  matrix[x][0] = 0;
              }
          }
          if(rowZero == 0)
          {
              for(int y = 0 ; y<matrix[0].size(); ++y)
              {
                  matrix[0][y] = 0;
              }
          }
          
          
      }
};