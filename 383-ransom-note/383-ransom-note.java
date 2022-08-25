class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        
        int ransomNoteAlphabats[]=new int[26] ;
        int magazineAlphabats[]=new int[26];
        
        int index,strLength;
        strLength=ransomNote.length();
        for(index=0; index<strLength; ++index)
        {
            
            ++ransomNoteAlphabats[ransomNote.charAt(index)-'a'];
            
        }
        strLength=magazine.length();
        for(index=0; index<strLength; ++index)
        {
            
            ++magazineAlphabats[magazine.charAt(index)-'a'];
    
        }
        
        for(index=0; index<26; ++index)
        {
            if(magazineAlphabats[index]<ransomNoteAlphabats[index]) return false;
                 
        }
        
        
        return true;
    }
}