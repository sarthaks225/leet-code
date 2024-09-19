class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string result = "";
        for(int i =1000; i != 0; i/=10)
        {
            result += to_string( min(num1 / i, min ( num2 / i, num3 / i) ) );
            num1%=i;
            num2%=i;
            num3%=i;
        }
     
        return stoi(result);
    }
};