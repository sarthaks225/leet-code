class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        string::iterator i1,i2;
        
        i1=s.begin();
        i2=t.begin();
        while(i1!=s.end())
        {
          if(*i1!='#') s1.push(*i1);
          else if(!s1.empty()) s1.pop();
          ++i1;
        }
        while(i2!=t.end())
        {
          if(*i2!='#') s2.push(*i2);
          else if(!s2.empty()) s2.pop();
          ++i2;  
        }
 
        int flag=1;
        while(!s1.empty() && !s2.empty())
        {
         if(s1.top()!=s2.top())
         {
             flag=0;
             break;
         }
            s1.pop();
            s2.pop();    
        }
        if(!s1.empty() || !s2.empty()) flag=0;
        
        if(flag==1) return true;
        else return false;
    }
};