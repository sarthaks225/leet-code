class Solution {
public:
    int minBitFlips(int start, int goal) {
        int XOR = start ^ goal;
        int result=  0;
        for( ; XOR >= 1 ; XOR=XOR/2)
        {
            if( XOR%2 == 1 )
            {
                ++result;
            }
        }
        return result;
    }
};