class Solution {
public:
    int addDigits(int num) {
        int result=0;
        
        while(num/10 != 0)
        {
            result=0;
            while(num)
            {
                result+= num%10;
                num/=10;
            }
            num=result;
        }
        return num;
        
        
        
        
    }
};