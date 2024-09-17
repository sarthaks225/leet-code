class Solution {
public:
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        
        int result = INT_MAX;
        int counter = 0;
        int currAt = startAt;
        if( targetSeconds <= 99)
        {
            if(targetSeconds/10 !=0)
            {
                if(currAt != targetSeconds/10)
                {
                    counter += moveCost;
                    currAt = targetSeconds/10;
                }
                counter += pushCost;
            }
            // if(targetSeconds % 10 !=0 )
            // {
                if(currAt != targetSeconds%10)
                {
                    counter += moveCost;
                    
                }
                counter +=pushCost;
            // }
             result = counter;
        }
       
        if( targetSeconds < 60) return result;      
        
        currAt = startAt;
        counter = 0;
        int min, sec;
        min = targetSeconds / 60;
        sec = targetSeconds % 60;
        if(min >99) {
            sec = ((min - 99) * 60) + sec;
            if(sec > 99) sec = 99;
            min =99;
        }
        cout << min << ":"<<sec<<endl;
        if(min/10 != 0)
        {
            if(currAt != min/10)
            {
                counter += moveCost;
                currAt = min/10;
            }
            counter += pushCost;
        }

        if(min/10 !=0 ||  min%10 != 0)
        {
            if( currAt != min%10 )
            {
                counter += moveCost;
                currAt = min%10;
            }
            counter += pushCost;
        }
        
        if( min/10!=0 || min%10!=0 ||  sec/10 !=0 )
        {
            if(currAt != sec/10 )
            {
                counter += moveCost;
                currAt = sec/10;
            }
            counter += pushCost;
        }
        
        if( min/10!=0 || min%10!=0 || sec/10!=0 || sec%10 != 0)
        {
            if( currAt != sec%10  )
            {
                counter += moveCost;
                currAt = sec%10;
            }
            counter += pushCost;
        }
        result = result < counter ? result : counter;
        
        if(min <= 99 && sec + 60 <= 99)
        {
            min-=1;
            sec+=60;
             cout << min << ":"<<sec<<endl;
            currAt = startAt;
            counter =0 ;
            if(min/10 != 0)
            {
                if(currAt != min/10)
                {
                    counter += moveCost;
                    currAt = min/10;
                }
                counter += pushCost;
            }

            if(min/10 !=0 ||  min%10 != 0)
            {
                if( currAt != min%10 )
                {
                    counter += moveCost;
                    currAt = min%10;
                }
                counter += pushCost;
            }

            if( min/10!=0 || min%10!=0 ||  sec/10 !=0 )
            {
                if(currAt != sec/10 )
                {
                    counter += moveCost;
                    currAt = sec/10;
                }
                counter += pushCost;
            }

            if( min/10!=0 || min%10!=0 || sec/10!=0 || sec%10 != 0)
            {
                if( currAt != sec%10  )
                {
                    counter += moveCost;
                    currAt = sec%10;
                }
                counter += pushCost;
            }
            result = result < counter ? result : counter;
            
            
            
        }
        return result;
        
    }
    
    
};