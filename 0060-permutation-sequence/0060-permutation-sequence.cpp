class Solution {
public:
    void generateNext(string &num)
    {
       string::reverse_iterator it1,it2;
        it2=num.rbegin();
        for(it1=it2+1; it1<num.rend(); it1++,it2++)
        {
            if(*it1<*it2) break;
        }
        if(it1==num.rend())
        {
            reverse(num.begin(),num.end());
            return;
        }
        
        for(it2=num.rbegin(); it2<it1; ++it2)
        {
            if(*it1<*it2)
            {
                swap(*it1,*it2);
                break;
            }
        }
        
        reverse(num.rbegin(),it1);
        
    }
    
    string getPermutation(int n, int k) {
        string num="";
        for(int i=1; i<=n; ++i) num+=to_string(i);
        while(--k)
        {
            generateNext(num);
        }
        return num;
    }
};