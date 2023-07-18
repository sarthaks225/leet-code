class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int b,s,p;
        b=s=prices[0];
        p=0;
        for(int i=1; i<prices.size(); ++i)
        {
            s=prices[i];
            p=std::max(s-b,p);
            b=std::min(b,s);
        }
        return p;
    }
};