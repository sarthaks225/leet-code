bool ascending(vector<int> &i1, vector<int> &i2)
    {
        return (i1[0]<i2[0]);  
    }
class Solution {
public:
    
    
           
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),ascending);
       // for(auto i: points) cout<<i[0]<<" ";
        int max=0;
        for(vector<vector<int>>::iterator i=points.begin()+1; i<points.end(); ++i)
        {
            max=max>(*i)[0]-(*(i-1))[0]?max:(*i)[0]-(*(i-1))[0];
        }
        return max;
    }
};