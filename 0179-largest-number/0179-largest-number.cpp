class Solution {
public:
    bool static comparator(int a,int b)
    {
        if(a == b) return false;
        string s1 = to_string(a);
        string s2 = to_string(b);
        return (s1+s2) > (s2+s1);

    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comparator);
        string result=  "";
       
        for(auto num : nums)
        {
            if(result == "0" && num == 0) continue;
            result.append( to_string(num));
        }
        return result;
    }
};