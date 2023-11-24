class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int minePiles=piles.size()/3;
        int result=0;
        for(vector<int>::reverse_iterator i=piles.rbegin(); minePiles-- ; ++i)
        {
            result+=*(++i);            
        }
        return result;
    }
};