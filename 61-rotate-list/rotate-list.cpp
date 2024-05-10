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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr or head ->next ==nullptr or k==0){
            return head;
        }
        ListNode * slow (head);
        ListNode * fast(head);
        ListNode * tailLeft=nullptr;
        //tail for left side 
        ListNode * tailRight = nullptr ;
        int len =1;
        //tail of right side after splitting
        while(slow->next!=nullptr){
            slow=slow->next;
            len++;
        }
        k %=len;
        int p =len-k;
        
        // slow=head;
        if(k==0){
            return head;
        }
        slow->next =head;
        while(p--){
                slow = slow ->next;
        }
        // this will be tail after rotating
     
        head =slow->next;
        slow->next = NULL;
        return head;
    }
};
