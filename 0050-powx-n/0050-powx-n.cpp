class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 || n==0) return 1;
        double q=1;
        double p=x;
        long nn=n>0?n:(long)-1*n;
        while(nn>1)
        {
            
            if(nn%2==0)
            {
                p*=p;
                nn/=2;
                
            }else
            {
                q*=p;
                nn-=1;
            }
        }
        double ans=p*q;
        if(n<0) ans=1/ans;
        return ans;
    }
};