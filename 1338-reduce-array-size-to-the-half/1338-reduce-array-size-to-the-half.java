class Solution {
    public int minSetSize(int[] arr) {
        Map<Integer,Integer> map=new HashMap<>();
        Integer value;
        
        for(int indexOfArr: arr)
        {
            if(map.containsKey(indexOfArr))
            {
                   value=map.get(indexOfArr);
                    map.put(indexOfArr,value+1);
            }
            else map.put(indexOfArr,1);
        }
        
        PriorityQueue<Integer> pq=new PriorityQueue<Integer>((a, b) -> b - a);
        map.forEach((code,number)->{
           pq.add(number);
        });
        
        int lengthOfArr=arr.length/2;
        System.out.println(lengthOfArr);
        int out=0;
        int f,j;
        j=0;
        while(!pq.isEmpty())
        {
            f=pq.poll();
            out+=1;
            j+=f;
           
            System.out.println(f);
            if(lengthOfArr<=j) 
            {
                break;
                
            }
        
        }
        if(out==0) return 1;
        return out;
    }
}