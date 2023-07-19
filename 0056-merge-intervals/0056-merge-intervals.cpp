class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        for(int i=0; i<intervals.size(); ++i)
        {
            
            for(int j=i+1; j<intervals.size(); ++j)
            {
                if(intervals[j][0]!=-1 &&intervals[i][0]!=-1)
                {
                    
                    if(intervals[i][1]>=intervals[j][0] && intervals[i][0]<=intervals[j][0])
                    { 
                        
                        intervals[i][1]=intervals[i][1]>intervals[j][1]?intervals[i][1]:intervals[j][1];
                        
                        intervals[j][0]=-1;
                        i-=1;
                        break;
                    }
                    else if(intervals[i][0]>=intervals[j][0] && intervals[i][0]<=intervals[j][1])
                    {
                         intervals[i][0]=intervals[j][0];
                         intervals[i][1]=intervals[i][1]>intervals[j][1]?intervals[i][1]:intervals[j][1];
                        intervals[j][0]=-1;
                        i-=1;
                        break;
                    }
                }
                    
                }
                
            }
        
        vector<vector<int>> nInt;
        vector<int> *vect;
        for(int i=0,j=0; i<intervals.size(); ++i)
        {
            if(intervals[i][0]!=-1)
            {
                vect=new vector<int>;
                vect->resize(2);
                vect[j][0]=intervals[i][0];
                vect[j][1]=intervals[i][1];
                nInt.push_back(*vect);
            }
        }
        
        return nInt;
    
            
        }
        
        
};