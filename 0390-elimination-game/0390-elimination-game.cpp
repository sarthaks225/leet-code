class Solution {
public:
    int lastRemaining(int n) {
        
        int head=1;
        bool left = true;
        int step = 1;
        while(n>1)
        {
            if(left || n%2 != 0)
            {   // shifting head;
                head += step;
                

            }
            
                if(left) left = false;
                else left = true;
          //  cout<< head << " " << step<<",";
            
            step *= 2;
            n /= 2;
        }
        
        return head;
        
    }
};