class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String alphabet[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
       Set<String> set=new HashSet<>();
        int i;
        String morseString;
        for(String word: words)
        {
            morseString="";
            for(i=0; i<word.length(); ++i)
            {
                morseString+=alphabet[word.charAt(i)-'a'];
            }
            set.add(morseString);
        }
        return set.size();
    }
}