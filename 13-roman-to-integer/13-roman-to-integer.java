class Solution {
    public int romanToInt(String s) {
        
        int I,V,X,L,C,D,M;
        I=1; V=5; X=10; L=50; C=100; D=500; M=1000;
        int strLength=s.length();
        char char1,char2;
        int i=0;
        int out=0;
        while(i<strLength)
        {
            char1=s.charAt(i);
            if(i+1<strLength)
            {    
                char2=s.charAt(i+1);
            if(char1=='I' && char2=='V')
            {
                out+=4;
                i+=2;
                                continue;
            }
            else if(char1=='I' && char2=='X')
            {
                out+=9;
                i+=2;
                                continue;
            }
            else if(char1=='X' && char2=='L') 
            {
                out+=40;
                i+=2;
                                continue;
            }
            else if(char1=='X' && char2=='C') 
            {
                out+=90;
                i+=2;
                                continue;
            }
            else if(char1=='C' && char2=='D') 
            {
                out+=400;
                i+=2;
                                continue;
            }
            else if(char1=='C' && char2=='M')
            {
                 out+=900;
                i+=2;
                continue;    
            }
                
            }
            if(char1=='I') out+=1;
            else if(char1=='V') out+=5;
            else if(char1=='X') out+=10;
            else if(char1=='L') out+=50;
            else if(char1=='C') out+=100;
            else if(char1=='D') out+=500;
            else if(char1=='M') out+=1000;
            ++i;
        }
        
        return out;
        
        
        
        
    }
}