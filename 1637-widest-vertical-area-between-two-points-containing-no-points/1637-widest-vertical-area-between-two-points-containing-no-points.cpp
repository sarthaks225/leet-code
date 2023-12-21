
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int max=0;
        for(vector<vector<int>>::iterator i=points.begin()+1; i<points.end(); ++i)
        {
            max=max>(*i)[0]-(*(i-1))[0]?max:(*i)[0]-(*(i-1))[0];
        }
        return max;
    }
};