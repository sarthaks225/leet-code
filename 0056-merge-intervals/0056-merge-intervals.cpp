class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> newInt;
        
        newInt.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1; i<intervals.size(); ++i)
        {
            if(newInt.back()[1]>=intervals[i][0])
            {
                newInt.back()[1]=max(newInt.back()[1],intervals[i][1]);
            }
            else
            {
                newInt.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return newInt;
        /*
        
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
    
          */  
        }
        
        
};