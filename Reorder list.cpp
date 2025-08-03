class Solution {
public:
    void reorderList(ListNode* head) {
       if(!head || !head->next) return;
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode* second=reverseLL(slow->next);
       slow->next=nullptr;
       ListNode* first=head;
       while(second){
        ListNode* temp1=first->next;
        ListNode* temp2=second->next;

        first->next=second;
        second->next=temp1;

        first=temp1;
        second=temp2;
       } 
    }
    private:
    ListNode* reverseLL(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        } return prev;

    }

};
