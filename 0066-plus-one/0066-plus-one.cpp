class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int>::reverse_iterator i1= digits.rbegin();
        while(i1!= digits.rend())
        {
            if(*i1 == 9)
            {
                *i1=0;
            }
            else{
                *i1+=1;
                break;
            }
            ++i1;
        }
        if(digits[0] == 0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};