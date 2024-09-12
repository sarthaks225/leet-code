class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack < pair<char, int> >st;
        string :: iterator itr = s.begin();
        
        for( itr ; itr != s.end(); ++itr)
        {
            if(st.empty())  st.push(pair<char, int> (*itr, 1));
            else 
            {
                pair<char,int> top = st.top();
                if ( top.first == *itr )
                {
                    st.pop();

                    if( top.second + 1 != k )
                    {
                         top.second++;
                        st.push(top);

                    }

                }
                else 
                {
                    st.push( pair<char,int> (*itr, 1) );
                } 
            }
                       
        }
        string ans="";
        while(!st.empty())
        {
            pair<char, int> top = st.top();
            while(top.second)
            {
                ans+=top.first;
                --top.second;
            }
            st.pop();
        }
              
        
        reverse(ans.begin(), ans.end());
        return ans;
       
    }
};