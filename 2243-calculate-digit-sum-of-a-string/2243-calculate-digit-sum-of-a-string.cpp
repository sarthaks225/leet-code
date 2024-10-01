class Solution {
    private : 
    string summationString(string s)
    {
        int sum=0;
        for(auto i : s)
        {
            sum += i-'0';
        }
        //cout<<"sum : "<<sum<<endl;
        return to_string(sum);
    }
public:
    string digitSum(string s, int k) {
        
        while(s.length() > k)
        {
            string result="";
            for(int i=0; i<s.size(); i+=k)
            {
                string subs=s.substr(i,k);
                //cout<<subs;
                result += summationString(subs);
            }
            s=result;

        }
        
       
        return s;
        
    }
};