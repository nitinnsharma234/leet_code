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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode * fast (head) ;
        ListNode* slow (head);
        while(n--){
            fast=fast->next;
        }
        if(fast==nullptr){
            return head->next;
        }
        ListNode* prev =nullptr;
        while(fast!=nullptr){
            prev = slow ;
            slow = slow-> next ; 
            fast = fast -> next ;
        }
        prev-> next = slow -> next ; 
        delete(slow);
        return head ;
        
    }
};


// head 
// tail delete 
// 