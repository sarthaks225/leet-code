class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>::iterator i1,i2;
        vector<int> result;
        
        i1=nums1.begin();
        i2=nums2.begin();
        while(m && n)
        {
            if(*i1<*i2)
            {
                cout<<*i1<<" ";
                result.push_back(*i1);
                ++i1;
                --m;
            }
            else{
                cout<<*i2<<" ";

                result.push_back(*i2);
                ++i2;
                --n;
            }
            
        }
        if(n!=0)
        {
            m=n;
            i1=i2;
        }
        while(m)
        {
                cout<<*i1<<" ";

            result.push_back(*i1);
            i1++;
            --m;
        }
        cout<<"///"<<endl;
        for(i1=nums1.begin(), i2=result.begin(); i2!=result.end(); ++i2,++i1)
        {
            cout<<*i2;
            *i1=*i2;
        }
        
        
        
        
    }
};