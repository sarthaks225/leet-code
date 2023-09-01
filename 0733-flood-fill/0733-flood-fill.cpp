class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int c=image[sr][sc];
        if(c==color) return image;
        recur(c,image,sr,sc,color);
       
        return image;
    }
    
    void recur(int c,vector<vector<int>> &image, int sr,int sc,int color)
    {
        //cout<<sr<<" "<<sc<<endl;
        if(sr-1>=0 && image[sr-1][sc]==c)
        {
            image[sr-1][sc]=color;
            recur(c, image, sr-1,sc, color);
        }
        if(sc-1>=0 && image[sr][sc-1]==c)
        {
            image[sr][sc-1]=color;
            recur(c,image, sr,sc-1, color);
        }
        if(image[sr][sc]==c)
        {
            image[sr][sc]=color;
            //recur(c,image, sr,sc, color);
        }
        if(sc+1<image[0].size() && image[sr][sc+1]==c)
        {
            image[sr][sc+1]=color;
            recur(c,image, sr,sc+1, color);
        }
        if(sr+1<image.size() && image[sr+1][sc]==c)
        {
            image[sr+1][sc]=color;
            recur(c, image, sr+1,sc, color);
        }
        
    }
};