class Solution {
public:
    bool static comparator(int a,int b)
    {
        if(a == b) return false;
        string s1 = to_string(a);
        string s2 = to_string(b);
        int i=0;
        while(true)
        {

            if( s1[i] > s2[i]) return true;
            else if(s1[i] < s2[i]) return false;
            ++i;
            if( i == s1.size() && i == s2.size()) return true;
            
            if( i == s1.size() || i == s2.size()) return s1+s2 > s2+s1;
        }
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comparator);
        string result=  "";
        cout<<"--------"<<endl;
        for(auto num : nums)
        {
            if(result == "0" && num == 0) continue;
            result.append( to_string(num));
            cout<<num<<" ";
        }
        return result;
    }
};