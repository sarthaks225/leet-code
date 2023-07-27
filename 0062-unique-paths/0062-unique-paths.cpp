class Solution {
public:
    
    int comb(int n,int r)
    {
        long result=1;
      
        for(int i=1; i<=r ; ++i)
        {
            result=result*(n-r+i)/i;
           // cout<<result<<"  ";
        }
        
       
        return result;
    }
    int uniquePaths(int m, int n) {
        cout<<m+n-2<<"  "<<m-1<<endl;
        return comb(m+n-2,m-1);
    }
    
  /*
        // time comp O(mXn) spc comp O(mXn) ***********
    int rec(int i,int j, int m, int n,vector<vector<int>>&dp)
    {
        if(i>m || j>n) return 0;
        if(i==m && j==n) return 1;
        if(dp[i][j]==-1) dp[i][j]=rec(i+1,j,m,n,dp) + rec(i,j+1,m,n,dp);
        return dp[i][j];
    }
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp;
        dp.resize(m);
        for(int i=0; i<m; ++i)
        {
                for(int j=0; j<n; ++j)
                {
                    dp[i].push_back(-1);
                }
        }
        return rec(0,0,m-1,n-1,dp);
      
    }
    */
};