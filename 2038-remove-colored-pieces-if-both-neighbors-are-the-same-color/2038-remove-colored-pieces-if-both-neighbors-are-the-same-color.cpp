class Solution {
public:
    bool winnerOfGame(string colors) {
        int aIndex =0;
        int bIndex = 0;
        int aCounter = 0;
        int bCounter =0;
        bool result = false;
        
        while(true)
        {
            int i = 0;
            for( i=aIndex; i<colors.length(); ++i)
            {
                if(colors[i] == 'A') ++aCounter;
                else aCounter = 0;
                if(aCounter == 3) break;
            }
            //cout<< "A : " << aCounter <<endl;
            if(aCounter != 3) return false;
            aCounter = 1;
            aIndex = i;
            
         
            for( i=bIndex; i<colors.length(); ++i)
            {
                if(colors[i] == 'B') ++bCounter;
                else bCounter = 0;
                if(bCounter == 3) break;
            }
            //cout<< "B : " << bCounter <<endl;
            if(bCounter != 3) return true;
            bCounter = 1;
            bIndex = i;
            
           
                
        }
        
        
        return result;      
    }
};