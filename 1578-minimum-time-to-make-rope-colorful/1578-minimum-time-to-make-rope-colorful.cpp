class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int curr=0;
        int result=0;
        for(int i=1; i<neededTime.size(); ++i)
        {
            if(colors[curr]==colors[i])
            {
                if(neededTime[curr]<neededTime[i])
                {
                    result+=neededTime[curr];
                    curr=i;
                }
                else{
                    
                    result+=neededTime[i];
                }
                
            }
            else curr=i;
            
        }
     return result;   
    }
};