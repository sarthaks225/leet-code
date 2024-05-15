#define mod 1000000007
class Solution {
public:
    int pow(int num,long long p){
        if(p==0) return 1;
        long long result=pow(num,p/2);
        result*=result;
        result%=mod;
        if(p%2==1) result*=num;
        result%=mod;
        
        
        return result;
                
    }
    int countGoodNumbers(long long n) {
        long long even=n/2+n%2;
        long long odd=n/2;
        return ( (long long)( pow(5,even) ) * (long long) (pow(4,odd) ) ) %mod;
        
    }
};