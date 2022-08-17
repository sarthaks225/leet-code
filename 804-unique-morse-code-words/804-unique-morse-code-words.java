class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String alphabet[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
       Set<String> set=new HashSet<>();
        int i,j;
        String morseString;
        for(String word: words)
        {
            morseString="";
            j=word.length();
            for(i=0; i<j; ++i)
            {
                morseString+=alphabet[word.charAt(i)-'a'];
            }
            set.add(morseString);
        }
        return set.size();
    }
}