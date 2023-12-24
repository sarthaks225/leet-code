class Solution {
public:
    int minOperations(string s) {
        
        int noOfEvenPos=0;
        int noOfOddPos=0;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]=='0')
            {
                if(i%2==0) ++noOfEvenPos;
                else ++noOfOddPos;
            }
        }
        
        int noOfEvenIndexes=s.size()%2!=0?s.size()/2+1:s.size()/2;
        int noOfOddIndexes=s.size()-noOfEvenIndexes;
        
        return min(noOfEvenIndexes-noOfEvenPos+noOfOddPos , noOfOddIndexes-noOfOddPos+noOfEvenPos);        
    }
};