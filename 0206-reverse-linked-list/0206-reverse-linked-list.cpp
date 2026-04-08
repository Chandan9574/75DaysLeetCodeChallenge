class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* current=head;
       ListNode* Next=head;
       ListNode* prev=NULL;
       while(current!=NULL){
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
       }
       return prev;
    }
};