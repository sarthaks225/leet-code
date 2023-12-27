class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        vector<int>::iterator prevTime,currTime;
        string::iterator prevColor,currColor;
        
        prevTime=neededTime.begin();
        prevColor=colors.begin();
        
        int result=0;
        for(currTime=prevTime+1, currColor=prevColor+1; currTime<neededTime.end(); ++currColor,++currTime)
        {
            if(*prevColor==*currColor)
            {
                if(*currTime<*prevTime){
                    result+=*currTime;
                    continue;
                }
                else{
                    result+=*prevTime;
                }
            }
                prevTime=currTime;
                prevColor=currColor;
        }
     return result;   
    }
};