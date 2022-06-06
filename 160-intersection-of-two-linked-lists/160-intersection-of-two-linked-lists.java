/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode startA,startB; 
        startA=headA; startB=headB;
            while(true)
            {
                if(startA==startB) return startA;
                startA=startA.next;
                startB=startB.next;
                if(startA==null && startB==null) return null;
                if(startA==null) startA=headA; 
                if(startB==null) startB=headB;
                
            }
       
    }
}