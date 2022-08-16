class Solution {
    public int firstUniqChar(String s) {
        
        int frequency[]=new int[26];
        int index=0;
        int totalLength=s.length();
        while(index<totalLength)
        {
            ++frequency[s.charAt(index)-'a'];
            ++index;
        }
        index=0;
        while(index<totalLength)
        {
            
            if(frequency[s.charAt(index)-'a']==1) return index;
            ++index;
        }
        
        return -1;
    }
}