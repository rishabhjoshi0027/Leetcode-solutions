public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB){
         ListNode *tempA=headA;
        ListNode *tempB=headB;
        while(tempA != tempB) // even if both NULL NULL is retured
        {
            tempA = (tempA==NULL) ? tempA=headB : tempA=tempA->next; // if null change head to opposite list
            tempB = (tempB==NULL) ? tempB=headA : tempB=tempB->next; // else iterate
        }
        return tempA;
    }
}