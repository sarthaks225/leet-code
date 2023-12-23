class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        set<pair<int,int>> set;
        
        set.insert({x,y});
        for(auto direction: path)
        {
            if(direction=='N') ++y;
            else if(direction=='S') --y;
            else if(direction=='E') ++x;
            else --x;
            if( set.find({x,y}) != set.end() ) return true;
            set.insert({x,y});   
        }
        return false;
    }
};