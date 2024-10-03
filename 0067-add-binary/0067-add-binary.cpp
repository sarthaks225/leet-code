class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        bool carry = false;
        int i,j;
        for(i= a.size()-1, j = b.size()-1 ; i>=0 && j>=0; --i,--j)
        {
            if(carry)
            {
                
                result = to_string( (a[i] - '0') ^ (b[j] - '0') ^ 1) + result;    
            }
            else result = to_string( (a[i] - '0') ^ (b[j] - '0') ) + result;
            if( (a[i] == '1' && b[j] =='1') || ( (a[i] == '1' || b[j] == '1') && carry) )
            {
                carry = true;
            }
            else carry = false;
        }
        
        while( i >= 0)
        {
            if(carry)
            {
                result = to_string( (a[i] - '0')  ^ 1) + result;    
            }
            else result = a[i] + result;
            if( a[i] == '1' && carry )
            {
                carry = true;
            }
            else carry = false;
            --i;
        }
        
          while( j >= 0)
        {
            if(carry)
            {
                result = to_string( (b[j] - '0')  ^ 1) + result;    
            }
            else result = b[j] + result;
            if( b[j] == '1' && carry )
            {
                carry = true;
            }
            else carry = false;
            --j;
        }
        if(carry) result = '1' + result;
                return result;

        
    }
};