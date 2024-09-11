class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int result = 0;
        short binaryOfc = 0;
        short binaryOfa = 0;
        short binaryOfb = 0;
        while( a !=0 || b!=0 || c!=0 )
        {
            binaryOfc = c%2;
            binaryOfa = a%2;
            binaryOfb = b%2;
            if( binaryOfc == 1)
            {
                if( (binaryOfa || binaryOfb) == 0 )
                {
                    ++result;
                }
            }
            else {
                if( (binaryOfa && binaryOfb) == 1)
                {
                    result+=2;
                }
                else if( binaryOfa ^ binaryOfb ) ++result;
            }
            
            c/=2;
            a/=2;
            b/=2;
        }
        return result;
    }
};