class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        
        count=s.length();
        
        
        string::iterator i1,i2,i3;
        int flag;
        for(int i=1; i<s.length(); ++i)
        {
            i1=s.begin();
           
           
            
            for( ;i1!=s.end()-i ;i1++)
            {

            i2=i1;
            i3=i2+i;
                
                
            while(i2<i3)
            {
                if(*i2!=*i3)
                {
                    
                     break;    
                }
                
                i2++;
                i3--;
            }
                if(i2>i3 || i2==i3) 
                {
                    
                    count++;
                    
                }
                
            }
            
        }
        
        return count;
        
    }
};