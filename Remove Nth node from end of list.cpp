class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;

        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fast){
            slow=slow->next;
            fast=fast->next;
        }
        //delete
        ListNode* toDelete=slow->next;
        slow->next=slow->next->next;
        delete toDelete;

        return dummy->next;
    }
};
