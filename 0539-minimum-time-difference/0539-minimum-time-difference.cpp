class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(), timePoints.end());
        int result=INT_MAX;
        int bound2 = 24*60;
        int min1=0;
        int min2=0;
        
        for(int i=1; i<timePoints.size(); ++i)
        {
            if( timePoints[i-1] == timePoints[i] )
            {
                return 0;
            }
            else
            {
                
                min1 = stoi( timePoints[i-1].substr(0, timePoints[i-1].find(':'))) * 60;
                min2 = stoi( timePoints[i].substr(0,  timePoints[i].find(':'))) * 60;
                
                min1 += stoi ( timePoints[i-1].substr(timePoints[i-1].find(':')+1));
                min2 += stoi ( timePoints[i].substr(timePoints[i].find(':')+1));
                
                if(min1 == 0 )
                {
                    result = min( result, min(abs(bound2 - min2), min2) );
                }
                else
                {
                    result = min( result, abs(min1 - min2));
                }
            }
        }
        
        
         min1 = stoi( timePoints[0].substr(0, timePoints[0].find(':'))) * 60;
        
          min2 = stoi( timePoints[timePoints.size()-1].substr(0,  timePoints[timePoints.size()-1].find(':'))) * 60;
          min1 += stoi ( timePoints[0].substr(timePoints[0].find(':')+1));
        min2 += stoi ( timePoints[timePoints.size()-1].substr(timePoints[timePoints.size()-1].find(':')+1));
        
        result = min( result, min ( abs(min1 - min2), abs( (bound2 + min1 - min2)) ) );
        return result;
    }
};