//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int color[n];
        for(int i=0; i<n; ++i) color[i]=-1;
        return recur(0,color,graph,m,n);
    }
    
    bool recur(int node,int color[], bool graph[101][101], int m, int n)
    {
        
        if(node==n) return true;
        
        for(int col=1,j=0; col<=m; ++col,j=0)
        {
            
            for(; j<n; ++j)
            {
                if(graph[node][j]==1 && color[j]==col)
                {
                    break;
                }
                
            }
            if(j==n)
            {
                color[node]=col;
                if(recur(node+1, color, graph, m, n))
                {
                    return true;
                }
            }

           
            
        }
        return false;
        
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends