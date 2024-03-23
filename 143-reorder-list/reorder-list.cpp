/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* reverseLL(ListNode* head){
    ListNode* prev =nullptr;
    ListNode* curr=head;ListNode* nextt=head;
    while(curr!=nullptr){
       
        nextt=curr->next ; 
         curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        ListNode* fast =head;
        ListNode* slow = head;
         ListNode* prev = nullptr;
         if(head->next == nullptr){
            return ;
         }
            while(fast!=nullptr and fast->next!=nullptr){
                prev=slow;
                slow=slow->next ; 
                fast =fast->next-> next ;
            }
            prev->next =nullptr;
            ListNode* rev=reverseLL(slow);
            fast=slow=prev=nullptr;
            fast = head;
            slow=head;
            prev=rev;
             ListNode* ahead=rev;
             ListNode* temp=nullptr;
              while(slow!=nullptr){
                cout<<slow->val<<" "<<prev->val<<" "<<endl;
                fast=slow->next;
                temp=prev;
                ahead=prev->next;
                prev->next=fast;
                slow->next=prev;
                slow=fast;
                prev=ahead;

            }
            

         if(prev!=nullptr){
             temp->next = prev;
         }
           
    }
};