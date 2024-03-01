class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        short left;
        short right=s.size()-1;
        
        if(s[right]=='0')
        {
            for(left=right-1; left>=0; --left)
            {
                if(s[left]=='1') break;
            }
            swap(s[left],s[right]);
        }
        left=0;
        --right;
        while(left<right)
        {
            if(s[left]=='1') ++left;
            else if(s[right]=='1')
            {
                swap(s[left],s[right]);
                ++left;
                --right;
            }
            else --right;
        }
        
        return s;
    }
};