class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        // time comp O(n)+O((m+n)log(m+n))
        for(int i=m,j=0; j<n; ++j,++i)
        {
            nums1[i]=nums2[j];
        }
        sort(nums1.begin(),nums1.end());
        
        /*
            //*** time comp O(max(m,n)) + O(m+n)
            //**** space O(m+n)
        vector<int>::iterator i1,i2;
        vector<int> result;
        
        i1=nums1.begin();
        i2=nums2.begin();
        while(m && n)
        {
            if(*i1<*i2)
            {
                result.push_back(*i1);
                ++i1;
                --m;
            }
            else{
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
            result.push_back(*i1);
            i1++;
            --m;
        }
        for(i1=nums1.begin(), i2=result.begin(); i2!=result.end(); ++i2,++i1)
        {
            *i1=*i2;
        }
        
    */      
        
        
    }
};