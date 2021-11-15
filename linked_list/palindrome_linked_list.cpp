class Solution {
public:
   
    //STEP:-1:- FIND MIDDLE POINT OF THE GIVEN LINKED LIST
    ListNode *MidPoint(ListNode* head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //for odd Linked list
        //otherwise it will be even linked list
        if(fast != NULL){
            slow = slow->next;
        }
        return slow;
    }
    
    //STEP:-2:- REVERSE THE LINKED LIST FROM THE MIDDLE POINT TILL END
    
    ListNode *ReverseList(ListNode *head){
        ListNode *prev = NULL;
        ListNode *curr = head;
        while(curr!=NULL){
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
        
    }
    
    //STEP:-3:- COMPARE TWO-HALVES OF THE LINKED LIST USING TWO-POINTERS APPROACH
    bool CompareList(ListNode *head1, ListNode *head2){
        while(head1 != NULL && head2 != NULL){
            if(head1->val != head2->val)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
    }
    
    //STEP:-4:- CHECK IF OUR LINKED LIST IS PALINDROME OR NOT
     bool isPalindrome(ListNode* head) {
          if(head == NULL || head->next == NULL)
              return true;
         ListNode *head1 = head;
         ListNode *mid = MidPoint(head1);
         ListNode *head2 = ReverseList(mid);
         return CompareList(head1,head2);
    }
    
};