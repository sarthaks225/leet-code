class Solution {
public:
    int countSubstrings(string s) {
        int count;
        int length;
        length=s.length();
        
        count=length;
        string::iterator i1,i2,i3,end;
        end=s.end();
        for(int i=1; i<length; ++i)
        {
            i1=s.begin();
            for( ;i1!=end-i ;i1++)
            {

            i2=i1;
            i3=i2+i;
              while(i2<i3)
              {
                  if(*i2!=*i3) break;    
                  i2++;
                  i3--;
              }
            if(i2>i3 || i2==i3) count++;
                    
           }
            
        }
        
        return count;
        
    }
};