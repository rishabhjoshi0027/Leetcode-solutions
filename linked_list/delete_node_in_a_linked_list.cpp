class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head , *prev = NULL , *after = NULL;
        while (curr != NULL) {
            after = curr->next;            
            curr->next = prev;
            prev = curr;
            curr = after;
        } 
        return prev;
    }
};