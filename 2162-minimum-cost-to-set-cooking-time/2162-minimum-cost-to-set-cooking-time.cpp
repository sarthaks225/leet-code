class Solution {
public:
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        
        int result = INT_MAX;
        int counter = INT_MAX; 
        
        int min, sec;
        min = targetSeconds / 60;
        sec = targetSeconds % 60;
       
        if(min <= 99)
        {
            //cout<<"1)  ";
        
        counter = calculate(startAt, moveCost, pushCost, min, sec);
        //cout<<" "<<counter<<" ";
        //cout << min << ":"<<sec<<endl;
        result = result < counter ? result : counter;    
        }
        
        
        
        
        if(min >99) {
            sec = ((min - 99) * 60) + sec;
            if(sec > 99) sec = 99;
            min =99;
                        cout<<"2)  ";
            
            counter = calculate(startAt, moveCost, pushCost, min, sec);
            //cout<<" "<<counter<<" ";
             //cout << min << ":"<<sec<<endl;
            
            result = result < counter ? result : counter;
            
            min = targetSeconds / 60;
            sec = targetSeconds % 60;
        }
       
        
        
        if(min >=1 && min <= 99 && sec + 60 <= 99)
        {
            min-=1;
            sec+=60;
                       // cout<<"3)  ";

            
            counter=calculate(startAt, moveCost, pushCost, min,sec);
             //cout<<" "<<counter<<" ";
            // cout << min << ":"<<sec<<endl;
            result = result < counter ? result : counter;
        }
        return result;
        
    }
    
    int calculate(int startAt, int moveCost, int pushCost, int min, int sec)
    {
        int counter = 0;
        int currAt = startAt;
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
        
        return counter;
        
    }
    
    
};